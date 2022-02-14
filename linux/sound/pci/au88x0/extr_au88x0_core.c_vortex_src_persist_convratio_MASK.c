
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* card; int mmio; } ;
typedef TYPE_2__ vortex_t ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_3(vortex_t * VAR_1, unsigned char VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;

 do {
  FUNC_2(VAR_1->mmio, VAR_0 + (VAR_2 << 2), VAR_3);
  VAR_4 = FUNC_1(VAR_1->mmio, VAR_0 + (VAR_2 << 2));
  if ((++VAR_5) > 0x9) {
   FUNC_0(VAR_1->card->dev, "Src cvr fail\n");
   break;
  }
 }
 while (VAR_4 != VAR_3);
 return VAR_4;
}
