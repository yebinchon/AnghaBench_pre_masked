
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
struct TYPE_2__ {int (* setnumtcs ) (struct net_device*,int,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int,struct nlattr*,int ,int *) ;
 int FUNC_2 (struct sk_buff*,size_t,int) ;
 int FUNC_3 (struct net_device*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6, struct nlmsghdr *VAR_7,
      u32 VAR_8, struct nlattr **VAR_9, struct sk_buff *VAR_10)
{
 struct nlattr *VAR_11[VAR_2 + 1];
 int VAR_12;
 u8 VAR_13;
 int VAR_14;

 if (!VAR_9[VAR_0])
  return -VAR_3;

 if (!VAR_6->dcbnl_ops->setnumtcs)
  return -VAR_4;

 VAR_12 = FUNC_1(VAR_11, VAR_2,
       VAR_9[VAR_0],
       VAR_5, ((void*)0));
 if (VAR_12)
  return VAR_12;

 for (VAR_14 = VAR_1+1; VAR_14 <= VAR_2; VAR_14++) {
  if (VAR_11[VAR_14] == ((void*)0))
   continue;

  VAR_13 = FUNC_0(VAR_11[VAR_14]);

  VAR_12 = VAR_6->dcbnl_ops->setnumtcs(VAR_6, VAR_14, VAR_13);
  if (VAR_12)
   break;
 }

 return FUNC_2(VAR_10, VAR_0, !!VAR_12);
}
