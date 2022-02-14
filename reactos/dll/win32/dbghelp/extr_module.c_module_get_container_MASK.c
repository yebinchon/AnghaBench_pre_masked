
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {struct module const* lmodules; } ;
struct TYPE_2__ {scalar_t__ BaseOfImage; scalar_t__ ImageSize; } ;
typedef struct module {TYPE_1__ module; struct module const* next; } const module ;



__attribute__((used)) static struct module* FUNC_0(const struct process* VAR_0,
                                    const struct module* VAR_1)
{
    struct module* VAR_2;

    for (VAR_2 = VAR_0->lmodules; VAR_2; VAR_2 = VAR_2->next)
    {
        if (VAR_2 != VAR_1 &&
            VAR_2->module.BaseOfImage <= VAR_1->module.BaseOfImage &&
            VAR_2->module.BaseOfImage + VAR_2->module.ImageSize >=
            VAR_1->module.BaseOfImage + VAR_1->module.ImageSize)
            return VAR_2;
    }
    return ((void*)0);
}
