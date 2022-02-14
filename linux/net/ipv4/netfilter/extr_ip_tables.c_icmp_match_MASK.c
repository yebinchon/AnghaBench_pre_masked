
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {scalar_t__ fragoff; int hotdrop; int thoff; struct ipt_icmp* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct ipt_icmp {int invflags; int * code; int type; } ;
struct icmphdr {int code; int type; } ;
typedef int _icmph ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int) ;
 struct icmphdr* FUNC_1 (struct sk_buff const*,int ,int,struct icmphdr*) ;

__attribute__((used)) static bool
FUNC_2(const struct sk_buff *VAR_1, struct xt_action_param *VAR_2)
{
 const struct icmphdr *VAR_3;
 struct icmphdr VAR_4;
 const struct ipt_icmp *VAR_5 = VAR_2->matchinfo;


 if (VAR_2->fragoff != 0)
  return 0;

 VAR_3 = FUNC_1(VAR_1, VAR_2->thoff, sizeof(VAR_4), &VAR_4);
 if (VAR_3 == ((void*)0)) {



  VAR_2->hotdrop = 1;
  return 0;
 }

 return FUNC_0(VAR_5->type,
        VAR_5->code[0],
        VAR_5->code[1],
        VAR_3->type, VAR_3->code,
        !!(VAR_5->invflags&VAR_0));
}
