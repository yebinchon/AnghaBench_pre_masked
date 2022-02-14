
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct ip_vs_kstats {int outbps; int inbps; int outpps; int inpps; int cps; int outbytes; int inbytes; int outpkts; int inpkts; int conns; } ;


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
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_12, int VAR_13,
       struct ip_vs_kstats *VAR_14)
{
 struct nlattr *VAR_15 = FUNC_2(VAR_12, VAR_13);

 if (!VAR_15)
  return -VAR_0;

 if (FUNC_3(VAR_12, VAR_1, VAR_14->conns,
         VAR_11) ||
     FUNC_3(VAR_12, VAR_5, VAR_14->inpkts,
         VAR_11) ||
     FUNC_3(VAR_12, VAR_9, VAR_14->outpkts,
         VAR_11) ||
     FUNC_3(VAR_12, VAR_4, VAR_14->inbytes,
         VAR_11) ||
     FUNC_3(VAR_12, VAR_8, VAR_14->outbytes,
         VAR_11) ||
     FUNC_3(VAR_12, VAR_2, VAR_14->cps,
         VAR_11) ||
     FUNC_3(VAR_12, VAR_6, VAR_14->inpps,
         VAR_11) ||
     FUNC_3(VAR_12, VAR_10, VAR_14->outpps,
         VAR_11) ||
     FUNC_3(VAR_12, VAR_3, VAR_14->inbps,
         VAR_11) ||
     FUNC_3(VAR_12, VAR_7, VAR_14->outbps,
         VAR_11))
  goto nla_put_failure;
 FUNC_1(VAR_12, VAR_15);

 return 0;

nla_put_failure:
 FUNC_0(VAR_12, VAR_15);
 return -VAR_0;
}
