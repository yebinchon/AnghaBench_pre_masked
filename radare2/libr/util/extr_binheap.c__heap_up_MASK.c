
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* cmp ) (void*,void*) ;int a; } ;
typedef TYPE_1__ RBinHeap ;


 void* FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,size_t,void*) ;
 scalar_t__ FUNC_2 (void*,void*) ;

__attribute__((used)) static inline void FUNC_3(RBinHeap *VAR_0, size_t VAR_1, void *VAR_2) {
 size_t VAR_3;
 for (; VAR_1 && (VAR_3 = (VAR_1-1) >> 1, VAR_0->cmp (VAR_2, FUNC_0 (&VAR_0->a, VAR_3)) < 0); VAR_1 = VAR_3) {
  FUNC_1 (&VAR_0->a, VAR_1, FUNC_0 (&VAR_0->a, VAR_3));
 }
 FUNC_1 (&VAR_0->a, VAR_1, VAR_2);
}
