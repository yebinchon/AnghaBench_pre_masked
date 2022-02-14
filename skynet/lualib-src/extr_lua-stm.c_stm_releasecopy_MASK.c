
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm_copy {struct stm_copy* msg; int reference; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct stm_copy*) ;

__attribute__((used)) static void
FUNC_2(struct stm_copy *VAR_0) {
 if (VAR_0 == ((void*)0))
  return;
 if (FUNC_0(&VAR_0->reference) == 0) {
  FUNC_1(VAR_0->msg);
  FUNC_1(VAR_0);
 }
}
