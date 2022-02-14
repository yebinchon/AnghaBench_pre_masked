
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct process {int dbg_hdr_addr; } ;
struct elf_info {int flags; int dbg_hdr_addr; TYPE_4__* module; } ;
struct TYPE_8__ {TYPE_3__** format_info; } ;
struct TYPE_6__ {TYPE_1__* elf_info; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_5__ {int elf_loader; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct process*,struct elf_info*) ;
 int FUNC_1 (TYPE_4__*,int ) ;

BOOL FUNC_2(struct process* VAR_5)
{
    struct elf_info VAR_6;

    VAR_6.flags = VAR_1 | VAR_2;
    if (!FUNC_0(VAR_5, &VAR_6)) return VAR_3;
    VAR_6.module->format_info[VAR_0]->u.elf_info->elf_loader = 1;
    FUNC_1(VAR_6.module, VAR_4);
    return (VAR_5->dbg_hdr_addr = VAR_6.dbg_hdr_addr) != 0;
}
