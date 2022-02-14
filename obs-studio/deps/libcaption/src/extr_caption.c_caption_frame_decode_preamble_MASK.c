
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int libcaption_stauts_t ;
typedef int eia608_style_t ;
struct TYPE_4__ {int row; int col; int uln; int sty; } ;
struct TYPE_5__ {TYPE_1__ state; } ;
typedef TYPE_2__ caption_frame_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int*,int*,int *,int*,int*) ;

libcaption_stauts_t FUNC_1(caption_frame_t* VAR_1, uint16_t VAR_2)
{
    eia608_style_t VAR_3;
    int VAR_4, VAR_5, VAR_6, VAR_7;

    if (FUNC_0(VAR_2, &VAR_4, &VAR_5, &VAR_3, &VAR_6, &VAR_7)) {
        VAR_1->state.row = VAR_4;
        VAR_1->state.col = VAR_5;
        VAR_1->state.sty = VAR_3;
        VAR_1->state.uln = VAR_7;
    }

    return VAR_0;
}
