
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct inet6_dev {int lock; int dev; struct ifacaddr6* ac_list; scalar_t__ dead; } ;
struct in6_addr {int dummy; } ;
struct ifacaddr6 {int aca_addr; struct ifacaddr6* aca_next; int aca_users; } ;
struct fib6_info {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct fib6_info*) ;
 int FUNC_2 (struct fib6_info*) ;
 struct ifacaddr6* FUNC_3 (struct fib6_info*,struct in6_addr const*) ;
 int FUNC_4 (struct ifacaddr6*) ;
 int FUNC_5 (struct ifacaddr6*) ;
 struct fib6_info* FUNC_6 (struct net*,struct inet6_dev*,struct in6_addr const*,int,int ) ;
 int FUNC_7 (int ,int *) ;
 struct net* FUNC_8 (int ) ;
 int FUNC_9 (struct fib6_info*) ;
 int FUNC_10 (struct net*,struct fib6_info*) ;
 int FUNC_11 (struct net*,struct ifacaddr6*) ;
 scalar_t__ FUNC_12 (int *,struct in6_addr const*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct inet6_dev *VAR_3, const struct in6_addr *VAR_4)
{
 struct ifacaddr6 *VAR_5;
 struct fib6_info *VAR_6;
 struct net *VAR_7;
 int VAR_8;

 FUNC_0();

 FUNC_13(&VAR_3->lock);
 if (VAR_3->dead) {
  VAR_8 = -VAR_0;
  goto out;
 }

 for (VAR_5 = VAR_3->ac_list; VAR_5; VAR_5 = VAR_5->aca_next) {
  if (FUNC_12(&VAR_5->aca_addr, VAR_4)) {
   VAR_5->aca_users++;
   VAR_8 = 0;
   goto out;
  }
 }

 VAR_7 = FUNC_8(VAR_3->dev);
 VAR_6 = FUNC_6(VAR_7, VAR_3, VAR_4, 1, VAR_2);
 if (FUNC_1(VAR_6)) {
  VAR_8 = FUNC_2(VAR_6);
  goto out;
 }
 VAR_5 = FUNC_3(VAR_6, VAR_4);
 if (!VAR_5) {
  FUNC_9(VAR_6);
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_5->aca_next = VAR_3->ac_list;
 VAR_3->ac_list = VAR_5;




 FUNC_4(VAR_5);
 FUNC_14(&VAR_3->lock);

 FUNC_11(VAR_7, VAR_5);

 FUNC_10(VAR_7, VAR_6);

 FUNC_7(VAR_3->dev, &VAR_5->aca_addr);

 FUNC_5(VAR_5);
 return 0;
out:
 FUNC_14(&VAR_3->lock);
 return VAR_8;
}
