
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
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,unsigned char) ;

__attribute__((used)) static void
FUNC_4(vortex_t * VAR_4, unsigned char VAR_5,
       ADBRamLink * VAR_6, int VAR_7)
{
 int VAR_8, VAR_9, VAR_10 = 0;

 if ((VAR_7 <= 0) || (VAR_6 == ((void*)0)))
  return;

 VAR_7--;
 FUNC_2(VAR_4->mmio,
  VAR_3 + ((VAR_6[VAR_7] & VAR_0) << 2),
  VAR_1);
 while (VAR_7 > 0) {
  FUNC_2(VAR_4->mmio,
   VAR_3 +
   ((VAR_6[VAR_7 - 1] & VAR_0) << 2), VAR_6[VAR_7]);
  VAR_7--;
 }

 VAR_8 =
     FUNC_1(VAR_4->mmio,
     VAR_2 + (VAR_5 << 2)) & VAR_0;
 if (VAR_8 == VAR_0) {

  FUNC_2(VAR_4->mmio, VAR_2 + (VAR_5 << 2),
   VAR_6[0]);
  FUNC_3(VAR_4, VAR_5);
  return;
 }

 do {
  VAR_9 = VAR_8;
  VAR_8 =
      FUNC_1(VAR_4->mmio,
      VAR_3 + (VAR_8 << 2)) & VAR_0;
  if ((VAR_10++) > VAR_0) {
   FUNC_0(VAR_4->card->dev,
    "vortex_adb_addroutes: unending route! 0x%x\n",
    *VAR_6);
   return;
  }
 }
 while (VAR_8 != VAR_0);
 FUNC_2(VAR_4->mmio, VAR_3 + (VAR_9 << 2), VAR_6[0]);
}
