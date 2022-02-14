
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_mqprio_qopt {int num_tc; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct mqprio_sched {int flags; int * max_rate; int * min_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,int *) ;

__attribute__((used)) static int FUNC_4(struct mqprio_sched *VAR_4,
        struct tc_mqprio_qopt *VAR_5, struct sk_buff *VAR_6)
{
 struct nlattr *VAR_7;
 int VAR_8;

 if (VAR_4->flags & VAR_3) {
  VAR_7 = FUNC_2(VAR_6, VAR_1);
  if (!VAR_7)
   goto nla_put_failure;

  for (VAR_8 = 0; VAR_8 < VAR_5->num_tc; VAR_8++) {
   if (FUNC_3(VAR_6, VAR_1,
        sizeof(VAR_4->min_rate[VAR_8]),
        &VAR_4->min_rate[VAR_8]))
    goto nla_put_failure;
  }
  FUNC_1(VAR_6, VAR_7);
 }

 if (VAR_4->flags & VAR_2) {
  VAR_7 = FUNC_2(VAR_6, VAR_0);
  if (!VAR_7)
   goto nla_put_failure;

  for (VAR_8 = 0; VAR_8 < VAR_5->num_tc; VAR_8++) {
   if (FUNC_3(VAR_6, VAR_0,
        sizeof(VAR_4->max_rate[VAR_8]),
        &VAR_4->max_rate[VAR_8]))
    goto nla_put_failure;
  }
  FUNC_1(VAR_6, VAR_7);
 }
 return 0;

nla_put_failure:
 FUNC_0(VAR_6, VAR_7);
 return -1;
}
