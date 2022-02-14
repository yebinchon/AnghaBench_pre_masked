
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int mmio; TYPE_1__* card; } ;
typedef TYPE_2__ vortex_t ;
struct TYPE_5__ {int dev; } ;
typedef int ADBRamLink ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,unsigned char) ;

__attribute__((used)) static void
FUNC_4(vortex_t * VAR_3, unsigned char VAR_4,
       ADBRamLink VAR_5, ADBRamLink VAR_6)
{
 int VAR_7, VAR_8 = 0, VAR_9;


 VAR_7 =
     FUNC_1(VAR_3->mmio,
     VAR_1 + (VAR_4 << 2)) & VAR_0;
 if (VAR_7 == (VAR_5 & VAR_0)) {
  VAR_7 =
      FUNC_1(VAR_3->mmio,
      VAR_2 + ((VAR_6 & VAR_0) << 2));
  if ((VAR_7 & VAR_0) == VAR_0)
   FUNC_3(VAR_3, VAR_4);
  FUNC_2(VAR_3->mmio, VAR_1 + (VAR_4 << 2),
   VAR_7);
  return;
 }
 do {
  VAR_9 = VAR_7;
  VAR_7 =
      FUNC_1(VAR_3->mmio,
      VAR_2 + (VAR_9 << 2)) & VAR_0;
  if (((VAR_8++) > VAR_0) || (VAR_7 == VAR_0)) {
   FUNC_0(VAR_3->card->dev,
    "vortex_adb_delroutes: route not found! 0x%x\n",
    VAR_5);
   return;
  }
 }
 while (VAR_7 != (VAR_5 & VAR_0));
 VAR_7 = FUNC_1(VAR_3->mmio, VAR_2 + (VAR_7 << 2));
 if ((VAR_7 & VAR_0) == VAR_6)
  VAR_7 = FUNC_1(VAR_3->mmio, VAR_2 + (VAR_7 << 2));

 FUNC_2(VAR_3->mmio, VAR_2 + (VAR_9 << 2), VAR_7);
}
