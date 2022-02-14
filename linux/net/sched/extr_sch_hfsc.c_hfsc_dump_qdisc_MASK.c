
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_hfsc_qopt {int defcls; } ;
struct sk_buff {int len; } ;
struct hfsc_sched {int defcls; } ;
struct Qdisc {int dummy; } ;
typedef int qopt ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int,struct tc_hfsc_qopt*) ;
 int FUNC_1 (struct sk_buff*,unsigned char*) ;
 struct hfsc_sched* FUNC_2 (struct Qdisc*) ;
 unsigned char* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int
FUNC_4(struct Qdisc *VAR_1, struct sk_buff *VAR_2)
{
 struct hfsc_sched *VAR_3 = FUNC_2(VAR_1);
 unsigned char *VAR_4 = FUNC_3(VAR_2);
 struct tc_hfsc_qopt VAR_5;

 VAR_5.defcls = VAR_3->defcls;
 if (FUNC_0(VAR_2, VAR_0, sizeof(VAR_5), &VAR_5))
  goto nla_put_failure;
 return VAR_2->len;

 nla_put_failure:
 FUNC_1(VAR_2, VAR_4);
 return -1;
}
