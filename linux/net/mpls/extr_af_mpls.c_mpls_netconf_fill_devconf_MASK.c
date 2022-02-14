
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct netconfmsg {int ncm_family; } ;
struct mpls_dev {int input_enabled; TYPE_1__* dev; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int,int ) ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;
 struct netconfmsg* FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,int ,int ,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_5, struct mpls_dev *VAR_6,
         u32 VAR_7, u32 VAR_8, int VAR_9,
         unsigned int VAR_10, int VAR_11)
{
 struct nlmsghdr *VAR_12;
 struct netconfmsg *VAR_13;
 bool VAR_14 = 0;

 VAR_12 = FUNC_4(VAR_5, VAR_7, VAR_8, VAR_9, sizeof(struct netconfmsg),
   VAR_10);
 if (!VAR_12)
  return -VAR_1;

 if (VAR_11 == VAR_2)
  VAR_14 = 1;

 VAR_13 = FUNC_2(VAR_12);
 VAR_13->ncm_family = VAR_0;

 if (FUNC_0(VAR_5, VAR_3, VAR_6->dev->ifindex) < 0)
  goto nla_put_failure;

 if ((VAR_14 || VAR_11 == VAR_4) &&
     FUNC_0(VAR_5, VAR_4,
   VAR_6->input_enabled) < 0)
  goto nla_put_failure;

 FUNC_3(VAR_5, VAR_12);
 return 0;

nla_put_failure:
 FUNC_1(VAR_5, VAR_12);
 return -VAR_1;
}
