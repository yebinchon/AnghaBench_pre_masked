
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct process {int dummy; } ;
struct TYPE_5__ {TYPE_1__* pdb_info; } ;
struct module_format {TYPE_2__ u; } ;
struct TYPE_6__ {scalar_t__ hMap; scalar_t__ image; } ;
struct TYPE_4__ {unsigned int used_subfiles; TYPE_3__* pdb_files; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,struct module_format*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(struct process* VAR_0, struct module_format* VAR_1)
{
    unsigned VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->u.pdb_info->used_subfiles; VAR_2++)
    {
        FUNC_4(&VAR_1->u.pdb_info->pdb_files[VAR_2]);
        if (VAR_1->u.pdb_info->pdb_files[VAR_2].image)
            FUNC_3(VAR_1->u.pdb_info->pdb_files[VAR_2].image);
        if (VAR_1->u.pdb_info->pdb_files[VAR_2].hMap)
            FUNC_0(VAR_1->u.pdb_info->pdb_files[VAR_2].hMap);
    }
    FUNC_2(FUNC_1(), 0, VAR_1);
}
