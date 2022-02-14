
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int d3d_in_scene; int d3d_device; } ;
typedef TYPE_1__ d3d_priv ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;

__attribute__((used)) static bool FUNC_3(d3d_priv *VAR_0)
{
    if (!VAR_0->d3d_in_scene) {
        if (FUNC_0(FUNC_1(VAR_0->d3d_device))) {
            FUNC_2(VAR_0, "BeginScene failed.\n");
            return 0;
        }
        VAR_0->d3d_in_scene = 1;
    }
    return 1;
}
