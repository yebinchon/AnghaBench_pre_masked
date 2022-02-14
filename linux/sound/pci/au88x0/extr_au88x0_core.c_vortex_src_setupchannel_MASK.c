
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,unsigned int) ;
 int FUNC_1 (TYPE_1__*,unsigned char) ;
 int FUNC_2 (TYPE_1__*,unsigned char) ;
 int FUNC_3 (TYPE_1__*,unsigned char,unsigned int) ;
 int FUNC_4 (TYPE_1__*,unsigned char,int) ;

__attribute__((used)) static void FUNC_5(vortex_t * VAR_3, unsigned char VAR_4,
   unsigned int VAR_5, unsigned int VAR_6, int VAR_7, int VAR_8,
   int VAR_9, int VAR_10, unsigned int VAR_11, int VAR_12)
{







 int VAR_13, VAR_14 = 0, VAR_15;

 FUNC_2(VAR_3, VAR_4);

 if (VAR_7) {
  if ((VAR_11 & 0x10000) && (VAR_11 != 0x10000)) {
   VAR_11 = 0;
   VAR_13 = 0x7;
  } else {
   if ((((short)VAR_11) < 0) && (VAR_11 != 0x8000)) {
    VAR_11 = 0;
    VAR_13 = 0x8;
   } else {
    VAR_11 = 1;
    VAR_13 = 0xc;
   }
  }
 } else {
  if ((VAR_5 & 0x10000) && (VAR_5 != 0x10000)) {
   VAR_11 = 0;
   VAR_13 = 0x11 - ((VAR_5 >> 0xe) & 7);
   if (VAR_5 & 0x3fff)
    VAR_13 -= 1;
   else
    VAR_13 -= 2;
  } else {
   VAR_11 = 1;
   VAR_13 = 0xc;
  }
 }
 FUNC_1(VAR_3, VAR_4);
 FUNC_4(VAR_3, VAR_4, VAR_12);

 if ((VAR_9 == 0) && (VAR_7 == 0)) {
  if (VAR_11)
   VAR_15 = 0xf;
  else
   VAR_15 = 0xc;
  VAR_14 = 0;
 } else {
  if (VAR_11)
   VAR_14 = 0xf;
  else
   VAR_14 = 0xc;
  VAR_15 = 0;
 }
 FUNC_0(VAR_3->mmio, VAR_0 + (VAR_4 << 2),
  (VAR_10 << 0x9) | (VAR_7 << 0x8) | ((VAR_13 & 0xf) << 4) | VAR_8);

 FUNC_3(VAR_3, VAR_4, VAR_5);
 FUNC_0(VAR_3->mmio, VAR_1 + (VAR_4 << 2), VAR_6 & 0xffff);

 FUNC_0(VAR_3->mmio, VAR_2 + (VAR_4 << 2),
  (VAR_11 << 0x11) | (VAR_9 << 0x10) | (VAR_14 << 0x8) | VAR_15);


}
