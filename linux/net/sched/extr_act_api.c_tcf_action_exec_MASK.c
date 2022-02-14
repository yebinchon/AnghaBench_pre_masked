
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_result {int dummy; } ;
struct tc_action {int goto_chain; TYPE_1__* ops; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int (* act ) (struct sk_buff*,struct tc_action const*,struct tcf_result*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct tc_action const*,struct tcf_result*) ;
 int FUNC_5 (struct tc_action const*,struct tcf_result*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct sk_buff *VAR_8, struct tc_action **VAR_9,
      int VAR_10, struct tcf_result *VAR_11)
{
 u32 VAR_12 = 0;
 u32 VAR_13 = VAR_0;
 int VAR_14;
 int VAR_15 = VAR_4;

 if (FUNC_3(VAR_8))
  return VAR_4;

restart_act_graph:
 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++) {
  const struct tc_action *VAR_16 = VAR_9[VAR_14];

  if (VAR_12 > 0) {
   VAR_12 -= 1;
   continue;
  }
repeat:
  VAR_15 = VAR_16->ops->act(VAR_8, VAR_16, VAR_11);
  if (VAR_15 == VAR_6)
   goto repeat;

  if (FUNC_0(VAR_15, VAR_3)) {
   VAR_12 = VAR_15 & VAR_1;
   if (!VAR_12 || (VAR_12 > VAR_10)) {

    return VAR_4;
   } else {
    VAR_13 -= 1;
    if (VAR_13 > 0)
     goto restart_act_graph;
    else
     return VAR_4;
   }
  } else if (FUNC_0(VAR_15, VAR_2)) {
   if (FUNC_6(!FUNC_2(VAR_16->goto_chain))) {
    FUNC_1("can't go to NULL chain!\n");
    return VAR_7;
   }
   FUNC_5(VAR_16, VAR_11);
  }

  if (VAR_15 != VAR_5)
   break;
 }

 return VAR_15;
}
