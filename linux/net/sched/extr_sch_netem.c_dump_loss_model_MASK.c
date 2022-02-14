
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_netem_gimodel {int k1; int h; int r; int p; int p23; int p14; int p32; int p31; int p13; } ;
struct tc_netem_gemodel {int k1; int h; int r; int p; int p23; int p14; int p32; int p31; int p13; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {int a4; int a3; int a2; int a1; int a5; } ;
struct netem_sched_data {int loss_model; TYPE_1__ clg; } ;
typedef int gi ;
typedef int ge ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int,struct tc_netem_gimodel*) ;

__attribute__((used)) static int FUNC_4(const struct netem_sched_data *VAR_3,
      struct sk_buff *VAR_4)
{
 struct nlattr *VAR_5;

 VAR_5 = FUNC_2(VAR_4, VAR_2);
 if (VAR_5 == ((void*)0))
  goto nla_put_failure;

 switch (VAR_3->loss_model) {
 case 128:

  FUNC_0(VAR_4, VAR_5);
  return 0;

 case 130: {
  struct tc_netem_gimodel VAR_6 = {
   .p13 = VAR_3->clg.a1,
   .p31 = VAR_3->clg.a2,
   .p32 = VAR_3->clg.a3,
   .p14 = VAR_3->clg.a4,
   .p23 = VAR_3->clg.a5,
  };

  if (FUNC_3(VAR_4, VAR_1, sizeof(VAR_6), &VAR_6))
   goto nla_put_failure;
  break;
 }
 case 129: {
  struct tc_netem_gemodel VAR_7 = {
   .p = VAR_3->clg.a1,
   .r = VAR_3->clg.a2,
   .h = VAR_3->clg.a3,
   .k1 = VAR_3->clg.a4,
  };

  if (FUNC_3(VAR_4, VAR_0, sizeof(VAR_7), &VAR_7))
   goto nla_put_failure;
  break;
 }
 }

 FUNC_1(VAR_4, VAR_5);
 return 0;

nla_put_failure:
 FUNC_0(VAR_4, VAR_5);
 return -1;
}
