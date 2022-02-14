
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t len; } ;
struct TYPE_8__ {TYPE_1__ v; } ;
struct TYPE_7__ {scalar_t__ (* cmp ) (void*,void*) ;TYPE_3__ a; } ;
typedef TYPE_2__ RBinHeap ;


 void* FUNC_0 (TYPE_3__*,size_t) ;
 int FUNC_1 (TYPE_3__*,size_t,void*) ;
 scalar_t__ FUNC_2 (void*,void*) ;
 scalar_t__ FUNC_3 (void*,void*) ;

__attribute__((used)) static inline void FUNC_4(RBinHeap *VAR_0, size_t VAR_1, void *VAR_2) {
 size_t VAR_3;
 for (; VAR_3 = VAR_1 * 2 + 1, VAR_3 < VAR_0->a.v.len; VAR_1 = VAR_3) {
  if (VAR_3 + 1 < VAR_0->a.v.len && VAR_0->cmp (FUNC_0 (&VAR_0->a, VAR_3+1), FUNC_0 (&VAR_0->a, VAR_3)) < 0) {
   VAR_3++;
  }
  if (VAR_0->cmp (FUNC_0 (&VAR_0->a, VAR_3), VAR_2) >= 0) {
   break;
  }
  FUNC_1 (&VAR_0->a, VAR_1, FUNC_0 (&VAR_0->a, VAR_3));
 }
 FUNC_1 (&VAR_0->a, VAR_1, VAR_2);
}
