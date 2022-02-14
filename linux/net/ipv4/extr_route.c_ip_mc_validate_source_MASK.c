
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {scalar_t__ protocol; } ;
struct net_device {int dummy; } ;
struct in_device {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct in_device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ,int ,struct net_device*,struct in_device*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

int FUNC_9(struct sk_buff *VAR_3, __be32 VAR_4, __be32 VAR_5,
     u8 VAR_6, struct net_device *VAR_7,
     struct in_device *VAR_8, u32 *VAR_9)
{
 int VAR_10;


 if (!VAR_8)
  return -VAR_0;

 if (FUNC_7(VAR_5) || FUNC_4(VAR_5) ||
     VAR_3->protocol != FUNC_2(VAR_1))
  return -VAR_0;

 if (FUNC_6(VAR_5) && !FUNC_0(VAR_8))
  return -VAR_0;

 if (FUNC_8(VAR_5)) {
  if (!FUNC_5(VAR_4) &&
      FUNC_3(VAR_3)->protocol != VAR_2)
   return -VAR_0;
 } else {
  VAR_10 = FUNC_1(VAR_3, VAR_5, 0, VAR_6, 0, VAR_7,
       VAR_8, VAR_9);
  if (VAR_10 < 0)
   return VAR_10;
 }
 return 0;
}
