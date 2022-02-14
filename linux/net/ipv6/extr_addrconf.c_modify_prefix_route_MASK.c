
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct inet6_ifaddr {TYPE_1__* idev; scalar_t__ rt_priority; int prefix_len; int addr; } ;
struct fib6_info {scalar_t__ fib6_metric; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct fib6_info* FUNC_0 (int *,int ,int ,int ,int ,int) ;
 int FUNC_1 (int *,int ,scalar_t__,int ,unsigned long,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fib6_info*) ;
 int FUNC_4 (struct fib6_info*) ;
 int FUNC_5 (struct fib6_info*,unsigned long) ;
 int FUNC_6 (int ,struct fib6_info*) ;

__attribute__((used)) static int FUNC_7(struct inet6_ifaddr *VAR_4,
          unsigned long VAR_5, u32 VAR_6)
{
 struct fib6_info *VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_0(&VAR_4->addr, VAR_4->prefix_len,
     VAR_4->idev->dev, 0, VAR_3, 1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = VAR_4->rt_priority ? : VAR_2;
 if (VAR_7->fib6_metric != VAR_8) {

  FUNC_6(FUNC_2(VAR_4->idev->dev), VAR_7);


  FUNC_1(&VAR_4->addr, VAR_4->prefix_len,
          VAR_4->rt_priority, VAR_4->idev->dev,
          VAR_5, VAR_6, VAR_1);
 } else {
  if (!VAR_5)
   FUNC_3(VAR_7);
  else
   FUNC_5(VAR_7, VAR_5);

  FUNC_4(VAR_7);
 }

 return 0;
}
