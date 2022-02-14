
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mmio; TYPE_1__* card; } ;
typedef TYPE_2__ vortex_t ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (TYPE_2__*,unsigned char) ;

__attribute__((used)) static int
FUNC_4(vortex_t * VAR_3, unsigned char VAR_4, unsigned char VAR_5)
{
 int VAR_6, VAR_7 = 0, VAR_8;


 VAR_6 = FUNC_1(VAR_3->mmio, VAR_0);
 if ((VAR_6 & (1 << VAR_5)) == 0) {
  FUNC_2(VAR_3->mmio, VAR_1 + (VAR_5 << 2), VAR_4);
  FUNC_3(VAR_3, VAR_5);
  return 1;
 }
 VAR_8 = VAR_1 + (VAR_5 << 2);
 VAR_6 = FUNC_1(VAR_3->mmio, VAR_8);

 while (VAR_6 & 0x10) {
  VAR_8 = VAR_2 + ((VAR_6 & 0xf) << 2);

  VAR_6 = FUNC_1(VAR_3->mmio, VAR_8);

  if ((++VAR_7) > 0xf) {
   FUNC_0(VAR_3->card->dev,
    "vortex_src_addWTD: lifeboat overflow\n");
   return 0;
  }
 }
 FUNC_2(VAR_3->mmio, VAR_2 + ((VAR_6 & 0xf) << 2), VAR_4);

 FUNC_2(VAR_3->mmio, VAR_8, (VAR_6 & 0xf) | 0x10);
 return 1;
}
