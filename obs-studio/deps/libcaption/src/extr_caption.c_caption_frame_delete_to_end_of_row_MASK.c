
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int libcaption_stauts_t ;
struct TYPE_5__ {int col; int row; } ;
struct TYPE_6__ {TYPE_1__ state; scalar_t__ write; } ;
typedef TYPE_2__ caption_frame_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int,int ,int ,int ) ;
 int VAR_3 ;

libcaption_stauts_t FUNC_1(caption_frame_t* VAR_4)
{
    int VAR_5;
    if (VAR_4->write) {
        for (VAR_5 = VAR_4->state.col; VAR_5 < VAR_2; ++VAR_5) {
            FUNC_0(VAR_4, VAR_4->state.row, VAR_5, VAR_3, 0, VAR_0);
        }
    }





    return VAR_1;
}
