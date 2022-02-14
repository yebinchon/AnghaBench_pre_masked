
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gif_result ;
struct TYPE_3__ {unsigned char* gif_data; int buffer_position; int buffer_size; } ;
typedef TYPE_1__ gif_animation ;


 unsigned char VAR_0 ;

 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static gif_result FUNC_0(gif_animation *VAR_4) {
    unsigned char *VAR_5, *VAR_6;
    int VAR_7;
    unsigned int VAR_8;



    VAR_5 = (unsigned char *)(VAR_4->gif_data + VAR_4->buffer_position);
    VAR_6 = (unsigned char *)(VAR_4->gif_data + VAR_4->buffer_size);
    VAR_7 = (unsigned int)(VAR_6 - VAR_5);



    while (VAR_5[0] == VAR_1) {
        ++VAR_5;



        switch(VAR_5[0]) {



            case 128:
                ++VAR_5;
                break;





            default:
                VAR_5 += (2 + VAR_5[1]);
        }




        VAR_7 = (unsigned int)(VAR_6 - VAR_5);
        VAR_8 = 0;
        while (VAR_5[0] != VAR_0) {
            VAR_8 = VAR_5[0] + 1;
            if ((VAR_7 -= VAR_8) < 0)
                return VAR_2;
            VAR_5 += VAR_8;
        }
        ++VAR_5;
    }



    VAR_4->buffer_position = (unsigned int)(VAR_5 - VAR_4->gif_data);
    return VAR_3;
}
