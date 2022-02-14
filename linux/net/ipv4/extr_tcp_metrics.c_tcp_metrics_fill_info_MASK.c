
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ len; int val; } ;
struct tcp_fastopen_metrics {TYPE_1__ cookie; scalar_t__ last_syn_loss; scalar_t__ syn_loss; scalar_t__ mss; } ;
struct TYPE_5__ {int family; } ;
struct tcp_metrics_block {int* tcpm_vals; struct tcp_fastopen_metrics tcpm_fastopen; scalar_t__ tcpm_stamp; TYPE_2__ tcpm_saddr; TYPE_2__ tcpm_daddr; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_19 ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,scalar_t__,int ) ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int,int) ;
 unsigned int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_20,
     struct tcp_metrics_block *VAR_21)
{
 struct nlattr *VAR_22;
 int VAR_23;

 switch (VAR_21->tcpm_daddr.family) {
 case 129:
  if (FUNC_8(VAR_20, VAR_2,
        FUNC_0(&VAR_21->tcpm_daddr)) < 0)
   goto nla_put_failure;
  if (FUNC_8(VAR_20, VAR_10,
        FUNC_0(&VAR_21->tcpm_saddr)) < 0)
   goto nla_put_failure;
  break;
 case 128:
  if (FUNC_7(VAR_20, VAR_3,
         FUNC_1(&VAR_21->tcpm_daddr)) < 0)
   goto nla_put_failure;
  if (FUNC_7(VAR_20, VAR_11,
         FUNC_1(&VAR_21->tcpm_saddr)) < 0)
   goto nla_put_failure;
  break;
 default:
  return -VAR_0;
 }

 if (FUNC_9(VAR_20, VAR_4,
     VAR_19 - VAR_21->tcpm_stamp,
     VAR_9) < 0)
  goto nla_put_failure;

 {
  int VAR_24 = 0;

  VAR_22 = FUNC_5(VAR_20, VAR_12);
  if (!VAR_22)
   goto nla_put_failure;
  for (VAR_23 = 0; VAR_23 < VAR_13 + 1; VAR_23++) {
   u32 VAR_25 = VAR_21->tcpm_vals[VAR_23];

   if (!VAR_25)
    continue;
   if (VAR_23 == VAR_14) {
    if (FUNC_11(VAR_20, VAR_17 + 1,
      VAR_25) < 0)
     goto nla_put_failure;
    VAR_24++;
    VAR_25 = FUNC_2(VAR_25 / 1000, 1U);
   }
   if (VAR_23 == VAR_15) {
    if (FUNC_11(VAR_20, VAR_16 + 1,
      VAR_25) < 0)
     goto nla_put_failure;
    VAR_24++;
    VAR_25 = FUNC_2(VAR_25 / 1000, 1U);
   }
   if (FUNC_11(VAR_20, VAR_23 + 1, VAR_25) < 0)
    goto nla_put_failure;
   VAR_24++;
  }
  if (VAR_24)
   FUNC_4(VAR_20, VAR_22);
  else
   FUNC_3(VAR_20, VAR_22);
 }

 {
  struct tcp_fastopen_metrics VAR_26[1], *VAR_27;
  unsigned int VAR_28;

  do {
   VAR_28 = FUNC_12(&VAR_18);
   VAR_26[0] = VAR_21->tcpm_fastopen;
  } while (FUNC_13(&VAR_18, VAR_28));

  VAR_27 = VAR_26;
  if (VAR_27->mss &&
      FUNC_10(VAR_20, VAR_6,
    VAR_27->mss) < 0)
   goto nla_put_failure;
  if (VAR_27->syn_loss &&
      (FUNC_10(VAR_20, VAR_7,
    VAR_27->syn_loss) < 0 ||
       FUNC_9(VAR_20, VAR_8,
    VAR_19 - VAR_27->last_syn_loss,
    VAR_9) < 0))
   goto nla_put_failure;
  if (VAR_27->cookie.len > 0 &&
      FUNC_6(VAR_20, VAR_5,
       VAR_27->cookie.len, VAR_27->cookie.val) < 0)
   goto nla_put_failure;
 }

 return 0;

nla_put_failure:
 return -VAR_1;
}
