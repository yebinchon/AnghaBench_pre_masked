
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct match_data {int * matches; struct criteria* criteria; } ;
struct criteria {int dummy; } ;
typedef int list_t ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,struct match_data*) ;

list_t *FUNC_2(struct criteria *VAR_1) {
 list_t *VAR_2 = FUNC_0();
 struct match_data VAR_3 = {
  .criteria = VAR_1,
  .matches = VAR_2,
 };
 FUNC_1(VAR_0, &VAR_3);
 return VAR_2;
}
