
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pool {int dummy; } ;
struct TYPE_6__ {TYPE_2__* elf_info; } ;
struct module_format {TYPE_3__ u; } ;
struct TYPE_4__ {int LoadedImageName; } ;
struct module {scalar_t__ type; TYPE_1__ module; struct module_format** format_info; } ;
struct hash_table {int dummy; } ;
struct TYPE_5__ {int file_map; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct module*,int *,struct pool*,struct hash_table*) ;
 int FUNC_3 (struct pool*,struct hash_table*,int) ;
 int FUNC_4 (struct pool*) ;
 int FUNC_5 (struct pool*,int) ;

BOOL FUNC_6(struct module* VAR_4)
{
    BOOL VAR_5 = VAR_3;
    struct pool VAR_6;
    struct hash_table VAR_7;
    struct module_format* VAR_8;

    if (VAR_4->type != VAR_1 || !(VAR_8 = VAR_4->format_info[VAR_0]) || !VAR_8->u.elf_info)
    {
 FUNC_0("Bad elf module '%s'\n", FUNC_1(VAR_4->module.LoadedImageName));
 return VAR_2;
    }

    FUNC_5(&VAR_6, 65536);
    FUNC_3(&VAR_6, &VAR_7, 256);

    VAR_5 = FUNC_2(VAR_4, &VAR_8->u.elf_info->file_map, &VAR_6, &VAR_7);

    FUNC_4(&VAR_6);
    return VAR_5;
}
