
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_sctp_info {scalar_t__* spts; scalar_t__* dpts; int invflags; int flags; } ;
struct xt_action_param {scalar_t__ fragoff; int hotdrop; scalar_t__ thoff; struct xt_sctp_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct sctphdr {int dest; int source; } ;
typedef int _sh ;


 scalar_t__ FUNC_0 (int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff const*,scalar_t__,struct xt_sctp_info const*,int*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 struct sctphdr* FUNC_4 (struct sk_buff const*,scalar_t__,int,struct sctphdr*) ;

__attribute__((used)) static bool
FUNC_5(const struct sk_buff *VAR_3, struct xt_action_param *VAR_4)
{
 const struct xt_sctp_info *VAR_5 = VAR_4->matchinfo;
 const struct sctphdr *VAR_6;
 struct sctphdr VAR_7;

 if (VAR_4->fragoff != 0) {
  FUNC_3("Dropping non-first fragment.. FIXME\n");
  return 0;
 }

 VAR_6 = FUNC_4(VAR_3, VAR_4->thoff, sizeof(VAR_7), &VAR_7);
 if (VAR_6 == ((void*)0)) {
  FUNC_3("Dropping evil TCP offset=0 tinygram.\n");
  VAR_4->hotdrop = 1;
  return 0;
 }
 FUNC_3("spt: %d\tdpt: %d\n", FUNC_2(VAR_6->source), FUNC_2(VAR_6->dest));

 return FUNC_0(FUNC_2(VAR_6->source) >= VAR_5->spts[0]
   && FUNC_2(VAR_6->source) <= VAR_5->spts[1],
   VAR_2, VAR_5->flags, VAR_5->invflags) &&
  FUNC_0(FUNC_2(VAR_6->dest) >= VAR_5->dpts[0]
   && FUNC_2(VAR_6->dest) <= VAR_5->dpts[1],
   VAR_1, VAR_5->flags, VAR_5->invflags) &&
  FUNC_0(FUNC_1(VAR_3, VAR_4->thoff + sizeof(VAR_7),
         VAR_5, &VAR_4->hotdrop),
   VAR_0, VAR_5->flags, VAR_5->invflags);
}
