
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {struct module* lmodules; } ;
struct TYPE_2__ {int ModuleName; } ;
struct module {TYPE_1__ module; struct module* next; } ;
typedef int WCHAR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int const*,int ) ;

struct module* FUNC_2(const struct process* VAR_1, const WCHAR* VAR_2)
{
    struct module* VAR_3;

    for (VAR_3 = VAR_1->lmodules; VAR_3; VAR_3 = VAR_3->next)
    {
        if (!FUNC_1(VAR_2, VAR_3->module.ModuleName)) return VAR_3;
    }
    FUNC_0(VAR_0);
    return ((void*)0);
}
