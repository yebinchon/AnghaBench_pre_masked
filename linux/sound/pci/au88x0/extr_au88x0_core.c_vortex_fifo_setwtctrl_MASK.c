
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
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (TYPE_2__*,int,int ) ;

__attribute__((used)) static void
FUNC_4(vortex_t * VAR_6, int VAR_7, int VAR_8, int VAR_9,
        int VAR_10, int VAR_11, int VAR_12)
{
 int VAR_13 = 0, VAR_14 = 0;
 int VAR_15 = 2;

 do {
  VAR_13 = FUNC_1(VAR_6->mmio, VAR_5 + (VAR_7 << 2));
  if (VAR_14++ > 0xbb8) {
   FUNC_0(VAR_6->card->dev,
    "vortex_fifo_setwtctrl fail\n");
   break;
  }
 }
 while (VAR_13 & VAR_1);

 if (VAR_11) {
  if ((VAR_13 & VAR_4) == 0) {
   FUNC_3(VAR_6, VAR_7, VAR_2);



   VAR_13 = (VAR_15 & 0x3f) << 0xc;

   VAR_13 = (VAR_13 & 0xfffffffd) | ((VAR_8 & 1) << 1);
   VAR_13 = (VAR_13 & 0xfffffff3) | ((VAR_9 & 3) << 2);
   VAR_13 = (VAR_13 & 0xffffffef) | ((VAR_11 & 1) << 4);
   VAR_13 |= VAR_3;
   VAR_13 = (VAR_13 & 0xffffffdf) | ((VAR_10 & 1) << 5);
  }
 } else {
  if (VAR_13 & VAR_4) {
  } else

   FUNC_3(VAR_6, VAR_7, VAR_2);
 }
 FUNC_2(VAR_6->mmio, VAR_5 + (VAR_7 << 2), VAR_13);
 FUNC_1(VAR_6->mmio, VAR_5 + (VAR_7 << 2));
}
