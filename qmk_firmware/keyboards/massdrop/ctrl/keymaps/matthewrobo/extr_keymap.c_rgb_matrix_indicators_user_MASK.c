
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
struct TYPE_9__ {unsigned int s; int v; int h; int member_2; int member_1; int member_0; } ;
struct TYPE_8__ {int r; int g; int b; } ;
typedef TYPE_2__ RGB ;
typedef TYPE_3__ HSV ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 TYPE_2__ FUNC_2 (TYPE_3__) ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_3 (int,int,int,int) ;

void FUNC_4(void)
{
 uint8_t VAR_5 = FUNC_1();

 if (!VAR_2 && VAR_4.enable) {
  switch (FUNC_0(VAR_3)) {
  case 128:
   if (VAR_5 & (1 << VAR_0)) {
    FUNC_3(41, 0xFF, 0x00, 0x00);
   } else {
    FUNC_3(41, 0x00, 0x00, 0x00);
   }


   FUNC_3(50, 0xFF, 0xFF, 0xFF);
   FUNC_3(101, 0xFF, 0xFF, 0xFF);

   FUNC_3(36, 0xFF, 0x00, 0x00);
   FUNC_3(52, 0xFF, 0x00, 0x00);
   FUNC_3(53, 0xFF, 0x00, 0x00);
   FUNC_3(54, 0xFF, 0x00, 0x00);

   FUNC_3(35, 0x00, 0xFF, 0x00);
   FUNC_3(37, 0x00, 0xFF, 0x00);

   FUNC_3(34, 0x00, 0x00, 0xFF);
   FUNC_3(51, 0x00, 0x00, 0xFF);

   FUNC_3(23, 0xFF, 0xFF, 0x00);
   FUNC_3(24, 0xFF, 0xFF, 0x00);
   FUNC_3(25, 0xFF, 0xFF, 0x00);
   FUNC_3(40, 0xFF, 0xFF, 0x00);
   FUNC_3(42, 0xFF, 0xFF, 0x00);
   FUNC_3(57, 0xFF, 0xFF, 0x00);
   FUNC_3(58, 0xFF, 0xFF, 0x00);
   FUNC_3(59, 0xFF, 0xFF, 0x00);

   FUNC_3(69, 0xFF, 0x00, 0x00);
   FUNC_3(70, 0xFF, 0x00, 0x00);
   FUNC_3(71, 0xFF, 0x00, 0x00);

   FUNC_3(72, 0x00, 0x00, 0xFF);

   FUNC_3(26, 0x00, 0x00, 0xFF);
   FUNC_3(27, 0x00, 0x00, 0xFF);
   FUNC_3(28, 0x00, 0x00, 0xFF);
   FUNC_3(43, 0x00, 0x00, 0xFF);
   FUNC_3(46, 0x00, 0x00, 0xFF);
   FUNC_3(60, 0x00, 0x00, 0xFF);
   FUNC_3(61, 0x00, 0x00, 0xFF);
   FUNC_3(73, 0x00, 0x00, 0xFF);
   break;

  case 129: {
   HSV VAR_6 = { VAR_4.hsv.h, VAR_4.hsv.s, VAR_4.hsv.v };
   HSV VAR_7 = VAR_6;
   HSV VAR_8 = VAR_6;
   HSV VAR_9 = VAR_6;
   HSV VAR_10 = VAR_6;
   HSV VAR_11 = VAR_6;
   HSV VAR_12 = VAR_6;
   VAR_7.h = VAR_6.h + 8;
   VAR_8.h = VAR_6.h - 8;
   VAR_9.s = VAR_6.s + 16 > 255 ? 255u : VAR_6.s + 16;
   VAR_10.s = VAR_6.s - 16 < 0 ? 0 : VAR_6.s - 16;
   VAR_11.v = VAR_6.v + 16 > 255 ? 255 : VAR_6.v + 16;
   VAR_12.v = VAR_6.v - 16 < 0 ? 0 : VAR_6.v - 16;
   RGB VAR_13 = FUNC_2(VAR_6);
   RGB VAR_14 = FUNC_2(VAR_7);
   RGB VAR_15 = FUNC_2(VAR_8);
   RGB VAR_16 = FUNC_2(VAR_9);
   RGB VAR_17 = FUNC_2(VAR_10);
   RGB VAR_18 = FUNC_2(VAR_11);
   RGB VAR_19 = FUNC_2(VAR_12);
   FUNC_3(81, 0xFF, 0xFF, 0xFF);
   FUNC_3(91, 0xFF, 0xFF, 0xFF);
   FUNC_3(93, 0x00, 0x00, 0x00);
   FUNC_3(94, VAR_13.r, VAR_13.g, VAR_13.b);
   FUNC_3(95, VAR_13.r, VAR_13.g, VAR_13.b);
   FUNC_3(96, 0x00, 0x00, 0x00);
   FUNC_3(68, 0xFF, 0x00, 0x00);
   FUNC_3(69, 0xFF, 0x00, 0x40);
   FUNC_3(32, 0x00, 0x80, 0xFF);
   FUNC_3(49, 0x00, 0x80, 0xFF);
   FUNC_3(13, 0xFF, 0x00, 0x00);
   FUNC_3(30, 0xFF, 0x00, 0x00);
   FUNC_3(47, 0xFF, 0x40, 0x00);
   FUNC_3(48, 0xFF, 0x40, 0x00);
   FUNC_3(14, 0x00, 0xFF, 0x00);
   FUNC_3(31, 0x00, 0xFF, 0x00);

   if (VAR_5 & (1 << !VAR_1)) {
    FUNC_3(15, 0xFF, 0x00, 0x00);
   } else {
    FUNC_3(15, 0xFF, 0xFF, 0x00);
   }

   FUNC_3(44, 0xFF, 0x80, 0x00);
   FUNC_3(45, 0xFF, 0x80, 0x00);
   FUNC_3(34, 0xFF, 0x80, 0x00);
   FUNC_3(51, 0xFF, 0x80, 0x00);
   FUNC_3(63, 0xFF, 0x40, 0x00);
   FUNC_3(64, VAR_13.r, VAR_13.g, VAR_13.b);
   FUNC_3(36, VAR_14.r, VAR_14.g, VAR_14.b);
   FUNC_3(53, VAR_15.r, VAR_15.g, VAR_15.b);
   FUNC_3(37, VAR_16.r, VAR_16.g, VAR_16.b);
   FUNC_3(54, VAR_17.r, VAR_17.g, VAR_17.b);
   FUNC_3(38, VAR_18.r, VAR_18.g, VAR_18.b);
   FUNC_3(55, VAR_19.r, VAR_19.g, VAR_19.b);
   FUNC_3(79, VAR_13.r, VAR_13.g, VAR_13.b);
   FUNC_3(75, VAR_18.r, VAR_18.g, VAR_18.b);
   FUNC_3(85, VAR_19.r, VAR_19.g, VAR_19.b);
   FUNC_3(35, 0x80, 0x80, 0x80);
   FUNC_3(52, 0x80, 0x80, 0x80);
   FUNC_3(84, 0x80, 0x80, 0x80);
   FUNC_3(86, 0x80, 0x80, 0x80);
   FUNC_3(41, 0xF0, 0x00, 0xFF);
   FUNC_3(42, 0x00, 0x02, 0xFF);
   FUNC_3(57, 0xFF, 0x00, 0x00);
   FUNC_3(58, 0x00, 0x00, 0x00);
   FUNC_3(59, 0x00, 0xFF, 0xF7);
   FUNC_3(70, 0xFF, 0xDA, 0x00);
   FUNC_3(71, 0x00, 0xFF, 0x01);
   FUNC_3(72, 0xFF, 0xA5, 0x18);
   FUNC_3(60, 0x81, 0x3C, 0xFF);
   FUNC_3(43, 0xFF, 0xFF, 0xFF);
  }
  break;
  }
 }
}
