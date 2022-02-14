
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* ptr; } ;
struct TYPE_5__ {size_t size; int elements; int * coll; int * ref; TYPE_1__ addr; } ;
typedef TYPE_2__ phpdbg_watchpoint_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int *,int ) ;

void FUNC_1(void *VAR_1, size_t VAR_2, phpdbg_watchpoint_t *VAR_3) {
 VAR_3->addr.ptr = VAR_1;
 VAR_3->size = VAR_2;
 VAR_3->ref = ((void*)0);
 VAR_3->coll = ((void*)0);
 FUNC_0(&VAR_3->elements, 8, VAR_0, ((void*)0), 0);
}
