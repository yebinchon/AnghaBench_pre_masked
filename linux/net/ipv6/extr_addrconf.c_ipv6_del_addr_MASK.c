
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inet6_ifaddr {int state; int flags; TYPE_1__* idev; int if_list; struct inet6_ifaddr* ifpub; int tmp_list; int addr_lst; int lock; } ;
typedef enum cleanup_prefix_rt_t { ____Placeholder_cleanup_prefix_rt_t } cleanup_prefix_rt_t ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct inet6_ifaddr*) ;
 int FUNC_2 (struct inet6_ifaddr*) ;
 int VAR_8 ;
 int FUNC_3 (struct inet6_ifaddr*,unsigned long*) ;
 int FUNC_4 (struct inet6_ifaddr*,unsigned long,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inet6_ifaddr*) ;
 int FUNC_7 (int ,struct inet6_ifaddr*) ;
 int FUNC_8 (int ,struct inet6_ifaddr*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct inet6_ifaddr*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(struct inet6_ifaddr *VAR_9)
{
 int VAR_10;
 enum cleanup_prefix_rt_t VAR_11 = VAR_1;
 unsigned long VAR_12;

 FUNC_0();

 FUNC_12(&VAR_9->lock);
 VAR_10 = VAR_9->state;
 VAR_9->state = VAR_5;
 FUNC_13(&VAR_9->lock);

 if (VAR_10 == VAR_5)
  goto out;

 FUNC_12(&VAR_8);
 FUNC_5(&VAR_9->addr_lst);
 FUNC_13(&VAR_8);

 FUNC_14(&VAR_9->idev->lock);

 if (VAR_9->flags&VAR_4) {
  FUNC_9(&VAR_9->tmp_list);
  if (VAR_9->ifpub) {
   FUNC_6(VAR_9->ifpub);
   VAR_9->ifpub = ((void*)0);
  }
  FUNC_1(VAR_9);
 }

 if (VAR_9->flags & VAR_3 && !(VAR_9->flags & VAR_2))
  VAR_11 = FUNC_3(VAR_9, &VAR_12);

 FUNC_10(&VAR_9->if_list);
 FUNC_1(VAR_9);

 FUNC_15(&VAR_9->idev->lock);

 FUNC_2(VAR_9);

 FUNC_8(VAR_7, VAR_9);

 FUNC_7(VAR_6, VAR_9);

 if (VAR_11 != VAR_1) {
  FUNC_4(VAR_9, VAR_12,
   VAR_11 == VAR_0);
 }


 FUNC_11(VAR_9);
out:
 FUNC_6(VAR_9);
}
