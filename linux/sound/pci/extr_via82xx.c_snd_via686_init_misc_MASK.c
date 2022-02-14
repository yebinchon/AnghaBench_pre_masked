
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via82xx {unsigned char old_legacy; unsigned char old_legacy_cfg; scalar_t__ revision; int mpu_port_saved; unsigned char legacy_saved; unsigned char legacy_cfg_saved; int pci; TYPE_1__* card; int rmidi; int * mpu_res; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_10 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,unsigned char) ;
 int FUNC_3 (int ,int,int) ;
 int * FUNC_4 (int,int,char*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int ,int,int,int,int *) ;
 int FUNC_6 (struct via82xx*,unsigned char*) ;

__attribute__((used)) static int FUNC_7(struct via82xx *VAR_11)
{
 unsigned char VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_12 = VAR_11->old_legacy;
 VAR_13 = VAR_11->old_legacy_cfg;
 VAR_12 |= VAR_6;
 VAR_12 &= ~VAR_4;
 if (VAR_11->revision >= VAR_9) {
  VAR_14 = 1;
  if (VAR_10 >= 0x200) {
   VAR_10 &= 0xfffc;
   FUNC_3(VAR_11->pci, 0x18, VAR_10 | 0x01);



  } else {
   VAR_10 = FUNC_1(VAR_11->pci, 2);
  }
 } else {
  switch (VAR_10) {
  case 0x300:
  case 0x310:
  case 0x320:
  case 0x330:
   VAR_13 &= ~(3 << 2);
   VAR_13 |= (VAR_10 & 0x0030) >> 2;
   break;
  default:
   if (VAR_12 & VAR_5)
    VAR_10 = 0x300 + ((VAR_13 & 0x000c) << 2);
   break;
  }
 }
 if (VAR_10 >= 0x200 &&
     (VAR_11->mpu_res = FUNC_4(VAR_10, 2, "VIA82xx MPU401"))
     != ((void*)0)) {
  if (VAR_14)
   VAR_12 |= VAR_7;
  VAR_12 |= VAR_5;
 } else {
  if (VAR_14)
   VAR_12 &= ~VAR_7;
  VAR_12 &= ~VAR_5;
  VAR_10 = 0;
 }

 FUNC_2(VAR_11->pci, VAR_3, VAR_12);
 FUNC_2(VAR_11->pci, VAR_8, VAR_13);
 if (VAR_11->mpu_res) {
  if (FUNC_5(VAR_11->card, 0, VAR_0,
     VAR_10, VAR_1 |
     VAR_2, -1,
     &VAR_11->rmidi) < 0) {
   FUNC_0(VAR_11->card->dev,
     "unable to initialize MPU-401 at 0x%lx, skipping\n",
     VAR_10);
   VAR_12 &= ~VAR_5;
  } else {
   VAR_12 &= ~VAR_6;
  }
  FUNC_2(VAR_11->pci, VAR_3, VAR_12);
 }

 FUNC_6(VAR_11, &VAR_12);






 return 0;
}
