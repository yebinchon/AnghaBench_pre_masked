
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vo {int dheight; int dwidth; TYPE_1__* priv; } ;
struct TYPE_7__ {int d3d_in_scene; scalar_t__ d3d_device; } ;
typedef TYPE_1__ d3d_priv ;
struct TYPE_8__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_2__ RECT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct vo *VAR_0)
{
    d3d_priv *VAR_1 = VAR_0->priv;

    if (VAR_1->d3d_device && VAR_1->d3d_in_scene) {
        if (FUNC_0(FUNC_1(VAR_1->d3d_device))) {
            FUNC_3(VAR_1, "EndScene failed.\n");
        }
    }
    VAR_1->d3d_in_scene = 0;

    RECT VAR_2 = {0, 0, VAR_0->dwidth, VAR_0->dheight};
    if (!VAR_1->d3d_device ||
        FUNC_0(FUNC_2(VAR_1->d3d_device, &VAR_2, 0, 0, 0))) {
        FUNC_4(VAR_1, "Trying to reinitialize uncooperative video adapter.\n");
        if (!FUNC_5(VAR_1)) {
            FUNC_4(VAR_1, "Reinitialization failed.\n");
            return;
        } else {
            FUNC_4(VAR_1, "Video adapter reinitialized.\n");
        }
    }
}
