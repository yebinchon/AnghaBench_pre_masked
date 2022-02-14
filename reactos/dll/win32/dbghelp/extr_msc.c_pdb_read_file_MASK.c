
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int toc; } ;
struct TYPE_4__ {int toc; } ;
struct TYPE_6__ {TYPE_2__ ds; TYPE_1__ jg; } ;
struct pdb_file_info {int kind; TYPE_3__ u; scalar_t__ image; } ;
struct PDB_JG_HEADER {int dummy; } ;
struct PDB_DS_HEADER {int dummy; } ;
typedef int DWORD ;




 void* FUNC_0 (struct PDB_DS_HEADER const*,int ,int ) ;
 void* FUNC_1 (struct PDB_JG_HEADER const*,int ,int ) ;

__attribute__((used)) static void* FUNC_2(const struct pdb_file_info* VAR_0,
                           DWORD VAR_1)
{
    switch (VAR_0->kind)
    {
    case 128:
        return FUNC_1((const struct PDB_JG_HEADER*)VAR_0->image,
                                VAR_0->u.jg.toc, VAR_1);
    case 129:
        return FUNC_0((const struct PDB_DS_HEADER*)VAR_0->image,
                                VAR_0->u.ds.toc, VAR_1);
    }
    return ((void*)0);
}
