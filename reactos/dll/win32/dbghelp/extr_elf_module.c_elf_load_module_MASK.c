
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {scalar_t__ dbg_hdr_addr; } ;
struct module {int dummy; } ;
struct TYPE_2__ {struct module* module; int flags; } ;
struct elf_load {TYPE_1__ elf_info; void* ret; int const* name; struct process* pcs; } ;
typedef int WCHAR ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*,struct process*,int ,unsigned long) ;
 int FUNC_1 (struct module*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (struct process*,int *,int ,struct elf_load*) ;
 int VAR_2 ;
 void* FUNC_4 (struct process*,int const*,unsigned long,int ,TYPE_1__*) ;
 int const* FUNC_5 (int const*,char) ;

struct module* FUNC_6(struct process* VAR_3, const WCHAR* VAR_4, unsigned long VAR_5)
{
    struct elf_load VAR_6;

    FUNC_0("(%p %s %08lx)\n", VAR_3, FUNC_2(VAR_4), VAR_5);

    VAR_6.elf_info.flags = VAR_0;
    VAR_6.ret = VAR_1;

    if (VAR_3->dbg_hdr_addr)
    {
        VAR_6.pcs = VAR_3;



        VAR_6.name = FUNC_5(VAR_4, '/');
        if (!VAR_6.name++) VAR_6.name = VAR_4;
        VAR_6.ret = VAR_1;

        if (!FUNC_3(VAR_3, ((void*)0), VAR_2, &VAR_6))
            return ((void*)0);
    }
    else if (VAR_5)
    {
        VAR_6.name = VAR_4;
        VAR_6.ret = FUNC_4(VAR_3, VAR_6.name, VAR_5, 0, &VAR_6.elf_info);
    }
    if (!VAR_6.ret) return ((void*)0);
    FUNC_1(VAR_6.elf_info.module);
    return VAR_6.elf_info.module;
}
