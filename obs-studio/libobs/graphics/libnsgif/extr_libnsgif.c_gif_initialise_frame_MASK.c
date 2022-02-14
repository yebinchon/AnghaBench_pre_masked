
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int gif_result ;
struct TYPE_7__ {int frame_pointer; int display; int virgin; scalar_t__ disposal_method; int transparency; int frame_delay; int redraw_required; unsigned int redraw_x; unsigned int redraw_width; unsigned int redraw_y; unsigned int redraw_height; } ;
typedef TYPE_1__ gif_frame ;
struct TYPE_8__ {int frame_count; unsigned char* gif_data; int buffer_position; int buffer_size; int frame_holders; int decoded_frame; int frame_count_partial; TYPE_1__* frames; } ;
typedef TYPE_2__ gif_animation ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned char VAR_11 ;
 int VAR_12 ;
 unsigned char VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static gif_result FUNC_3(gif_animation *VAR_15) {
    int VAR_16;
    gif_frame *VAR_17;

    unsigned char *VAR_18, *VAR_19;
    int VAR_20;
    unsigned int VAR_21 = 0;
    unsigned int VAR_22, VAR_23, VAR_24, VAR_25;
    unsigned int VAR_26, VAR_27;
    bool VAR_28 = 1;
    gif_result VAR_29;



    VAR_16 = VAR_15->frame_count;



    VAR_18 = (unsigned char *)(VAR_15->gif_data + VAR_15->buffer_position);
    VAR_19 = (unsigned char *)(VAR_15->gif_data + VAR_15->buffer_size);
    VAR_20 = (unsigned int)(VAR_19 - VAR_18);



    if ((VAR_20 > 0) && (VAR_18[0] == VAR_13)) return VAR_12;




    if (VAR_20 < 6) return VAR_7;




    if (VAR_16 > 4096) return VAR_4;



    if ((int)VAR_15->frame_holders <= VAR_16) {


        if ((VAR_17 = (gif_frame *)FUNC_2(VAR_15->frames,
                    (VAR_16 + 1) * sizeof(gif_frame))) == ((void*)0))
            return VAR_9;
        VAR_15->frames = VAR_17;
        VAR_15->frame_holders = VAR_16 + 1;
    }




    VAR_15->frames[VAR_16].frame_pointer = VAR_15->buffer_position;
    VAR_15->frames[VAR_16].display = 0;
    VAR_15->frames[VAR_16].virgin = 1;
    VAR_15->frames[VAR_16].disposal_method = 0;
    VAR_15->frames[VAR_16].transparency = 0;
    VAR_15->frames[VAR_16].frame_delay = 100;
    VAR_15->frames[VAR_16].redraw_required = 0;



    if (VAR_15->decoded_frame == VAR_16)
        VAR_15->decoded_frame = VAR_10;
    VAR_15->buffer_position = (unsigned int)(VAR_18 - VAR_15->gif_data);
    if ((VAR_29 = FUNC_0(VAR_15, VAR_16)) != VAR_12)
        return VAR_29;
    VAR_18 = (VAR_15->gif_data + VAR_15->buffer_position);
    VAR_20 = (unsigned int)(VAR_19 - VAR_18);



    if ((VAR_20 = (unsigned int)(VAR_19 - VAR_18)) < 1)
        return VAR_8;
    else if (VAR_18[0] == VAR_13) {
        VAR_15->buffer_position = (unsigned int)(VAR_18 - VAR_15->gif_data);
        VAR_15->frame_count = VAR_16 + 1;
        return VAR_12;
    }



    if (VAR_18[0] != VAR_6) return VAR_4;



    VAR_24 = VAR_18[1] | (VAR_18[2] << 8);
    VAR_25 = VAR_18[3] | (VAR_18[4] << 8);
    VAR_22 = VAR_18[5] | (VAR_18[6] << 8);
    VAR_23 = VAR_18[7] | (VAR_18[8] << 8);




    if (!VAR_28) {
        if (VAR_15->frames[VAR_16].redraw_x > VAR_24) {
            VAR_15->frames[VAR_16].redraw_width += (VAR_15->frames[VAR_16].redraw_x - VAR_24);
            VAR_15->frames[VAR_16].redraw_x = VAR_24;
        }
        if (VAR_15->frames[VAR_16].redraw_y > VAR_25) {
            VAR_15->frames[VAR_16].redraw_height += (VAR_15->frames[VAR_16].redraw_y - VAR_25);
            VAR_15->frames[VAR_16].redraw_y = VAR_25;
        }
        if ((VAR_24 + VAR_22) > (VAR_15->frames[VAR_16].redraw_x + VAR_15->frames[VAR_16].redraw_width))
            VAR_15->frames[VAR_16].redraw_width = (VAR_24 + VAR_22) - VAR_15->frames[VAR_16].redraw_x;
        if ((VAR_25 + VAR_23) > (VAR_15->frames[VAR_16].redraw_y + VAR_15->frames[VAR_16].redraw_height))
            VAR_15->frames[VAR_16].redraw_height = (VAR_25 + VAR_23) - VAR_15->frames[VAR_16].redraw_y;
    } else {
        VAR_28 = 0;
        VAR_15->frames[VAR_16].redraw_x = VAR_24;
        VAR_15->frames[VAR_16].redraw_y = VAR_25;
        VAR_15->frames[VAR_16].redraw_width = VAR_22;
        VAR_15->frames[VAR_16].redraw_height = VAR_23;
    }




    VAR_15->frames[VAR_16].redraw_required = ((VAR_15->frames[VAR_16].disposal_method == VAR_3) ||
                        (VAR_15->frames[VAR_16].disposal_method == VAR_5));



    if (FUNC_1(VAR_15, (VAR_24 + VAR_22), (VAR_25 + VAR_23)))
        return VAR_9;



    VAR_21 = VAR_18[9];
    VAR_27 = 2 << (VAR_21 & VAR_1);



    VAR_18 += 10;
    VAR_20 = (unsigned int)(VAR_19 - VAR_18);
    VAR_15->frame_count_partial = VAR_16 + 1;



    if (VAR_21 & VAR_0) {
        VAR_18 += 3 * VAR_27;
        if ((VAR_20 = (unsigned int)(VAR_19 - VAR_18)) < 0)
            return VAR_8;
    }



    if (VAR_18[0] > VAR_11)
        return VAR_2;



    VAR_18++;
    if (--VAR_20 < 0)
        return VAR_8;




    VAR_26 = 0;
    while (VAR_26 != 1) {
        VAR_26 = VAR_18[0] + 1;


        if ((int)(VAR_20 - VAR_26) < 0) {






            if (VAR_20 >= 2) {
                VAR_18[0] = 0;
                VAR_18[1] = VAR_13;
                VAR_20 = 1;
                ++VAR_18;
                break;
            } else
                return VAR_8;
        } else {
            VAR_20 -= VAR_26;
            VAR_18 += VAR_26;
        }
    }



    VAR_15->buffer_position = (unsigned int)(VAR_18 - VAR_15->gif_data);
    VAR_15->frame_count = VAR_16 + 1;
    VAR_15->frames[VAR_16].display = 1;



    if (VAR_20 < 1)
        return VAR_8;
    else
        if (VAR_18[0] == VAR_13) return VAR_12;
    return VAR_14;
}
