
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int protocol; int len; int tstamp; int skb_iif; } ;
struct nlattr {int nla_len; int nla_type; } ;
typedef int buf ;
struct TYPE_2__ {scalar_t__ pc; } ;


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
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,int ,int *) ;
 int VAR_12 ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (struct nlattr*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,char*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_13 (size_t) ;
 scalar_t__ FUNC_14 (struct sk_buff*,int ,int ,size_t) ;
 struct nlattr* FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 (char*,int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_13, struct sk_buff *VAR_14,
         size_t VAR_15)
{
 u64 VAR_16 = (u64)(uintptr_t) FUNC_0(VAR_14)->pc;
 char VAR_17[VAR_10];
 struct nlattr *VAR_18;
 void *VAR_19;
 int VAR_20;

 VAR_19 = FUNC_4(VAR_13, 0, 0, &VAR_12, 0,
     VAR_9);
 if (!VAR_19)
  return -VAR_0;

 if (FUNC_10(VAR_13, VAR_1, VAR_11))
  goto nla_put_failure;

 if (FUNC_12(VAR_13, VAR_5, VAR_16, VAR_3))
  goto nla_put_failure;

 FUNC_16(VAR_17, sizeof(VAR_17), "%pS", FUNC_0(VAR_14)->pc);
 if (FUNC_9(VAR_13, VAR_7, VAR_17))
  goto nla_put_failure;

 VAR_20 = FUNC_6(VAR_13, VAR_14->skb_iif, ((void*)0));
 if (VAR_20)
  goto nla_put_failure;

 if (FUNC_12(VAR_13, VAR_8,
         FUNC_5(VAR_14->tstamp), VAR_3))
  goto nla_put_failure;

 if (FUNC_11(VAR_13, VAR_2, VAR_14->len))
  goto nla_put_failure;

 if (!VAR_15)
  goto out;

 if (FUNC_10(VAR_13, VAR_6, FUNC_1(VAR_14->protocol)))
  goto nla_put_failure;

 VAR_18 = FUNC_15(VAR_13, FUNC_13(VAR_15));
 VAR_18->nla_type = VAR_4;
 VAR_18->nla_len = FUNC_7(VAR_15);
 if (FUNC_14(VAR_14, 0, FUNC_8(VAR_18), VAR_15))
  goto nla_put_failure;

out:
 FUNC_3(VAR_13, VAR_19);

 return 0;

nla_put_failure:
 FUNC_2(VAR_13, VAR_19);
 return -VAR_0;
}
