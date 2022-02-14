
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int gif_result ;
struct TYPE_5__ {unsigned char* gif_data; int buffer_position; int buffer_size; unsigned char loop_count; TYPE_1__* frames; } ;
typedef TYPE_2__ gif_animation ;
struct TYPE_4__ {unsigned char frame_delay; int transparency; unsigned char transparency_index; unsigned char disposal_method; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;



 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static gif_result FUNC_1(gif_animation *VAR_8, const int VAR_9) {
    unsigned char *VAR_10, *VAR_11;
    int VAR_12;
    unsigned int VAR_13;



    VAR_10 = (unsigned char *)(VAR_8->gif_data + VAR_8->buffer_position);
    VAR_11 = (unsigned char *)(VAR_8->gif_data + VAR_8->buffer_size);



    while (VAR_10[0] == VAR_2) {
        ++VAR_10;
        VAR_12 = (unsigned int)(VAR_11 - VAR_10);



        switch(VAR_10[0]) {
            case 128:
                if (VAR_12 < 6) return VAR_5;
                VAR_8->frames[VAR_9].frame_delay = VAR_10[3] | (VAR_10[4] << 8);
                if (VAR_10[2] & VAR_7) {
                    VAR_8->frames[VAR_9].transparency = 1;
                    VAR_8->frames[VAR_9].transparency_index = VAR_10[5];
                }
                VAR_8->frames[VAR_9].disposal_method = ((VAR_10[2] & VAR_1) >> 2);





                if (VAR_8->frames[VAR_9].disposal_method == VAR_3)
                    VAR_8->frames[VAR_9].disposal_method = VAR_4;
                VAR_10 += (2 + VAR_10[1]);
                break;
            case 130:
                if (VAR_12 < 17) return VAR_5;
                if ((VAR_10[1] == 0x0b) &&
                    (FUNC_0((const char *) VAR_10 + 2,
                        "NETSCAPE2.0", 11) == 0) &&
                    (VAR_10[13] == 0x03) &&
                    (VAR_10[14] == 0x01)) {
                        VAR_8->loop_count = VAR_10[15] | (VAR_10[16] << 8);
                }
                VAR_10 += (2 + VAR_10[1]);
                break;




            case 129:
                ++VAR_10;
                break;





            default:
                VAR_10 += (2 + VAR_10[1]);
        }




        VAR_12 = (unsigned int)(VAR_11 - VAR_10);
        VAR_13 = 0;
        while (VAR_10[0] != VAR_0) {
            VAR_13 = VAR_10[0] + 1;
            if ((VAR_12 -= VAR_13) < 0)
                return VAR_5;
            VAR_10 += VAR_13;
        }
        ++VAR_10;
    }



    VAR_8->buffer_position = (unsigned int)(VAR_10 - VAR_8->gif_data);
    return VAR_6;
}
