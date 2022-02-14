
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tcf_result {int dummy; } ;
struct TYPE_3__ {int cpu_qstats; int cpu_bstats; } ;
struct tcf_ife_info {int tcf_action; TYPE_1__ common; int tcf_tm; } ;
struct tc_action {int dummy; } ;
struct sk_buff {TYPE_2__* dev; int protocol; } ;
struct TYPE_4__ {int hard_header_len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct tcf_ife_info*,int,int,int *) ;
 int * FUNC_4 (struct sk_buff*,int*) ;
 int * FUNC_5 (int *,int *,int*,int*,int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 struct tcf_ife_info* FUNC_15 (struct tc_action const*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_1, const struct tc_action *VAR_2,
     struct tcf_result *VAR_3)
{
 struct tcf_ife_info *VAR_4 = FUNC_15(VAR_2);
 int VAR_5 = VAR_4->tcf_action;
 u8 *VAR_6;
 u8 *VAR_7;
 u16 VAR_8;

 FUNC_1(FUNC_14(VAR_4->common.cpu_bstats), VAR_1);
 FUNC_13(&VAR_4->tcf_tm);

 if (FUNC_10(VAR_1))
  FUNC_11(VAR_1, VAR_1->dev->hard_header_len);

 VAR_7 = FUNC_4(VAR_1, &VAR_8);
 if (FUNC_16(!VAR_7)) {
  FUNC_8(FUNC_14(VAR_4->common.cpu_qstats));
  return VAR_0;
 }

 VAR_6 = VAR_7 + VAR_8;
 for (; VAR_7 < VAR_6; VAR_7 = FUNC_6(VAR_7)) {
  u8 *VAR_9;
  u16 VAR_10;
  u16 VAR_11;

  VAR_9 = FUNC_5(VAR_7, VAR_6, &VAR_10,
      &VAR_11, ((void*)0));
  if (!VAR_9) {
   FUNC_8(FUNC_14(VAR_4->common.cpu_qstats));
   return VAR_0;
  }

  if (FUNC_3(VAR_1, VAR_4, VAR_10, VAR_11, VAR_9)) {



   FUNC_7("Unknown metaid %d dlen %d\n",
         VAR_10, VAR_11);
   FUNC_9(FUNC_14(VAR_4->common.cpu_qstats));
  }
 }

 if (FUNC_0(VAR_7 != VAR_6)) {
  FUNC_8(FUNC_14(VAR_4->common.cpu_qstats));
  return VAR_0;
 }

 VAR_1->protocol = FUNC_2(VAR_1, VAR_1->dev);
 FUNC_12(VAR_1);

 return VAR_5;
}
