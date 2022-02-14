
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process {int dbg_hdr_addr; int handle; } ;
struct elf_info {int flags; scalar_t__ module_name; int dbg_hdr_addr; } ;
struct elf_enum_user {void* user; int cb; } ;
typedef int pcs ;
typedef int enum_modules_cb ;
typedef int HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (struct process*,scalar_t__,int ,struct elf_enum_user*) ;
 int VAR_3 ;
 int FUNC_3 (struct process*,struct elf_info*) ;
 int FUNC_4 (struct process*,int ,int) ;

BOOL FUNC_5(HANDLE VAR_4, enum_modules_cb VAR_5, void* VAR_6)
{
    struct process VAR_7;
    struct elf_info VAR_8;
    BOOL VAR_9;
    struct elf_enum_user VAR_10;

    FUNC_4(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.handle = VAR_4;
    VAR_8.flags = VAR_0 | VAR_1;
    if (!FUNC_3(&VAR_7, &VAR_8)) return VAR_2;
    VAR_7.dbg_hdr_addr = VAR_8.dbg_hdr_addr;
    VAR_10.cb = VAR_5;
    VAR_10.user = VAR_6;
    VAR_9 = FUNC_2(&VAR_7, VAR_8.module_name, VAR_3, &VAR_10);
    FUNC_1(FUNC_0(), 0, (char*)VAR_8.module_name);
    return VAR_9;
}
