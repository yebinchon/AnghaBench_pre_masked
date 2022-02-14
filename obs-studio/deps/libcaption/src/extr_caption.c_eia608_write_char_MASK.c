
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int libcaption_stauts_t ;
struct TYPE_5__ {scalar_t__ row; scalar_t__ col; int uln; int sty; } ;
struct TYPE_6__ {TYPE_1__ state; } ;
typedef TYPE_2__ caption_frame_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__,int ,int ,char*) ;

libcaption_stauts_t FUNC_1(caption_frame_t* VAR_3, char* VAR_4)
{
    if (0 == VAR_4 || 0 == VAR_4[0] || VAR_2 <= VAR_3->state.row || 0 > VAR_3->state.row || VAR_1 <= VAR_3->state.col || 0 > VAR_3->state.col) {

    } else if (FUNC_0(VAR_3, VAR_3->state.row, VAR_3->state.col, VAR_3->state.sty, VAR_3->state.uln, VAR_4)) {
        VAR_3->state.col += 1;
    }

    return VAR_0;
}
