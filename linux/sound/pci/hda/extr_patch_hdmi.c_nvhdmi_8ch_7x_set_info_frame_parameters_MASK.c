
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_2,
          int VAR_3)
{
 unsigned int VAR_4;
 int VAR_5 = VAR_3 ? (VAR_3 - 1) : 1;

 switch (VAR_3) {
 default:
 case 0:
 case 2:
  VAR_4 = 0x00;
  break;
 case 4:
  VAR_4 = 0x08;
  break;
 case 6:
  VAR_4 = 0x0b;
  break;
 case 8:
  VAR_4 = 0x13;
  break;
 }



 FUNC_0(VAR_2, 0x1, 0,
   VAR_0, VAR_4);

 FUNC_0(VAR_2, 0x1, 0,
   VAR_1,
   (0x71 - VAR_5 - VAR_4));
}
