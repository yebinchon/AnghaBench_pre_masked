
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drr_class {int qdisc; int rate_est; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drr_class*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct Qdisc *VAR_0, struct drr_class *VAR_1)
{
 FUNC_0(&VAR_1->rate_est);
 FUNC_2(VAR_1->qdisc);
 FUNC_1(VAR_1);
}
