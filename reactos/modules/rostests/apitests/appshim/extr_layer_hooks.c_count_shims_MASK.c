
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* hooks; } ;
typedef TYPE_1__ expect_shim_data ;
struct TYPE_5__ {scalar_t__ Library; } ;
typedef size_t DWORD ;


 size_t FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static DWORD FUNC_1(expect_shim_data* VAR_0)
{
    DWORD VAR_1;
    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->hooks) && VAR_0->hooks[VAR_1].Library;)
    {
        ++VAR_1;
    }
    return VAR_1;
}
