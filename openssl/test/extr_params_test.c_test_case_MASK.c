
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int prov; TYPE_1__* app; int desc; } ;
struct TYPE_3__ {int (* constructed_params ) () ;int static_params; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_3(int VAR_1)
{
    FUNC_0("Case: %s", VAR_0[VAR_1].desc);

    return FUNC_2(VAR_0[VAR_1].app->static_params,
                             VAR_0[VAR_1].prov)
        && (VAR_0[VAR_1].app->constructed_params == ((void*)0)
            || FUNC_2(VAR_0[VAR_1].app->constructed_params(),
                                 VAR_0[VAR_1].prov));
}
