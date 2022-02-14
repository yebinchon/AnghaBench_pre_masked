
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* eohptr; } ;
typedef TYPE_1__ varatt_expanded ;
typedef int ptr ;
struct TYPE_6__ {int eoh_ro_ptr; int eoh_rw_ptr; int eoh_context; int const* eoh_methods; int vl_len_; } ;
typedef int MemoryContext ;
typedef int ExpandedObjectMethods ;
typedef TYPE_2__ ExpandedObjectHeader ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,TYPE_1__*,int) ;

void
FUNC_3(ExpandedObjectHeader *VAR_3,
    const ExpandedObjectMethods *VAR_4,
    MemoryContext VAR_5)
{
 varatt_expanded VAR_6;

 VAR_3->vl_len_ = VAR_0;
 VAR_3->eoh_methods = VAR_4;
 VAR_3->eoh_context = VAR_5;

 VAR_6.eohptr = VAR_3;

 FUNC_0(VAR_3->eoh_rw_ptr, VAR_2);
 FUNC_2(FUNC_1(VAR_3->eoh_rw_ptr), &VAR_6, sizeof(VAR_6));

 FUNC_0(VAR_3->eoh_ro_ptr, VAR_1);
 FUNC_2(FUNC_1(VAR_3->eoh_ro_ptr), &VAR_6, sizeof(VAR_6));
}
