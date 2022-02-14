
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inet6_ifaddr {TYPE_1__* idev; int prefix_len; int addr; } ;
struct fib6_info {int fib6_flags; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fib6_info* FUNC_0 (int *,int ,int ,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fib6_info*) ;
 int FUNC_3 (struct fib6_info*,unsigned long) ;
 int FUNC_4 (int ,struct fib6_info*) ;

__attribute__((used)) static void
FUNC_5(struct inet6_ifaddr *VAR_2, unsigned long VAR_3, bool VAR_4)
{
 struct fib6_info *VAR_5;

 VAR_5 = FUNC_0(&VAR_2->addr, VAR_2->prefix_len,
     VAR_2->idev->dev, 0, VAR_0, 1);
 if (VAR_5) {
  if (VAR_4)
   FUNC_4(FUNC_1(VAR_2->idev->dev), VAR_5);
  else {
   if (!(VAR_5->fib6_flags & VAR_1))
    FUNC_3(VAR_5, VAR_3);
   FUNC_2(VAR_5);
  }
 }
}
