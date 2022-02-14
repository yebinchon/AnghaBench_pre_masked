
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct in_ifaddr {TYPE_1__* ifa_dev; } ;
struct flowi4 {int daddr; } ;
struct fib_table {int dummy; } ;
struct fib_result {scalar_t__ type; int member_0; } ;
typedef int __be32 ;
struct TYPE_2__ {struct net_device* dev; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (struct fib_result) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 struct fib_table* FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct fib_table*,struct flowi4*,struct fib_result*,int ) ;
 struct in_ifaddr* FUNC_4 (struct net*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

struct net_device *FUNC_7(struct net *VAR_3, __be32 VAR_4, bool VAR_5)
{
 struct net_device *VAR_6 = ((void*)0);
 struct in_ifaddr *VAR_7;

 FUNC_5();
 VAR_7 = FUNC_4(VAR_3, VAR_4);
 if (!VAR_7) {
  struct flowi4 VAR_8 = { .daddr = VAR_4 };
  struct fib_result VAR_9 = { 0 };
  struct fib_table *VAR_10;




  VAR_10 = FUNC_2(VAR_3, VAR_2);
  if (VAR_10 &&
      !FUNC_3(VAR_10, &VAR_8, &VAR_9, VAR_0) &&
      VAR_9.type == VAR_1)
   VAR_6 = FUNC_0(VAR_9);
 } else {
  VAR_6 = VAR_7->ifa_dev->dev;
 }
 if (VAR_6 && VAR_5)
  FUNC_1(VAR_6);
 FUNC_6();
 return VAR_6;
}
