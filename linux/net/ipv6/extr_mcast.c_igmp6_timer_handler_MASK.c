
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct ifmcaddr6 {int mca_lock; int mca_flags; TYPE_1__* idev; int mca_addr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ifmcaddr6* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 struct ifmcaddr6* VAR_3 ;
 int FUNC_2 (struct ifmcaddr6*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,struct ifmcaddr6*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_5)
{
 struct ifmcaddr6 *VAR_6 = FUNC_0(VAR_6, VAR_5, VAR_4);

 if (FUNC_3(VAR_6->idev))
  FUNC_1(&VAR_6->mca_addr, VAR_6->idev->dev, VAR_0);
 else
  FUNC_4(VAR_6->idev, VAR_6);

 FUNC_5(&VAR_6->mca_lock);
 VAR_6->mca_flags |= VAR_1;
 VAR_6->mca_flags &= ~VAR_2;
 FUNC_6(&VAR_6->mca_lock);
 FUNC_2(VAR_6);
}
