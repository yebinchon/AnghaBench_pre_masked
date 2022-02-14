
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vif_device {struct net_device const* dev; } ;
struct net_device {int dummy; } ;
struct mr_table {struct vif_device* vif_table; } ;
struct TYPE_3__ {int minvif; int maxvif; int* ttls; } ;
struct TYPE_4__ {TYPE_1__ res; } ;
struct mr_mfc {TYPE_2__ mfc_un; } ;


 scalar_t__ FUNC_0 (struct mr_table const*,int) ;

__attribute__((used)) static bool FUNC_1(const struct mr_table *VAR_0,
       const struct mr_mfc *VAR_1,
       const struct net_device *VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_1->mfc_un.res.minvif; VAR_3 < VAR_1->mfc_un.res.maxvif; VAR_3++) {
  if (FUNC_0(VAR_0, VAR_3) && VAR_1->mfc_un.res.ttls[VAR_3] < 255) {
   const struct vif_device *VAR_4;

   VAR_4 = &VAR_0->vif_table[VAR_3];
   if (VAR_4->dev == VAR_2)
    return 1;
  }
 }
 return 0;
}
