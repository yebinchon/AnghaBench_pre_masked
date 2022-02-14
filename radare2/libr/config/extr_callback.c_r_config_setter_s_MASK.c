
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * value; int ** cb_ptr_s; } ;
typedef TYPE_1__ RConfigNode ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;

__attribute__((used)) static bool FUNC_2(void *VAR_0) {
 RConfigNode *VAR_1 = VAR_0;
 if (!VAR_1->value || !*VAR_1->value) {
  FUNC_0 (*VAR_1->cb_ptr_s);
  *VAR_1->cb_ptr_s = ((void*)0);
 } else {
  *VAR_1->cb_ptr_s = FUNC_1 (*VAR_1->cb_ptr_s, VAR_1->value);
 }
 return 1;
}
