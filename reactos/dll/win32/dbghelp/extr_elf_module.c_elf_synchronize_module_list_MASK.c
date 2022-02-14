
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct process {struct module* lmodules; } ;
struct module {scalar_t__ type; struct module* next; TYPE_3__** format_info; int is_virtual; } ;
struct elf_module_info {int elf_loader; scalar_t__ elf_mark; } ;
struct TYPE_4__ {int flags; } ;
struct elf_load {int * name; int ret; TYPE_1__ elf_info; struct process* pcs; } ;
struct TYPE_5__ {struct elf_module_info* elf_info; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct process*,int *,int ,struct elf_load*) ;
 int VAR_5 ;
 int FUNC_1 (struct process*,struct module*) ;

BOOL FUNC_2(struct process* VAR_6)
{
    struct module* VAR_7;
    struct elf_load VAR_8;

    for (VAR_7 = VAR_6->lmodules; VAR_7; VAR_7 = VAR_7->next)
    {
        if (VAR_7->type == VAR_1 && !VAR_7->is_virtual)
            VAR_7->format_info[VAR_0]->u.elf_info->elf_mark = 0;
    }

    VAR_8.pcs = VAR_6;
    VAR_8.elf_info.flags = VAR_2;
    VAR_8.ret = VAR_3;
    VAR_8.name = ((void*)0);

    if (!FUNC_0(VAR_6, ((void*)0), VAR_5, &VAR_8))
        return VAR_3;

    VAR_7 = VAR_6->lmodules;
    while (VAR_7)
    {
        if (VAR_7->type == VAR_1 && !VAR_7->is_virtual)
        {
            struct elf_module_info* VAR_9 = VAR_7->format_info[VAR_0]->u.elf_info;

            if (!VAR_9->elf_mark && !VAR_9->elf_loader)
            {
                FUNC_1(VAR_6, VAR_7);

                VAR_7 = VAR_6->lmodules;
                continue;
            }
        }
        VAR_7 = VAR_7->next;
    }
    return VAR_4;
}
