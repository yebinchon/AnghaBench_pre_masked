
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_object {int lock; int * copy; int reference; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct stm_object*) ;

__attribute__((used)) static void
FUNC_5(struct stm_object *VAR_0) {
 FUNC_2(&VAR_0->lock);
 if (FUNC_0(&VAR_0->reference) == 0) {

  FUNC_1(VAR_0->copy == ((void*)0));
  FUNC_4(VAR_0);
  return;
 }
 FUNC_3(&VAR_0->lock);
}
