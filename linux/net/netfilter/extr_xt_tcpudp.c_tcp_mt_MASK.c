
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tcp {int invflags; unsigned char flg_mask; unsigned char flg_cmp; scalar_t__ option; int * dpts; int * spts; } ;
struct xt_action_param {int fragoff; int hotdrop; int thoff; struct xt_tcp* matchinfo; } ;
struct tcphdr {int doff; int dest; int source; } ;
struct sk_buff {int dummy; } ;
typedef int _tcph ;


 int FUNC_0 (struct xt_tcp const*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (char*) ;
 struct tcphdr* FUNC_4 (struct sk_buff const*,int ,int,struct tcphdr*) ;
 int FUNC_5 (scalar_t__,struct sk_buff const*,int ,int,int,int*) ;

__attribute__((used)) static bool FUNC_6(const struct sk_buff *VAR_4, struct xt_action_param *VAR_5)
{
 const struct tcphdr *VAR_6;
 struct tcphdr VAR_7;
 const struct xt_tcp *VAR_8 = VAR_5->matchinfo;

 if (VAR_5->fragoff != 0) {






  if (VAR_5->fragoff == 1) {
   FUNC_3("Dropping evil TCP offset=1 frag.\n");
   VAR_5->hotdrop = 1;
  }

  return 0;
 }

 VAR_6 = FUNC_4(VAR_4, VAR_5->thoff, sizeof(VAR_7), &VAR_7);
 if (VAR_6 == ((void*)0)) {


  FUNC_3("Dropping evil TCP offset=0 tinygram.\n");
  VAR_5->hotdrop = 1;
  return 0;
 }

 if (!FUNC_2(VAR_8->spts[0], VAR_8->spts[1],
   FUNC_1(VAR_6->source),
   !!(VAR_8->invflags & VAR_3)))
  return 0;
 if (!FUNC_2(VAR_8->dpts[0], VAR_8->dpts[1],
   FUNC_1(VAR_6->dest),
   !!(VAR_8->invflags & VAR_0)))
  return 0;
 if (!FUNC_0(VAR_8, VAR_1,
       (((unsigned char *)VAR_6)[13] & VAR_8->flg_mask) == VAR_8->flg_cmp))
  return 0;
 if (VAR_8->option) {
  if (VAR_6->doff * 4 < sizeof(VAR_7)) {
   VAR_5->hotdrop = 1;
   return 0;
  }
  if (!FUNC_5(VAR_8->option, VAR_4, VAR_5->thoff,
         VAR_6->doff*4 - sizeof(VAR_7),
         VAR_8->invflags & VAR_2,
         &VAR_5->hotdrop))
   return 0;
 }
 return 1;
}
