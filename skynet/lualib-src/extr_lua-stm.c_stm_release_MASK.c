
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_object {scalar_t__ reference; int lock; int * copy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct stm_object*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct stm_object *VAR_0) {
 FUNC_0(VAR_0->copy);
 FUNC_1(&VAR_0->lock);

 FUNC_4(VAR_0->copy);
 VAR_0->copy = ((void*)0);
 if (--VAR_0->reference > 0) {

  FUNC_2(&VAR_0->lock);
  return;
 }

 FUNC_3(VAR_0);
}
