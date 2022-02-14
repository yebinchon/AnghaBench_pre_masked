
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int v; int s; int h; } ;
struct TYPE_10__ {TYPE_1__ hsv; scalar_t__ enable; } ;
struct TYPE_9__ {int s; int v; int h; int member_2; int member_1; int member_0; } ;
struct TYPE_8__ {int r; int g; int b; } ;
typedef TYPE_2__ RGB ;
typedef TYPE_3__ HSV ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 () ;
 TYPE_2__ FUNC_2 (TYPE_3__) ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_3 (int,int,int,int) ;

void FUNC_4(void)
{
 uint8_t VAR_6 = FUNC_1();

 if (!VAR_3 && VAR_5.enable) {
  switch (FUNC_0(VAR_4)) {
  case 129:
   if (VAR_6 & (1 << VAR_1)) {
    FUNC_3(13, 0xFF, 0x00, 0x00);
    FUNC_3(19, 0xFF, 0xFF, 0x00);
   } else {
    FUNC_3(13, 0x00, 0x00, 0x00);
    FUNC_3(19, 0xFF, 0x00, 0x00);
   }

   FUNC_3(40, 0xFF, 0xFF, 0xFF);

   FUNC_3(24, 0xFF, 0x00, 0x00);
   FUNC_3(38, 0xFF, 0x00, 0x00);
   FUNC_3(37, 0xFF, 0x00, 0x00);
   FUNC_3(36, 0xFF, 0x00, 0x00);

   FUNC_3(25, 0x00, 0xFF, 0x00);
   FUNC_3(23, 0x00, 0xFF, 0x00);

   FUNC_3(26, 0x00, 0x00, 0xFF);
   FUNC_3(39, 0x00, 0x00, 0xFF);

   FUNC_3(6, 0xFF, 0xFF, 0x00);
   FUNC_3(5, 0xFF, 0xFF, 0x00);
   FUNC_3(4, 0xFF, 0xFF, 0x00);
   FUNC_3(20, 0xFF, 0xFF, 0x00);
   FUNC_3(18, 0xFF, 0xFF, 0x00);
   FUNC_3(33, 0xFF, 0xFF, 0x00);
   FUNC_3(32, 0xFF, 0xFF, 0x00);
   FUNC_3(31, 0xFF, 0xFF, 0x00);

   FUNC_3(47, 0xFF, 0x00, 0x00);
   FUNC_3(46, 0xFF, 0x00, 0x00);
   FUNC_3(45, 0xFF, 0x00, 0x00);

   FUNC_3(44, 0x00, 0x00, 0xFF);

   FUNC_3(3, 0x00, 0x00, 0xFF);
   FUNC_3(2, 0x00, 0x00, 0xFF);
   FUNC_3(1, 0x00, 0x00, 0xFF);
   FUNC_3(0, 0x00, 0x00, 0xFF);
   FUNC_3(17, 0x00, 0x00, 0xFF);

   FUNC_3(16, 0xFF, 0xFF, 0xFF);
   FUNC_3(15, 0xFF, 0xFF, 0xFF);
   FUNC_3(14, 0xFF, 0xFF, 0xFF);
   break;

  case 128: {
   HSV VAR_7 = { VAR_5.hsv.h, VAR_5.hsv.s, VAR_5.hsv.v };
   HSV VAR_8 = VAR_7;
   HSV VAR_9 = VAR_7;
   HSV VAR_10 = VAR_7;
   HSV VAR_11 = VAR_7;
   HSV VAR_12 = VAR_7;
   HSV VAR_13 = VAR_7;
   VAR_8.h = VAR_7.h + 8;
   VAR_9.h = VAR_7.h - 8;
   VAR_10.s = VAR_7.s + 16 > 255 ? 255 : VAR_7.s + 16;
   VAR_11.s = VAR_7.s - 16 < 0 ? 0 : VAR_7.s - 16;
   VAR_12.v = VAR_7.v + 16 > 255 ? 255 : VAR_7.v + 16;
   VAR_13.v = VAR_7.v - 16 < 0 ? 0 : VAR_7.v - 16;
   RGB VAR_14 = FUNC_2(VAR_7);
   RGB VAR_15 = FUNC_2(VAR_8);
   RGB VAR_16 = FUNC_2(VAR_9);
   RGB VAR_17 = FUNC_2(VAR_10);
   RGB VAR_18 = FUNC_2(VAR_11);
   RGB VAR_19 = FUNC_2(VAR_12);
   RGB VAR_20 = FUNC_2(VAR_13);
   FUNC_3(41, 0xFF, 0xFF, 0xFF);
   FUNC_3(59, VAR_14.r, VAR_14.g, VAR_14.b);
   FUNC_3(26, 0xFF, 0x80, 0x00);
   FUNC_3(39, 0xFF, 0x80, 0x00);
   FUNC_3(16, 0xFF, 0x80, 0x00);
   FUNC_3(15, 0xFF, 0x80, 0x00);
   FUNC_3(52, 0xFF, 0x40, 0x00);
   FUNC_3(25, 0x80, 0x80, 0x80);
   FUNC_3(38, 0x80, 0x80, 0x80);
   FUNC_3(24, VAR_15.r, VAR_15.g, VAR_15.b);
   FUNC_3(37, VAR_16.r, VAR_16.g, VAR_16.b);
   FUNC_3(23, VAR_17.r, VAR_17.g, VAR_17.b);
   FUNC_3(36, VAR_18.r, VAR_18.g, VAR_18.b);
   FUNC_3(22, VAR_19.r, VAR_19.g, VAR_19.b);
   FUNC_3(35, VAR_20.r, VAR_20.g, VAR_20.b);
   FUNC_3(19, 0xF0, 0x00, 0xFF);
   FUNC_3(18, 0x00, 0x02, 0xFF);
   FUNC_3(33, 0xFF, 0x00, 0x00);
   FUNC_3(32, 0x00, 0x00, 0x00);
   FUNC_3(31, 0x00, 0xFF, 0xF7);
   FUNC_3(46, 0xFF, 0xDA, 0x00);
   FUNC_3(45, 0x00, 0xFF, 0x01);
   FUNC_3(44, 0xFF, 0xA5, 0x18);
   FUNC_3(30, 0x81, 0x3C, 0xFF);
   FUNC_3(17, 0xFF, 0xFF, 0xFF);
  }
  break;

  case 130:
   FUNC_3(57, 0xFF, 0xFF, 0xFF);
   FUNC_3(48, 0xFF, 0x00, 0x00);
   FUNC_3(42, 0x00, 0x80, 0xFF);
   FUNC_3(55, 0x00, 0x80, 0xFF);
   FUNC_3(58, 0xFF, 0x00, 0x00);
   FUNC_3(56, 0xFF, 0x80, 0x00);
   FUNC_3(54, 0xFF, 0x80, 0x00);
   FUNC_3(41, 0xFF, 0x00, 0x40);
   FUNC_3(43, 0xFF, 0x00, 0x40);

   if (VAR_6 & (1 << !VAR_2)) {
    FUNC_3(0, 0xFF, 0x00, 0x00);
   } else {
    FUNC_3(0, 0xFF, 0xFF, 0x00);
   }

   break;
  }
 }

 if (VAR_6 & (1 << VAR_0)) {
  FUNC_3(40, 0xFF, 0xFF, 0xFF);
 }
}
