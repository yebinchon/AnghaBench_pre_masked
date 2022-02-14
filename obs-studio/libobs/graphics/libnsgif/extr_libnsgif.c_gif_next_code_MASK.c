
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int curbit; int code_size; int lastbit; int get_done; unsigned char* buf; unsigned char* direct; int last_byte; unsigned char* gif_data; int buffer_position; int zero_data_block; scalar_t__ buffer_size; } ;
typedef TYPE_1__ gif_animation ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_0(gif_animation *VAR_3, int VAR_4) {
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    unsigned char *VAR_10;

    (void)VAR_4;

    VAR_7 = VAR_3->curbit + VAR_3->code_size;
    if (VAR_7 >= VAR_3->lastbit) {
        if (VAR_3->get_done)
            return VAR_0;
        VAR_3->buf[0] = VAR_3->direct[VAR_3->last_byte - 2];
        VAR_3->buf[1] = VAR_3->direct[VAR_3->last_byte - 1];


        VAR_3->direct = VAR_3->gif_data + VAR_3->buffer_position;
        VAR_3->zero_data_block = ((VAR_8 = VAR_3->direct[0]) == 0);
        if ((VAR_3->buffer_position + VAR_8) >= VAR_3->buffer_size)
            return VAR_1;
        if (VAR_8 == 0)
            VAR_3->get_done = 1;
        else {
            VAR_3->direct -= 1;
            VAR_3->buf[2] = VAR_3->direct[2];
            VAR_3->buf[3] = VAR_3->direct[3];
        }
        VAR_3->buffer_position += VAR_8 + 1;


        VAR_3->last_byte = 2 + VAR_8;
        VAR_3->curbit = (VAR_3->curbit - VAR_3->lastbit) + 16;
        VAR_3->lastbit = (2 + VAR_8) << 3;
        VAR_7 = VAR_3->curbit + VAR_3->code_size;
    }

    VAR_5 = VAR_3->curbit >> 3;
    if (VAR_5 < 2)
        VAR_10 = VAR_3->buf;
    else
        VAR_10 = VAR_3->direct;

    VAR_9 = VAR_10[VAR_5];
    VAR_6 = (VAR_7 >> 3) - 1;
    if (VAR_5 <= VAR_6) {
        VAR_9 |= (VAR_10[VAR_5 + 1] << 8);
        if (VAR_5 < VAR_6)
            VAR_9 |= (VAR_10[VAR_5 + 2] << 16);
    }
    VAR_9 = (VAR_9 >> (VAR_3->curbit % 8)) & VAR_2[VAR_3->code_size];
    VAR_3->curbit += VAR_3->code_size;
    return VAR_9;
}
