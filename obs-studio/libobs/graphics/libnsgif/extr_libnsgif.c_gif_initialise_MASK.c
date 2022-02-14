
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ gif_result ;
typedef int gif_frame ;
struct TYPE_6__ {int * (* bitmap_create ) (int,int) ;} ;
struct TYPE_7__ {unsigned int buffer_size; unsigned char* gif_data; int buffer_position; unsigned int* local_colour_table; unsigned int* global_colour_table; scalar_t__ frame_count_partial; unsigned char width; unsigned char height; unsigned char global_colours; int colour_table_size; unsigned char background_index; unsigned char aspect_ratio; int loop_count; int frame_holders; TYPE_1__ bitmap_callbacks; int * frame_image; int * frames; int decoded_frame; scalar_t__ frame_count; } ;
typedef TYPE_2__ gif_animation ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 unsigned char VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int * (*) (int,int)) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;
 int * FUNC_6 (int,int) ;

gif_result FUNC_7(gif_animation *VAR_12, size_t VAR_13, unsigned char *VAR_14) {
    unsigned char *VAR_15;
    unsigned int VAR_16;
    gif_result VAR_17;







    VAR_12->buffer_size = (unsigned int)VAR_13;
    VAR_12->gif_data = VAR_14;



    if (VAR_12->buffer_size < 13) return VAR_3;



    VAR_15 = VAR_12->gif_data + VAR_12->buffer_position;



    if (VAR_12->buffer_position == 0) {




        VAR_12->frame_image = ((void*)0);
        VAR_12->frames = ((void*)0);
        VAR_12->local_colour_table = ((void*)0);
        VAR_12->global_colour_table = ((void*)0);



        VAR_12->frame_count = 0;
        VAR_12->frame_count_partial = 0;
        VAR_12->decoded_frame = VAR_6;






        if (FUNC_5((const char *) VAR_15, "GIF", 3) != 0)
            return VAR_2;
        VAR_15 += 3;






          VAR_15 += 3;
        VAR_12->width = VAR_15[0] | (VAR_15[1] << 8);
        VAR_12->height = VAR_15[2] | (VAR_15[3] << 8);
        VAR_12->global_colours = (VAR_15[4] & VAR_0);
        VAR_12->colour_table_size = (2 << (VAR_15[4] & VAR_1));
        VAR_12->background_index = VAR_15[5];
        VAR_12->aspect_ratio = VAR_15[6];
        VAR_12->loop_count = 1;
        VAR_15 += 7;





        if (((VAR_12->width == 640) && (VAR_12->height == 480)) ||
                ((VAR_12->width == 640) && (VAR_12->height == 512)) ||
                ((VAR_12->width == 800) && (VAR_12->height == 600)) ||
                ((VAR_12->width == 1024) && (VAR_12->height == 768)) ||
                ((VAR_12->width == 1280) && (VAR_12->height == 1024)) ||
                ((VAR_12->width == 1600) && (VAR_12->height == 1200)) ||
                ((VAR_12->width == 0) || (VAR_12->height == 0)) ||
                ((VAR_12->width > 2048) || (VAR_12->height > 2048))) {
            VAR_12->width = 1;
            VAR_12->height = 1;
        }





        VAR_12->global_colour_table = (unsigned int *)FUNC_1(VAR_7, sizeof(int));
        VAR_12->local_colour_table = (unsigned int *)FUNC_1(VAR_7, sizeof(int));
        if ((VAR_12->global_colour_table == ((void*)0)) || (VAR_12->local_colour_table == ((void*)0))) {
            FUNC_2(VAR_12);
            return VAR_5;
        }




        VAR_12->global_colour_table[0] = VAR_9;




        if (VAR_12->buffer_size == 14) {
            if (VAR_15[0] == VAR_10)
                return VAR_8;
            else
                return VAR_3;
        }



        if ((VAR_12->frames = (gif_frame *)FUNC_4(sizeof(gif_frame))) == ((void*)0)) {
            FUNC_2(VAR_12);
            return VAR_5;
        }
        VAR_12->frame_holders = 1;



        FUNC_0(VAR_12->bitmap_callbacks.bitmap_create);
        if ((VAR_12->frame_image = VAR_12->bitmap_callbacks.bitmap_create(VAR_12->width, VAR_12->height)) == ((void*)0)) {
            FUNC_2(VAR_12);
            return VAR_5;
        }



        VAR_12->buffer_position = (unsigned int)(VAR_15 - VAR_12->gif_data);
    }




    if (VAR_12->global_colour_table[0] == VAR_9) {


        if (VAR_12->global_colours) {
            if (VAR_12->buffer_size < (VAR_12->colour_table_size * 3 + 12)) {
                return VAR_3;
            }
            for (VAR_16 = 0; VAR_16 < VAR_12->colour_table_size; VAR_16++) {







                unsigned char *VAR_18 = (unsigned char *) &VAR_12->
                        global_colour_table[VAR_16];

                VAR_18[0] = VAR_15[0];
                VAR_18[1] = VAR_15[1];
                VAR_18[2] = VAR_15[2];
                VAR_18[3] = 0xff;

                VAR_15 += 3;
            }
            VAR_12->buffer_position = (unsigned int)(VAR_15 - VAR_12->gif_data);
        } else {


            unsigned int *VAR_19 = VAR_12->global_colour_table;

            VAR_19[0] = 0x00000000;

            ((unsigned char *) VAR_19)[3] = 0xff;

            VAR_19[1] = 0xffffffff;
        }
    }



    while ((VAR_17 = FUNC_3(VAR_12)) == VAR_11);



    if ((VAR_17 == VAR_5) ||
            (VAR_17 == VAR_2))
        return VAR_17;




    if ((VAR_17 == VAR_3) && (VAR_12->frame_count_partial > 0))
        return VAR_4;



    return VAR_17;
}
