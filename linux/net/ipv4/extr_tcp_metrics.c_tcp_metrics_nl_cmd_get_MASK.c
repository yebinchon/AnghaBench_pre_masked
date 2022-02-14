
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_metrics_block {int tcpm_saddr; int tcpm_daddr; int tcpm_next; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct inetpeer_addr {int dummy; } ;
struct genl_info {TYPE_1__* genlhdr; } ;
struct TYPE_4__ {int chain; } ;
struct TYPE_3__ {int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,struct inetpeer_addr*) ;
 struct net* FUNC_1 (struct genl_info*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,struct genl_info*,int *,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct genl_info*) ;
 unsigned int FUNC_5 (unsigned int,int ) ;
 scalar_t__ FUNC_6 (int ,struct net*) ;
 unsigned int FUNC_7 (struct net*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sk_buff* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct genl_info*,struct inetpeer_addr*,unsigned int*,int ) ;
 int FUNC_11 (struct genl_info*,struct inetpeer_addr*) ;
 struct tcp_metrics_block* FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct sk_buff*,struct tcp_metrics_block*) ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_16 (struct tcp_metrics_block*) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_8, struct genl_info *VAR_9)
{
 struct tcp_metrics_block *VAR_10;
 struct inetpeer_addr VAR_11, VAR_12;
 unsigned int VAR_13;
 struct sk_buff *VAR_14;
 struct net *VAR_15 = FUNC_1(VAR_9);
 void *VAR_16;
 int VAR_17;
 bool VAR_18 = 1;

 VAR_17 = FUNC_10(VAR_9, &VAR_12, &VAR_13, 0);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_11(VAR_9, &VAR_11);
 if (VAR_17 < 0)
  VAR_18 = 0;

 VAR_14 = FUNC_9(VAR_4, VAR_3);
 if (!VAR_14)
  return -VAR_1;

 VAR_16 = FUNC_3(VAR_14, VAR_9, &VAR_7, 0,
      VAR_9->genlhdr->cmd);
 if (!VAR_16)
  goto nla_put_failure;

 VAR_13 ^= FUNC_7(VAR_15);
 VAR_13 = FUNC_5(VAR_13, VAR_6);
 VAR_17 = -VAR_2;
 FUNC_13();
 for (VAR_10 = FUNC_12(VAR_5[VAR_13].chain); VAR_10;
      VAR_10 = FUNC_12(VAR_10->tcpm_next)) {
  if (FUNC_0(&VAR_10->tcpm_daddr, &VAR_12) &&
      (!VAR_18 || FUNC_0(&VAR_10->tcpm_saddr, &VAR_11)) &&
      FUNC_6(FUNC_16(VAR_10), VAR_15)) {
   VAR_17 = FUNC_15(VAR_14, VAR_10);
   break;
  }
 }
 FUNC_14();
 if (VAR_17 < 0)
  goto out_free;

 FUNC_2(VAR_14, VAR_16);
 return FUNC_4(VAR_14, VAR_9);

nla_put_failure:
 VAR_17 = -VAR_0;

out_free:
 FUNC_8(VAR_14);
 return VAR_17;
}
