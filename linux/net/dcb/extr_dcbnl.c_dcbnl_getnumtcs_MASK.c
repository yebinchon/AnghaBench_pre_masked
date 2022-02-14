
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {TYPE_1__* dcbnl_ops; } ;
struct TYPE_2__ {int (* getnumtcs ) (struct net_device*,int,int *) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,size_t) ;
 int FUNC_3 (struct nlattr**,int,struct nlattr*,int ,int *) ;
 int FUNC_4 (struct sk_buff*,int,int ) ;
 int FUNC_5 (struct net_device*,int,int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_7, struct nlmsghdr *VAR_8,
      u32 VAR_9, struct nlattr **VAR_10, struct sk_buff *VAR_11)
{
 struct nlattr *VAR_12[VAR_2 + 1], *VAR_13;
 u8 VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17 = 0;

 if (!VAR_10[VAR_0])
  return -VAR_3;

 if (!VAR_7->dcbnl_ops->getnumtcs)
  return -VAR_5;

 VAR_15 = FUNC_3(VAR_12, VAR_2,
       VAR_10[VAR_0],
       VAR_6, ((void*)0));
 if (VAR_15)
  return VAR_15;

 VAR_13 = FUNC_2(VAR_11, VAR_0);
 if (!VAR_13)
  return -VAR_4;

 if (VAR_12[VAR_1])
  VAR_17 = 1;

 for (VAR_16 = VAR_1+1; VAR_16 <= VAR_2; VAR_16++) {
  if (!VAR_17 && !VAR_12[VAR_16])
   continue;

  VAR_15 = VAR_7->dcbnl_ops->getnumtcs(VAR_7, VAR_16, &VAR_14);
  if (!VAR_15) {
   VAR_15 = FUNC_4(VAR_11, VAR_16, VAR_14);
   if (VAR_15) {
    FUNC_0(VAR_11, VAR_13);
    return VAR_15;
   }
  } else
   return -VAR_3;
 }
 FUNC_1(VAR_11, VAR_13);

 return 0;
}
