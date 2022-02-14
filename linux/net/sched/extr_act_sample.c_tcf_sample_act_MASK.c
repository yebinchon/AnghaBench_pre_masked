
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cpu_bstats; } ;
struct tcf_sample {int rate; int trunc_size; scalar_t__ truncate; int psample_group; int tcf_action; TYPE_1__ common; int tcf_tm; } ;
struct tcf_result {int dummy; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int skb_iif; int len; int mac_len; TYPE_2__* dev; } ;
struct psample_group {int dummy; } ;
struct TYPE_4__ {int ifindex; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct psample_group*,struct sk_buff*,int,int,int,int) ;
 struct psample_group* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 struct tcf_sample* FUNC_11 (struct tc_action const*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_0, const struct tc_action *VAR_1,
     struct tcf_result *VAR_2)
{
 struct tcf_sample *VAR_3 = FUNC_11(VAR_1);
 struct psample_group *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_8(&VAR_3->tcf_tm);
 FUNC_1(FUNC_10(VAR_3->common.cpu_bstats), VAR_0);
 VAR_5 = FUNC_0(VAR_3->tcf_action);

 VAR_4 = FUNC_4(VAR_3->psample_group);


 if (VAR_4 && (FUNC_2() % VAR_3->rate == 0)) {
  if (!FUNC_5(VAR_0)) {
   VAR_7 = VAR_0->skb_iif;
   VAR_8 = VAR_0->dev->ifindex;
  } else {
   VAR_7 = VAR_0->dev->ifindex;
   VAR_8 = 0;
  }


  if (FUNC_5(VAR_0) && FUNC_9(VAR_0->dev))
   FUNC_7(VAR_0, VAR_0->mac_len);

  VAR_6 = VAR_3->truncate ? VAR_3->trunc_size : VAR_0->len;
  FUNC_3(VAR_4, VAR_0, VAR_6, VAR_7, VAR_8,
          VAR_3->rate);

  if (FUNC_5(VAR_0) && FUNC_9(VAR_0->dev))
   FUNC_6(VAR_0, VAR_0->mac_len);
 }

 return VAR_5;
}
