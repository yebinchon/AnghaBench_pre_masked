
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct fall {int n_rot; int y_stop; scalar_t__ x_pos; int shape; } ;
struct blocks {size_t* last_digits; struct block_state* states; TYPE_1__* gif; } ;
struct block_state {size_t num_to_draw; int fall_index; size_t block_index; scalar_t__ x_shift; } ;
typedef enum rotation { ____Placeholder_rotation } rotation ;
struct TYPE_2__ {unsigned char* frame; int w; int h; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 size_t* VAR_7 ;
 int FUNC_1 (int ,scalar_t__,int,int,int,int,unsigned char*) ;
 int FUNC_2 (int ,int ,int,int,int,int,int,unsigned char*) ;
 struct fall** VAR_8 ;
 int FUNC_3 (unsigned char*,int ,size_t) ;

uint64_t FUNC_4(struct blocks *VAR_9, bool VAR_10)
{
    unsigned char *VAR_11 = VAR_9->gif->frame;
    int VAR_12 = 0;
    int VAR_13;
    int VAR_14 = VAR_9->gif->w;
    int VAR_15 = VAR_9->gif->h;

    FUNC_3(VAR_11, VAR_0, (size_t)(VAR_14 * VAR_15));

    for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
        struct block_state *VAR_16 = &VAR_9->states[VAR_13];

        if (VAR_16->num_to_draw != VAR_9->last_digits[VAR_13]) {
            VAR_16->fall_index = 0;
            VAR_16->block_index = 0;
            VAR_9->last_digits[VAR_13] = VAR_16->num_to_draw;
        }

        if (VAR_16->block_index < VAR_7[VAR_16->num_to_draw]) {
            const struct fall *VAR_17 =
                &VAR_8[VAR_16->num_to_draw][VAR_16->block_index];
            int VAR_18 = VAR_17->n_rot;

            switch (VAR_18) {
            case 1:
                if (VAR_16->fall_index < VAR_17->y_stop / 2)
                    VAR_18 = VAR_2;
                break;
            case 2:
                if (VAR_16->fall_index < VAR_17->y_stop / 3)
                    VAR_18 = VAR_2;
                else if (VAR_16->fall_index < VAR_17->y_stop / 3 * 2)
                    VAR_18 = VAR_4;
                break;
            case 3:
                if (VAR_16->fall_index < VAR_17->y_stop / 4)
                    VAR_18 = VAR_2;
                else if (VAR_16->fall_index < VAR_17->y_stop / 4 * 2)
                    VAR_18 = VAR_4;
                else if (VAR_16->fall_index < VAR_17->y_stop / 4 * 3)
                    VAR_18 = VAR_3;
                break;
            }

            FUNC_0(VAR_18 >= 0 && VAR_18 < VAR_5);

            FUNC_1(VAR_17->shape, VAR_17->x_pos + VAR_16->x_shift,
                       VAR_16->fall_index - 1, VAR_14, VAR_15,
                       (enum rotation)VAR_18, VAR_11);
            VAR_16->fall_index++;

            if (VAR_16->fall_index > VAR_17->y_stop) {
                VAR_16->fall_index = 0;
                VAR_16->block_index++;
            }

            VAR_12++;
        }

        if (VAR_16->block_index > 0) {
            for (int VAR_19 = 0; VAR_19 < VAR_16->block_index; VAR_19++) {
                const struct fall *VAR_20 = &VAR_8[VAR_16->num_to_draw][VAR_19];

                FUNC_1(VAR_20->shape, VAR_20->x_pos + VAR_16->x_shift,
                           VAR_20->y_stop - 1, VAR_14, VAR_15, VAR_20->n_rot, VAR_11);
            }
        }
    }

    if (VAR_10) {
        FUNC_2(VAR_6, VAR_1, 15, 13, VAR_14, VAR_15, VAR_2, VAR_11);
        FUNC_2(VAR_6, VAR_1, 15, 9, VAR_14, VAR_15, VAR_2, VAR_11);
    }

    return VAR_12 ? 100 : 500;
}
