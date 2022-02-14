
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct in_device {int dummy; } ;
struct fib_result {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {int protocol; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct in_device*) ;
 struct in_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct in_device*,int ,int ,int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ,struct net_device*,int) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ,struct net_device*,struct fib_result*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct net_device*) ;

int FUNC_9(struct sk_buff *VAR_1, __be32 VAR_2, __be32 VAR_3,
         u8 VAR_4, struct net_device *VAR_5, struct fib_result *VAR_6)
{
 if (FUNC_7(VAR_2)) {
  struct in_device *VAR_7 = FUNC_1(VAR_5);
  int VAR_8 = 0;
  int VAR_9 = -VAR_0;

  if (!VAR_7)
   return VAR_9;
  VAR_8 = FUNC_2(VAR_7, VAR_2, VAR_3,
          FUNC_3(VAR_1)->protocol);


  if (!VAR_8 && FUNC_8(VAR_5)) {
   struct in_device *VAR_10;

   VAR_10 = FUNC_1(VAR_1->dev);
   if (VAR_10)
    VAR_8 = FUNC_2(VAR_10, VAR_2, VAR_3,
            FUNC_3(VAR_1)->protocol);
  }

  if (VAR_8





     ) {
   VAR_9 = FUNC_4(VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_8);
  }
  return VAR_9;
 }

 return FUNC_5(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
