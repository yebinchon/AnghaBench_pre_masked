
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


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 () ;
 TYPE_2__ FUNC_4 (TYPE_3__) ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_5 (int,int,int,int) ;

void FUNC_6(void)
{
 if (FUNC_0(VAR_0)) {
  FUNC_5(8, 0xFF, 0xFF, 0xFF);
 }

 uint8_t VAR_6 = FUNC_3();

 if (!VAR_3 && VAR_5.enable) {
  switch (FUNC_2(VAR_4)) {
  case 128:
   if (FUNC_1(VAR_6, VAR_1)) {
    FUNC_5(17, 0xFF, 0x00, 0x00);
    FUNC_5(26, 0xFF, 0xFF, 0x00);
   } else {
    FUNC_5(17, 0x00, 0x00, 0x00);
    FUNC_5(26, 0xFF, 0x00, 0x00);
   }

   FUNC_5(8, 0xFF, 0xFF, 0xFF);

   FUNC_5(4, 0xFF, 0x00, 0x00);
   FUNC_5(47, 0xFF, 0x00, 0x00);
   FUNC_5(46, 0xFF, 0x00, 0x00);
   FUNC_5(45, 0xFF, 0x00, 0x00);

   FUNC_5(5, 0x00, 0xFF, 0x00);
   FUNC_5(3, 0x00, 0xFF, 0x00);

   FUNC_5(6, 0x00, 0x00, 0xFF);
   FUNC_5(48, 0x00, 0x00, 0xFF);

   FUNC_5(10, 0xFF, 0xFF, 0x00);
   FUNC_5(9, 0xFF, 0xFF, 0x00);
   FUNC_5(18, 0xFF, 0xFF, 0x00);
   FUNC_5(0, 0xFF, 0xFF, 0x00);
   FUNC_5(27, 0xFF, 0xFF, 0x00);
   FUNC_5(51, 0xFF, 0xFF, 0x00);
   FUNC_5(52, 0xFF, 0xFF, 0x00);
   FUNC_5(53, 0xFF, 0xFF, 0x00);

   FUNC_5(60, 0xFF, 0x00, 0x00);
   FUNC_5(61, 0xFF, 0x00, 0x00);
   FUNC_5(62, 0xFF, 0x00, 0x00);

   FUNC_5(63, 0x00, 0x00, 0xFF);

   FUNC_5(19, 0x00, 0x00, 0xFF);
   FUNC_5(20, 0x00, 0x00, 0xFF);
   FUNC_5(21, 0x00, 0x00, 0xFF);
   FUNC_5(28, 0x00, 0x00, 0xFF);
   FUNC_5(24, 0x00, 0x00, 0xFF);
   FUNC_5(25, 0x00, 0x00, 0xFF);

   FUNC_5(29, 0xFF, 0xFF, 0xFF);
   FUNC_5(30, 0xFF, 0xFF, 0xFF);
   FUNC_5(31, 0xFF, 0xFF, 0xFF);
   break;

  case 129: {
   HSV VAR_7 = { VAR_5.hsv.h, VAR_5.hsv.s, VAR_5.hsv.v };
   HSV VAR_8 = VAR_7;
   HSV VAR_9 = VAR_7;
   HSV VAR_10 = VAR_7;
   HSV VAR_11 = VAR_7;
   HSV VAR_12 = VAR_7;
   HSV VAR_13 = VAR_7;
   VAR_8.h = VAR_7.h + 8;
   VAR_9.h = VAR_7.h - 8;
   VAR_10.s = VAR_7.s + 16 > 255 ? 255u : VAR_7.s + 16;
   VAR_11.s = VAR_7.s - 16 < 0 ? 0 : VAR_7.s - 16;
   VAR_12.v = VAR_7.v + 16 > 255 ? 255 : VAR_7.v + 16;
   VAR_13.v = VAR_7.v - 16 < 0 ? 0 : VAR_7.v - 16;
   RGB VAR_14 = FUNC_4(VAR_7);
   RGB VAR_15 = FUNC_4(VAR_8);
   RGB VAR_16 = FUNC_4(VAR_9);
   RGB VAR_17 = FUNC_4(VAR_10);
   RGB VAR_18 = FUNC_4(VAR_11);
   RGB VAR_19 = FUNC_4(VAR_12);
   RGB VAR_20 = FUNC_4(VAR_13);
   FUNC_5(65, 0xFF, 0xFF, 0xFF);
   FUNC_5(36, 0xFF, 0x00, 0x00);
   FUNC_5(37, 0xFF, 0x00, 0x40);
   FUNC_5(37, 0xFF, 0x00, 0x40);
   FUNC_5(59, 0x00, 0x80, 0xFF);
   FUNC_5(34, 0x00, 0x80, 0xFF);
   FUNC_5(32, 0xFF, 0x00, 0x00);
   FUNC_5(24, 0xFF, 0x40, 0x00);
   FUNC_5(25, 0xFF, 0x40, 0x00);

   if (VAR_6 & (1 << !VAR_2)) {
    FUNC_5(15, 0xFF, 0x00, 0x00);
   } else {
    FUNC_5(15, 0xFF, 0xFF, 0x00);
   }

   FUNC_5(6, 0xFF, 0x80, 0x00);
   FUNC_5(48, 0xFF, 0x80, 0x00);
   FUNC_5(29, 0xFF, 0x80, 0x00);
   FUNC_5(30, 0xFF, 0x80, 0x00);
   FUNC_5(40, 0xFF, 0x40, 0x00);
   FUNC_5(4, VAR_15.r, VAR_15.g, VAR_15.b);
   FUNC_5(46, VAR_16.r, VAR_16.g, VAR_16.b);
   FUNC_5(3, VAR_17.r, VAR_17.g, VAR_17.b);
   FUNC_5(45, VAR_18.r, VAR_18.g, VAR_18.b);
   FUNC_5(2, VAR_19.r, VAR_19.g, VAR_19.b);
   FUNC_5(44, VAR_20.r, VAR_20.g, VAR_20.b);
   FUNC_5(35, VAR_14.r, VAR_14.g, VAR_14.b);
   FUNC_5(5, 0x80, 0x80, 0x80);
   FUNC_5(47, 0x80, 0x80, 0x80);
   FUNC_5(67, 0x80, 0x80, 0x80);
   FUNC_5(33, 0x80, 0x80, 0x80);
   FUNC_5(26, 0xF0, 0x00, 0xFF);
   FUNC_5(27, 0x00, 0x02, 0xFF);
   FUNC_5(51, 0xFF, 0x00, 0x00);
   FUNC_5(52, 0x00, 0x00, 0x00);
   FUNC_5(53, 0x00, 0xFF, 0xF7);
   FUNC_5(61, 0xFF, 0xDA, 0x00);
   FUNC_5(62, 0x00, 0xFF, 0x01);
   FUNC_5(63, 0xFF, 0xA5, 0x18);
   FUNC_5(54, 0x81, 0x3C, 0xFF);
   FUNC_5(28, 0xFF, 0xFF, 0xFF);
  }
  break;
  }
 }
}
