
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * toc; } ;
struct TYPE_4__ {int * toc; } ;
struct TYPE_6__ {TYPE_2__ ds; TYPE_1__ jg; } ;
struct pdb_file_info {int kind; int stream_dict; TYPE_3__ u; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;


 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pdb_file_info* VAR_0)
{
    switch (VAR_0->kind)
    {
    case 128:
        FUNC_2(VAR_0->u.jg.toc);
        VAR_0->u.jg.toc = ((void*)0);
        break;
    case 129:
        FUNC_2(VAR_0->u.ds.toc);
        VAR_0->u.ds.toc = ((void*)0);
        break;
    }
    FUNC_1(FUNC_0(), 0, VAR_0->stream_dict);
}
