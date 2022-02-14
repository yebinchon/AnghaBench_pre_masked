
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct stream {int buf_end; int buf_cur; int requested_buffer_size; int buffer_mask; void* buffer; int buf_start; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct stream*,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct stream*,void*,int,int ) ;
 void* FUNC_5 (struct stream*,int) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static bool FUNC_7(struct stream *VAR_2, uint32_t VAR_3)
{

    int VAR_4 = VAR_2->buf_end - VAR_2->buf_start;
    int VAR_5 = VAR_2->buf_cur - VAR_2->buf_start;
    VAR_3 = FUNC_0(VAR_3, VAR_4);

    VAR_3 = FUNC_0(VAR_3, VAR_2->requested_buffer_size);


    VAR_3 = FUNC_0(VAR_3, VAR_1);

    VAR_3 = FUNC_3(VAR_3);
    if (!VAR_3 || VAR_3 > VAR_0 / 8)
        return 0;

    if (VAR_3 == VAR_2->buffer_mask + 1)
        return 1;

    FUNC_1(VAR_2, "resize stream to %d bytes\n", VAR_3);

    void *VAR_6 = FUNC_5(VAR_2, VAR_3);
    if (!VAR_6)
        return 0;

    int VAR_7 = 0;
    if (VAR_2->buffer)
        VAR_7 = FUNC_4(VAR_2, VAR_6, VAR_3, VAR_2->buf_start);
    FUNC_2(VAR_7 == VAR_4);
    FUNC_2(VAR_5 <= VAR_4);
    VAR_2->buf_start = 0;
    VAR_2->buf_cur = VAR_5;
    VAR_2->buf_end = VAR_7;

    FUNC_6(VAR_2->buffer);

    VAR_2->buffer = VAR_6;
    VAR_2->buffer_mask = VAR_3 - 1;

    return 1;
}
