
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; struct TYPE_5__* elements; int (* dtor ) (int ) ;} ;
typedef TYPE_1__ spl_ptr_heap ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(spl_ptr_heap *VAR_0) {
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->count; ++VAR_1) {
  VAR_0->dtor(FUNC_1(VAR_0, VAR_1));
 }

 FUNC_0(VAR_0->elements);
 FUNC_0(VAR_0);
}
