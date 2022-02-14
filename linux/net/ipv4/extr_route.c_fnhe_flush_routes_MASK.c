
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtable {int dst; } ;
struct fib_nh_exception {int fnhe_rth_output; int fnhe_rth_input; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct rtable* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct fib_nh_exception *VAR_0)
{
 struct rtable *VAR_1;

 VAR_1 = FUNC_3(VAR_0->fnhe_rth_input);
 if (VAR_1) {
  FUNC_0(VAR_0->fnhe_rth_input, ((void*)0));
  FUNC_1(&VAR_1->dst);
  FUNC_2(&VAR_1->dst);
 }
 VAR_1 = FUNC_3(VAR_0->fnhe_rth_output);
 if (VAR_1) {
  FUNC_0(VAR_0->fnhe_rth_output, ((void*)0));
  FUNC_1(&VAR_1->dst);
  FUNC_2(&VAR_1->dst);
 }
}
