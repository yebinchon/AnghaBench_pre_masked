
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ifmcaddr6 {int mca_flags; int mca_lock; int mca_refcnt; int mca_timer; TYPE_1__* idev; int mca_addr; } ;
struct TYPE_2__ {int dead; struct net_device* dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct ifmcaddr6*) ;
 scalar_t__ FUNC_4 (int *,char*,struct net_device*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ifmcaddr6 *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->idev->dev;
 char VAR_6[VAR_3];

 if (FUNC_0(&VAR_4->mca_addr) <
     VAR_0)
  return;

 FUNC_6(&VAR_4->mca_lock);
 if (VAR_4->mca_flags&VAR_1) {
  VAR_4->mca_flags &= ~VAR_1;
  if (FUNC_4(&VAR_4->mca_addr, VAR_6, VAR_5, 0) == 0)
   FUNC_2(VAR_5, VAR_6);
 }

 FUNC_7(&VAR_4->mca_lock);
 if (VAR_4->mca_flags & VAR_2)
  return;

 if (!VAR_4->idev->dead)
  FUNC_3(VAR_4);

 FUNC_6(&VAR_4->mca_lock);
 if (FUNC_1(&VAR_4->mca_timer))
  FUNC_5(&VAR_4->mca_refcnt);
 FUNC_7(&VAR_4->mca_lock);
}
