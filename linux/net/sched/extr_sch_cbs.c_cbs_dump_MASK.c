
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_cbs_qopt {int offload; void* idleslope; void* sendslope; int locredit; int hicredit; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct cbs_sched_data {int offload; int idleslope; int sendslope; int locredit; int hicredit; } ;
struct Qdisc {int dummy; } ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int,struct tc_cbs_qopt*) ;
 struct cbs_sched_data* FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_3, struct sk_buff *VAR_4)
{
 struct cbs_sched_data *VAR_5 = FUNC_5(VAR_3);
 struct tc_cbs_qopt VAR_6 = { };
 struct nlattr *VAR_7;

 VAR_7 = FUNC_3(VAR_4, VAR_2);
 if (!VAR_7)
  goto nla_put_failure;

 VAR_6.hicredit = VAR_5->hicredit;
 VAR_6.locredit = VAR_5->locredit;
 VAR_6.sendslope = FUNC_0(VAR_5->sendslope, VAR_0);
 VAR_6.idleslope = FUNC_0(VAR_5->idleslope, VAR_0);
 VAR_6.offload = VAR_5->offload;

 if (FUNC_4(VAR_4, VAR_1, sizeof(VAR_6), &VAR_6))
  goto nla_put_failure;

 return FUNC_2(VAR_4, VAR_7);

nla_put_failure:
 FUNC_1(VAR_4, VAR_7);
 return -1;
}
