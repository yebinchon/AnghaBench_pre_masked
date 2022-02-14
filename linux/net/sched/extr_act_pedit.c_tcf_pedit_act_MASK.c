
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tcf_result {int dummy; } ;
struct tcf_pedit_key_ex {int htype; int cmd; } ;
struct TYPE_2__ {int overlimits; } ;
struct tcf_pedit {int tcf_action; int tcfp_nkeys; int tcf_lock; int tcf_bstats; TYPE_1__ tcf_qstats; int tcf_index; struct tcf_pedit_key_ex* tcfp_keys_ex; struct tc_pedit_key* tcfp_keys; int tcf_tm; } ;
struct tc_pedit_key {int off; int offmask; int at; int shift; int val; int mask; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int dummy; } ;
typedef int hdata ;
typedef enum pedit_header_type { ____Placeholder_pedit_header_type } pedit_header_type ;
typedef enum pedit_cmd { ____Placeholder_pedit_cmd } pedit_cmd ;
typedef int _d ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int,int*) ;
 int FUNC_4 (char*,...) ;
 int* FUNC_5 (struct sk_buff*,int,int,int*) ;
 int FUNC_6 (struct sk_buff*,int,int*,int) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct tcf_pedit* FUNC_11 (struct tc_action const*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_2, const struct tc_action *VAR_3,
    struct tcf_result *VAR_4)
{
 struct tcf_pedit *VAR_5 = FUNC_11(VAR_3);
 int VAR_6;

 if (FUNC_7(VAR_2, VAR_0))
  return VAR_5->tcf_action;

 FUNC_8(&VAR_5->tcf_lock);

 FUNC_10(&VAR_5->tcf_tm);

 if (VAR_5->tcfp_nkeys > 0) {
  struct tc_pedit_key *VAR_7 = VAR_5->tcfp_keys;
  struct tcf_pedit_key_ex *VAR_8 = VAR_5->tcfp_keys_ex;
  enum pedit_header_type VAR_9 =
   VAR_1;
  enum pedit_cmd VAR_10 = 128;

  for (VAR_6 = VAR_5->tcfp_nkeys; VAR_6 > 0; VAR_6--, VAR_7++) {
   u32 *VAR_11, VAR_12;
   int VAR_13 = VAR_7->off;
   int VAR_14;
   u32 VAR_15;
   int VAR_16;

   if (VAR_8) {
    VAR_9 = VAR_8->htype;
    VAR_10 = VAR_8->cmd;

    VAR_8++;
   }

   VAR_16 = FUNC_3(VAR_2, VAR_9, &VAR_14);
   if (VAR_16) {
    FUNC_4("tc action pedit bad header type specified (0x%x)\n",
     VAR_9);
    goto bad;
   }

   if (VAR_7->offmask) {
    u8 *VAR_17, VAR_18;

    if (!FUNC_2(VAR_2, VAR_14 + VAR_7->at)) {
     FUNC_4("tc action pedit 'at' offset %d out of bounds\n",
      VAR_14 + VAR_7->at);
     goto bad;
    }
    VAR_17 = FUNC_5(VAR_2, VAR_14 + VAR_7->at,
             sizeof(VAR_18), &VAR_18);
    if (!VAR_17)
     goto bad;
    VAR_13 += (*VAR_17 & VAR_7->offmask) >> VAR_7->shift;
   }

   if (VAR_13 % 4) {
    FUNC_4("tc action pedit offset must be on 32 bit boundaries\n");
    goto bad;
   }

   if (!FUNC_2(VAR_2, VAR_14 + VAR_13)) {
    FUNC_4("tc action pedit offset %d out of bounds\n",
     VAR_14 + VAR_13);
    goto bad;
   }

   VAR_11 = FUNC_5(VAR_2, VAR_14 + VAR_13,
       sizeof(VAR_12), &VAR_12);
   if (!VAR_11)
    goto bad;

   switch (VAR_10) {
   case 128:
    VAR_15 = VAR_7->val;
    break;
   case 129:
    VAR_15 = (*VAR_11 + VAR_7->val) & ~VAR_7->mask;
    break;
   default:
    FUNC_4("tc action pedit bad command (%d)\n",
     VAR_10);
    goto bad;
   }

   *VAR_11 = ((*VAR_11 & VAR_7->mask) ^ VAR_15);
   if (VAR_11 == &VAR_12)
    FUNC_6(VAR_2, VAR_14 + VAR_13, VAR_11, 4);
  }

  goto done;
 } else {
  FUNC_0(1, "pedit BUG: index %d\n", VAR_5->tcf_index);
 }

bad:
 VAR_5->tcf_qstats.overlimits++;
done:
 FUNC_1(&VAR_5->tcf_bstats, VAR_2);
 FUNC_9(&VAR_5->tcf_lock);
 return VAR_5->tcf_action;
}
