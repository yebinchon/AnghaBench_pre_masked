
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdev_state {struct mdev_state* vconfig; struct mdev_state* pages; TYPE_1__* type; } ;
struct mdev_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ mbytes; } ;


 int FUNC_0 (struct mdev_state*) ;
 int VAR_0 ;
 struct mdev_state* FUNC_1 (struct mdev_device*) ;
 int FUNC_2 (struct mdev_device*,int *) ;

__attribute__((used)) static int FUNC_3(struct mdev_device *VAR_1)
{
 struct mdev_state *VAR_2 = FUNC_1(VAR_1);

 VAR_0 -= VAR_2->type->mbytes;
 FUNC_2(VAR_1, ((void*)0));
 FUNC_0(VAR_2->pages);
 FUNC_0(VAR_2->vconfig);
 FUNC_0(VAR_2);
 return 0;
}
