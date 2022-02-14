
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int utf8_char_t ;
typedef int eia608_style_t ;
struct TYPE_5__ {int front; } ;
typedef TYPE_1__ caption_frame_t ;
struct TYPE_6__ {int uln; int const* data; int sty; } ;
typedef TYPE_2__ caption_frame_cell_t ;


 int const* VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int,int) ;

const utf8_char_t* FUNC_1(caption_frame_t* VAR_2, int VAR_3, int VAR_4, eia608_style_t* VAR_5, int* VAR_6)
{

    caption_frame_cell_t* VAR_7 = FUNC_0(&VAR_2->front, VAR_3, VAR_4);

    if (!VAR_7) {
        if (VAR_5) {
            (*VAR_5) = VAR_1;
        }

        if (VAR_6) {
            (*VAR_6) = 0;
        }

        return VAR_0;
    }

    if (VAR_5) {
        (*VAR_5) = VAR_7->sty;
    }

    if (VAR_6) {
        (*VAR_6) = VAR_7->uln;
    }

    return &VAR_7->data[0];
}
