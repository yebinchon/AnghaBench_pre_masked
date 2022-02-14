
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* toc; } ;
struct TYPE_9__ {TYPE_2__* toc; } ;
struct TYPE_12__ {TYPE_5__ ds; TYPE_3__ jg; } ;
struct pdb_file_info {int kind; TYPE_6__ u; } ;
struct TYPE_10__ {int* file_size; } ;
struct TYPE_8__ {TYPE_1__* file; } ;
struct TYPE_7__ {int size; } ;
typedef size_t DWORD ;





__attribute__((used)) static unsigned FUNC_0(const struct pdb_file_info* VAR_0, DWORD VAR_1)
{
    switch (VAR_0->kind)
    {
    case 128: return VAR_0->u.jg.toc->file[VAR_1].size;
    case 129: return VAR_0->u.ds.toc->file_size[VAR_1];
    }
    return 0;
}
