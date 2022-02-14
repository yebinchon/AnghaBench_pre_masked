
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ifmcaddr6 {int mca_flags; TYPE_1__* idev; int mca_addr; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*,struct ifmcaddr6*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct ifmcaddr6 *VAR_2)
{
 if (FUNC_3(VAR_2->idev)) {
  if (VAR_2->mca_flags & VAR_1)
   FUNC_0(&VAR_2->mca_addr, VAR_2->idev->dev,
    VAR_0);
 } else {
  FUNC_1(VAR_2->idev, VAR_2);
  FUNC_2(VAR_2->idev);
 }
}
