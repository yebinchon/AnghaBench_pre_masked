
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {struct module* lmodules; } ;
struct TYPE_2__ {int const* LoadedImageName; } ;
struct module {TYPE_1__ module; struct module* next; } ;
typedef int const WCHAR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int const* FUNC_1 (int const*,int *) ;
 int FUNC_2 (int const*,int const*) ;

struct module* FUNC_3(const struct process* VAR_1, const WCHAR* VAR_2)
{
    struct module* VAR_3;
    const WCHAR* VAR_4;


    for (VAR_3 = VAR_1->lmodules; VAR_3; VAR_3 = VAR_3->next)
    {
        if (!FUNC_2(VAR_2, VAR_3->module.LoadedImageName))
            return VAR_3;
    }

    VAR_4 = FUNC_1(VAR_2, ((void*)0));
    for (VAR_3 = VAR_1->lmodules; VAR_3; VAR_3 = VAR_3->next)
    {
        if (!FUNC_2(VAR_4, FUNC_1(VAR_3->module.LoadedImageName, ((void*)0))))
            return VAR_3;
    }
    FUNC_0(VAR_0);
    return ((void*)0);
}
