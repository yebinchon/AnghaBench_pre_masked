
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {struct module* lmodules; } ;
struct TYPE_2__ {scalar_t__ BaseOfImage; scalar_t__ ImageSize; } ;
struct module {int type; TYPE_1__ module; struct module* next; } ;
typedef enum module_type { ____Placeholder_module_type } module_type ;
typedef scalar_t__ DWORD64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

struct module* FUNC_1(const struct process* VAR_5, DWORD64 VAR_6,
                                   enum module_type VAR_7)
{
    struct module* VAR_8;

    if (VAR_7 == VAR_3)
    {
        if ((VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_2)) ||
            (VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_0)) ||
            (VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_1)))
            return VAR_8;
    }
    else
    {
        for (VAR_8 = VAR_5->lmodules; VAR_8; VAR_8 = VAR_8->next)
        {
            if (VAR_7 == VAR_8->type && VAR_6 >= VAR_8->module.BaseOfImage &&
                VAR_6 < VAR_8->module.BaseOfImage + VAR_8->module.ImageSize)
                return VAR_8;
        }
    }
    FUNC_0(VAR_4);
    return VAR_8;
}
