
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {double eM11; double eM12; double eM21; double eM22; double eDx; double eDy; } ;
struct TYPE_9__ {TYPE_3__ world_transform; scalar_t__ wndOrgY; scalar_t__ vportOrgY; scalar_t__ wndOrgX; scalar_t__ vportOrgX; scalar_t__ wndExtY; scalar_t__ vportExtY; scalar_t__ wndExtX; scalar_t__ vportExtX; } ;
struct TYPE_10__ {TYPE_3__ init_transform; TYPE_1__ state; } ;
typedef TYPE_2__ enum_emh_data ;
typedef TYPE_3__ XFORM ;
typedef int HDC ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(HDC VAR_0, const enum_emh_data *VAR_1)
{
    XFORM VAR_2, VAR_3;
    double VAR_4, VAR_5;

    VAR_4 = (double)VAR_1->state.vportExtX / (double)VAR_1->state.wndExtX;
    VAR_5 = (double)VAR_1->state.vportExtY / (double)VAR_1->state.wndExtY;
    VAR_2.eM11 = VAR_4;
    VAR_2.eM12 = 0.0;
    VAR_2.eM21 = 0.0;
    VAR_2.eM22 = VAR_5;
    VAR_2.eDx = (double)VAR_1->state.vportOrgX - VAR_4 * (double)VAR_1->state.wndOrgX;
    VAR_2.eDy = (double)VAR_1->state.vportOrgY - VAR_5 * (double)VAR_1->state.wndOrgY;

    FUNC_0(&VAR_3, &VAR_1->state.world_transform, &VAR_2);
    FUNC_0(&VAR_3, &VAR_3, &VAR_1->init_transform);

    if (!FUNC_2(VAR_0, &VAR_3))
    {
        FUNC_1("World transform failed!\n");
    }
}
