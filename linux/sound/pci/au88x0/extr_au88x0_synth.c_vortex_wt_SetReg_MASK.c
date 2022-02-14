
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mmio; TYPE_1__* card; } ;
typedef TYPE_2__ vortex_t ;
typedef int u32 ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,unsigned char,int) ;
 int FUNC_11 (int ,int,int ) ;

__attribute__((used)) static int
FUNC_12(vortex_t * VAR_2, unsigned char VAR_3, int VAR_4,
   u32 VAR_5)
{
 int VAR_6;

 if ((VAR_3 == 5) || ((VAR_3 >= 7) && (VAR_3 <= 10)) || (VAR_3 == 0xc)) {
  if (VAR_4 >= (VAR_0 / VAR_1)) {
   FUNC_10(VAR_2->card->dev,
     "WT SetReg: bank out of range. reg=0x%x, wt=%d\n",
     VAR_3, VAR_4);
   return 0;
  }
 } else {
  if (VAR_4 >= VAR_0) {
   FUNC_9(VAR_2->card->dev,
    "WT SetReg: voice out of range\n");
   return 0;
  }
 }
 if (VAR_3 > 0xc)
  return 0;

 switch (VAR_3) {

 case 0:




  FUNC_11(VAR_2->mmio, FUNC_7(VAR_4), VAR_5);
  return 0xc;
 case 1:




  FUNC_11(VAR_2->mmio, FUNC_6(VAR_4, 0), VAR_5);
  return 0xc;
 case 2:




  FUNC_11(VAR_2->mmio, FUNC_6(VAR_4, 1), VAR_5);
  return 0xc;
 case 3:




  FUNC_11(VAR_2->mmio, FUNC_6(VAR_4, 2), VAR_5);
  return 0xc;
 case 4:




  FUNC_11(VAR_2->mmio, FUNC_6(VAR_4, 3), VAR_5);
  return 0xc;
 case 6:




  FUNC_11(VAR_2->mmio, FUNC_5(VAR_4), VAR_5);
  return 0xc;
 case 0xb:





  FUNC_11(VAR_2->mmio, FUNC_2(VAR_4, 3), VAR_5);
  FUNC_11(VAR_2->mmio, FUNC_2(VAR_4, 2), VAR_5);
  FUNC_11(VAR_2->mmio, FUNC_2(VAR_4, 1), VAR_5);
  FUNC_11(VAR_2->mmio, FUNC_2(VAR_4, 0), VAR_5);
  return 0xc;

 case 5:
  VAR_6 = FUNC_8(VAR_4);
  break;
 case 8:
  VAR_6 = FUNC_0(VAR_4);
  break;
 case 9:
  VAR_6 = FUNC_4(VAR_4);
  break;
 case 0xa:
  VAR_6 = FUNC_1(VAR_4);
  break;
 case 0xc:
  VAR_6 = FUNC_3(VAR_4);
  break;
 default:
  return 0;
 }



 FUNC_11(VAR_2->mmio, VAR_6, VAR_5);
 return 1;
}
