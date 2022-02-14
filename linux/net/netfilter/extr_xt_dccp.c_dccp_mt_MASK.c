
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_dccp_info {scalar_t__* spts; scalar_t__* dpts; int invflags; int flags; int option; int typemask; } ;
struct xt_action_param {scalar_t__ fragoff; int hotdrop; int thoff; struct xt_dccp_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct dccp_hdr {int dccph_dport; int dccph_sport; } ;
typedef int _dh ;


 scalar_t__ FUNC_0 (int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct sk_buff const*,int ,struct dccp_hdr const*,int*) ;
 int FUNC_2 (struct dccp_hdr const*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct dccp_hdr* FUNC_4 (struct sk_buff const*,int ,int,struct dccp_hdr*) ;

__attribute__((used)) static bool
FUNC_5(const struct sk_buff *VAR_4, struct xt_action_param *VAR_5)
{
 const struct xt_dccp_info *VAR_6 = VAR_5->matchinfo;
 const struct dccp_hdr *VAR_7;
 struct dccp_hdr VAR_8;

 if (VAR_5->fragoff != 0)
  return 0;

 VAR_7 = FUNC_4(VAR_4, VAR_5->thoff, sizeof(VAR_8), &VAR_8);
 if (VAR_7 == ((void*)0)) {
  VAR_5->hotdrop = 1;
  return 0;
 }

 return FUNC_0(FUNC_3(VAR_7->dccph_sport) >= VAR_6->spts[0]
   && FUNC_3(VAR_7->dccph_sport) <= VAR_6->spts[1],
   VAR_2, VAR_6->flags, VAR_6->invflags)
  && FUNC_0(FUNC_3(VAR_7->dccph_dport) >= VAR_6->dpts[0]
   && FUNC_3(VAR_7->dccph_dport) <= VAR_6->dpts[1],
   VAR_0, VAR_6->flags, VAR_6->invflags)
  && FUNC_0(FUNC_2(VAR_7, VAR_6->typemask),
      VAR_3, VAR_6->flags, VAR_6->invflags)
  && FUNC_0(FUNC_1(VAR_6->option, VAR_4, VAR_5->thoff, VAR_7,
     &VAR_5->hotdrop),
      VAR_1, VAR_6->flags, VAR_6->invflags);
}
