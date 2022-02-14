
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mdev_state {TYPE_1__* type; scalar_t__ memblk; } ;
struct mdev_device {int dummy; } ;
struct TYPE_2__ {int width; int bytepp; int height; } ;


 struct mdev_state* FUNC_0 (struct mdev_device*) ;
 int FUNC_1 (scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_2(struct mdev_device *VAR_0)
{
 struct mdev_state *VAR_1 = FUNC_0(VAR_0);
 u32 VAR_2, VAR_3;


 VAR_2 = VAR_1->type->width * VAR_1->type->bytepp;
 for (VAR_3 = 0; VAR_3 < VAR_1->type->height; VAR_3++)
  FUNC_1(VAR_1->memblk + VAR_3 * VAR_2,
         VAR_3 * 255 / VAR_1->type->height,
         VAR_2);
 return 0;
}
