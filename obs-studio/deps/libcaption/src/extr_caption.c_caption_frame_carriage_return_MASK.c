
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int libcaption_stauts_t ;
struct TYPE_5__ {scalar_t__ row; int rup; scalar_t__ col; } ;
struct TYPE_6__ {int write; TYPE_1__ state; } ;
typedef TYPE_2__ caption_frame_t ;
typedef int caption_frame_cell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;

libcaption_stauts_t FUNC_4(caption_frame_t* VAR_4)
{
    if (0 > VAR_4->state.row || VAR_3 <= VAR_4->state.row) {
        return VAR_0;
    }

    int VAR_5 = VAR_4->state.row - (VAR_4->state.rup - 1);

    if (0 >= VAR_5 || !FUNC_0(VAR_4)) {
        return VAR_1;
    }

    for (; VAR_5 < VAR_3; ++VAR_5) {
        uint8_t* VAR_6 = (uint8_t*)FUNC_1(VAR_4->write, VAR_5 - 1, 0);
        uint8_t* VAR_7 = (uint8_t*)FUNC_1(VAR_4->write, VAR_5 - 0, 0);
        FUNC_2(VAR_6, VAR_7, sizeof(caption_frame_cell_t) * VAR_2);
    }

    VAR_4->state.col = 0;
    caption_frame_cell_t* VAR_8 = FUNC_1(VAR_4->write, VAR_3 - 1, 0);
    FUNC_3(VAR_8, 0, sizeof(caption_frame_cell_t) * VAR_2);
    return VAR_1;
}
