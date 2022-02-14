
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long expires; } ;
struct ifmcaddr6 {int mca_flags; int mca_lock; int mca_refcnt; TYPE_2__ mca_timer; TYPE_1__* idev; int mca_addr; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,int ) ;
 unsigned long VAR_4 ;
 int FUNC_2 (TYPE_2__*,unsigned long) ;
 unsigned long FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned long FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(struct ifmcaddr6 *VAR_5)
{
 unsigned long VAR_6;

 if (VAR_5->mca_flags & VAR_2)
  return;

 FUNC_1(&VAR_5->mca_addr, VAR_5->idev->dev, VAR_0);

 VAR_6 = FUNC_3() % FUNC_8(VAR_5->idev);

 FUNC_6(&VAR_5->mca_lock);
 if (FUNC_0(&VAR_5->mca_timer)) {
  FUNC_4(&VAR_5->mca_refcnt);
  VAR_6 = VAR_5->mca_timer.expires - VAR_4;
 }

 if (!FUNC_2(&VAR_5->mca_timer, VAR_4 + VAR_6))
  FUNC_5(&VAR_5->mca_refcnt);
 VAR_5->mca_flags |= VAR_3 | VAR_1;
 FUNC_7(&VAR_5->mca_lock);
}
