
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_ecn_info {int operation; int invert; } ;
struct xt_action_param {int thoff; struct xt_ecn_info* matchinfo; } ;
struct tcphdr {int ece; int cwr; } ;
struct sk_buff {int dummy; } ;
typedef int _tcph ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcphdr* FUNC_0 (struct sk_buff const*,int ,int,struct tcphdr*) ;

__attribute__((used)) static bool FUNC_1(const struct sk_buff *VAR_2, struct xt_action_param *VAR_3)
{
 const struct xt_ecn_info *VAR_4 = VAR_3->matchinfo;
 struct tcphdr VAR_5;
 const struct tcphdr *VAR_6;




 VAR_6 = FUNC_0(VAR_2, VAR_3->thoff, sizeof(VAR_5), &VAR_5);
 if (VAR_6 == ((void*)0))
  return 0;

 if (VAR_4->operation & VAR_1) {
  if (VAR_4->invert & VAR_1) {
   if (VAR_6->ece == 1)
    return 0;
  } else {
   if (VAR_6->ece == 0)
    return 0;
  }
 }

 if (VAR_4->operation & VAR_0) {
  if (VAR_4->invert & VAR_0) {
   if (VAR_6->cwr == 1)
    return 0;
  } else {
   if (VAR_6->cwr == 0)
    return 0;
  }
 }

 return 1;
}
