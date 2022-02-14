
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int stgmed_obj_t ;
struct TYPE_5__ {TYPE_1__* buf; } ;
typedef TYPE_2__ stgmed_file_obj_t ;
struct TYPE_4__ {int IUnknown_iface; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(stgmed_obj_t *VAR_0)
{
    stgmed_file_obj_t *VAR_1 = (stgmed_file_obj_t*)VAR_0;

    FUNC_0(&VAR_1->buf->IUnknown_iface);
    FUNC_1(VAR_1);
}
