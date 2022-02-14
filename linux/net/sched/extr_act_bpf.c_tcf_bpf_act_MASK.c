
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_result {int dummy; } ;
struct TYPE_2__ {int cpu_qstats; int cpu_bstats; } ;
struct tcf_bpf {int tcf_action; TYPE_1__ common; int filter; int tcf_tm; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int mac_len; } ;
struct bpf_prog {int dummy; } ;


 int FUNC_0 (struct bpf_prog*,struct sk_buff*) ;






 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (int ) ;
 struct bpf_prog* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 struct tcf_bpf* FUNC_12 (struct tc_action const*) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_0, const struct tc_action *VAR_1,
         struct tcf_result *VAR_2)
{
 bool VAR_3 = FUNC_9(VAR_0);
 struct tcf_bpf *VAR_4 = FUNC_12(VAR_1);
 struct bpf_prog *VAR_5;
 int VAR_6, VAR_7;

 FUNC_10(&VAR_4->tcf_tm);
 FUNC_4(FUNC_11(VAR_4->common.cpu_bstats), VAR_0);

 FUNC_7();
 VAR_5 = FUNC_6(VAR_4->filter);
 if (VAR_3) {
  FUNC_2(VAR_0, VAR_0->mac_len);
  FUNC_3(VAR_0);
  VAR_7 = FUNC_0(VAR_5, VAR_0);
  FUNC_1(VAR_0, VAR_0->mac_len);
 } else {
  FUNC_3(VAR_0);
  VAR_7 = FUNC_0(VAR_5, VAR_0);
 }
 FUNC_8();
 switch (VAR_7) {
 case 132:
 case 131:
 case 133:
 case 130:
  VAR_6 = VAR_7;
  break;
 case 129:
  VAR_6 = VAR_7;
  FUNC_5(FUNC_11(VAR_4->common.cpu_qstats));
  break;
 case 128:
  VAR_6 = VAR_4->tcf_action;
  break;
 default:
  VAR_6 = 128;
  break;
 }

 return VAR_6;
}
