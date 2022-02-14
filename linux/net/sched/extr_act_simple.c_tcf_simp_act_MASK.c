
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_result {int dummy; } ;
struct TYPE_2__ {int packets; } ;
struct tcf_defact {int tcf_action; int tcf_lock; TYPE_1__ tcf_bstats; scalar_t__ tcfd_defdata; int tcf_tm; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct tcf_defact* FUNC_5 (struct tc_action const*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_0, const struct tc_action *VAR_1,
   struct tcf_result *VAR_2)
{
 struct tcf_defact *VAR_3 = FUNC_5(VAR_1);

 FUNC_2(&VAR_3->tcf_lock);
 FUNC_4(&VAR_3->tcf_tm);
 FUNC_0(&VAR_3->tcf_bstats, VAR_0);





 FUNC_1("simple: %s_%d\n",
        (char *)VAR_3->tcfd_defdata, VAR_3->tcf_bstats.packets);
 FUNC_3(&VAR_3->tcf_lock);
 return VAR_3->tcf_action;
}
