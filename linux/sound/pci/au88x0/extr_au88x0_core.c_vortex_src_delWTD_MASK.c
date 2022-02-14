
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
 unsigned char VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (TYPE_2__*,unsigned char) ;

__attribute__((used)) static int
FUNC_5(vortex_t * VAR_3, unsigned char VAR_4, unsigned char VAR_5)
{
 int VAR_6 = -1, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12 = 0;


 VAR_8 = FUNC_2(VAR_3->mmio, VAR_0);
 if (((1 << VAR_5) & VAR_8) == 0) {
  FUNC_0(VAR_3->card->dev, "src alarm\n");
  return 0;
 }
 VAR_11 = VAR_1 + (VAR_5 << 2);
 VAR_7 = FUNC_2(VAR_3->mmio, VAR_11);
 if (VAR_7 & 0x10) {
  VAR_9 = (VAR_7 & 0xf);
  if (VAR_4 == VAR_9) {
   VAR_9 = VAR_2 + (VAR_4 << 2);
   VAR_10 = FUNC_2(VAR_3->mmio, VAR_9);

   FUNC_3(VAR_3->mmio, VAR_11, VAR_10);
   FUNC_3(VAR_3->mmio, VAR_9, 0);
  } else {

   VAR_10 =
       FUNC_2(VAR_3->mmio,
       VAR_2 + (VAR_9 << 2));

   while ((VAR_10 & 0xf) != VAR_4) {
    if ((VAR_12) > 0xf) {
     FUNC_1(VAR_3->card->dev,
       "srcdelWTD: error, lifeboat overflow\n");
     return 0;
    }
    VAR_6 = VAR_9;
    VAR_9 = VAR_10 & 0xf;
    VAR_11 = VAR_9 << 2;
    VAR_10 =
        FUNC_2(VAR_3->mmio,
        VAR_2 + VAR_11);

    VAR_12++;
   }

   VAR_11 = VAR_9 << 2;
   if (VAR_10 & 0x10) {
    VAR_9 = VAR_2 + ((VAR_10 & 0xf) << 2);
    VAR_10 = FUNC_2(VAR_3->mmio, VAR_9);

    FUNC_3(VAR_3->mmio,
     VAR_2 + VAR_11, VAR_10);
    FUNC_3(VAR_3->mmio, VAR_9, 0);

   } else {

    if (VAR_6 == -1)
     FUNC_3(VAR_3->mmio,
      VAR_1 +
      (VAR_5 << 2), VAR_7 & 0xef);
    else {
     VAR_9 = (0xffffffe0 & VAR_10) | (0xf & VAR_9);
     FUNC_3(VAR_3->mmio,
      VAR_2 +
      (VAR_6 << 2), VAR_9);

    }
    FUNC_3(VAR_3->mmio,
     VAR_2 + VAR_11, 0);
    return 1;
   }
  }
 } else {

  FUNC_4(VAR_3, VAR_5);
  FUNC_3(VAR_3->mmio, VAR_11, 0);
 }
 return 1;
}
