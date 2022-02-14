
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; } ;
struct ifmcaddr6 {int mca_flags; scalar_t__ mca_sfmode; TYPE_1__* idev; int mca_crcount; int mca_lock; int mca_addr; } ;
struct TYPE_3__ {int mc_qrv; struct net_device* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (struct ifmcaddr6*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,char*,struct net_device*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ifmcaddr6 *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->idev->dev;
 char VAR_8[VAR_4];

 if (FUNC_0(&VAR_6->mca_addr) <
     VAR_1)
  return;

 FUNC_6(&VAR_6->mca_lock);
 if (!(VAR_6->mca_flags&VAR_2)) {
  VAR_6->mca_flags |= VAR_2;
  if (FUNC_5(&VAR_6->mca_addr, VAR_8, VAR_7, 0) == 0)
   FUNC_1(VAR_7, VAR_8);
 }
 FUNC_7(&VAR_6->mca_lock);

 if (!(VAR_7->flags & VAR_0) || (VAR_6->mca_flags & VAR_3))
  return;

 if (FUNC_4(VAR_6->idev)) {
  FUNC_2(VAR_6);
  return;
 }






 if (VAR_6->mca_sfmode == VAR_5)
  VAR_6->mca_crcount = VAR_6->idev->mc_qrv;

 FUNC_3(VAR_6->idev);
}
