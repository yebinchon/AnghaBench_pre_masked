
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int mmio; TYPE_1__* card; } ;
typedef TYPE_2__ vortex_t ;
typedef int u32 ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_2__*,int,int ) ;

__attribute__((used)) static void FUNC_5(vortex_t * VAR_7)
{
 int VAR_8;
 u32 VAR_9;


 VAR_9 = VAR_5 + ((VAR_3 - 1) * 4);
 for (VAR_8 = VAR_3 - 1; VAR_8 >= 0; VAR_8--) {
  FUNC_2(VAR_7->mmio, VAR_9, (VAR_1 | VAR_2));
  if (FUNC_1(VAR_7->mmio, VAR_9) != (VAR_1 | VAR_2))
   FUNC_0(VAR_7->card->dev, "bad adb fifo reset!\n");
  FUNC_3(VAR_7, VAR_8, VAR_0);
  VAR_9 -= 4;
 }



 VAR_9 = VAR_6 + ((VAR_4 - 1) * 4);
 for (VAR_8 = VAR_4 - 1; VAR_8 >= 0; VAR_8--) {
  FUNC_2(VAR_7->mmio, VAR_9, VAR_1);
  if (FUNC_1(VAR_7->mmio, VAR_9) != VAR_1)
   FUNC_0(VAR_7->card->dev,
    "bad wt fifo reset (0x%08x, 0x%08x)!\n",
    VAR_9, FUNC_1(VAR_7->mmio, VAR_9));
  FUNC_4(VAR_7, VAR_8, VAR_0);
  VAR_9 -= 4;
 }
 FUNC_2(VAR_7->mmio, 0x17008, 0x61);

}
