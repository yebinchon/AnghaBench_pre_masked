
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * vtbl; } ;
typedef TYPE_1__ stgmed_obj_t ;
struct TYPE_8__ {TYPE_1__ stgmed_obj; TYPE_3__* buf; } ;
typedef TYPE_2__ stgmed_file_obj_t ;
struct TYPE_9__ {int IUnknown_iface; } ;
typedef TYPE_3__ stgmed_buf_t ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_0 ;

__attribute__((used)) static stgmed_obj_t *FUNC_2(stgmed_buf_t *VAR_1)
{
    stgmed_file_obj_t *VAR_2 = FUNC_1(sizeof(*VAR_2));

    VAR_2->stgmed_obj.vtbl = &VAR_0;

    FUNC_0(&VAR_1->IUnknown_iface);
    VAR_2->buf = VAR_1;

    return &VAR_2->stgmed_obj;
}
