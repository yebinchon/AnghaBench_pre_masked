
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtable {int dst; } ;
struct fib_nh_common {int nhc_pcpu_rth_output; int nhc_rth_input; } ;


 struct rtable* FUNC_0 (struct rtable**,struct rtable*,struct rtable*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct rtable*) ;
 scalar_t__ FUNC_5 (struct rtable*) ;

__attribute__((used)) static bool FUNC_6(struct fib_nh_common *VAR_0, struct rtable *VAR_1)
{
 struct rtable *VAR_2, *VAR_3, **VAR_4;
 bool VAR_5 = 1;

 if (FUNC_5(VAR_1)) {
  VAR_4 = (struct rtable **)&VAR_0->nhc_rth_input;
 } else {
  VAR_4 = (struct rtable **)FUNC_3(VAR_0->nhc_pcpu_rth_output);
 }
 VAR_2 = *VAR_4;




 FUNC_1(&VAR_1->dst);
 VAR_3 = FUNC_0(VAR_4, VAR_2, VAR_1);
 if (VAR_3 == VAR_2) {
  if (VAR_2) {
   FUNC_4(VAR_2);
   FUNC_2(&VAR_2->dst);
  }
 } else {
  FUNC_2(&VAR_1->dst);
  VAR_5 = 0;
 }

 return VAR_5;
}
