
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_osd_res {double w; double display_par; int h; } ;
struct ass_state {int res_y; double res_x; int render; TYPE_1__* track; } ;
struct TYPE_2__ {int PlayResX; int PlayResY; } ;
typedef TYPE_1__ ASS_Track ;


 double FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct ass_state *VAR_1, struct mp_osd_res *VAR_2)
{
    ASS_Track *VAR_3 = VAR_1->track;
    int VAR_4 = VAR_3->PlayResX;
    int VAR_5 = VAR_3->PlayResY;

    double VAR_6 = 1.0 * VAR_2->w / FUNC_0(VAR_2->h, 1);
    if (VAR_2->display_par > 0)
        VAR_6 = VAR_6 / VAR_2->display_par;

    VAR_3->PlayResY = VAR_1->res_y ? VAR_1->res_y : VAR_0;
    VAR_3->PlayResX = VAR_1->res_x ? VAR_1->res_x : VAR_3->PlayResY * VAR_6;



    if (VAR_4 != VAR_3->PlayResX || VAR_5 != VAR_3->PlayResY)
        FUNC_1(VAR_1->render, 1, 1);
}
