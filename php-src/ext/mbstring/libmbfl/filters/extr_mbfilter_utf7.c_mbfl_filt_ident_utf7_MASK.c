
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int flag; } ;
typedef TYPE_1__ mbfl_identify_filter ;



__attribute__((used)) static int FUNC_0(int VAR_0, mbfl_identify_filter *VAR_1)
{
 int VAR_2;

 switch (VAR_1->status) {

 case 0:
  if (VAR_0 == 0x2b) {
   VAR_1->status++;
  } else if (VAR_0 == 0x5c || VAR_0 == 0x7e || VAR_0 < 0 || VAR_0 > 0x7f) {
   VAR_1->flag = 1;
  }
  break;


 case 1:
 case 2:
  VAR_2 = 0;
  if (VAR_0 >= 0x41 && VAR_0 <= 0x5a) {
   VAR_2 = 1;
  } else if (VAR_0 >= 0x61 && VAR_0 <= 0x7a) {
   VAR_2 = 1;
  } else if (VAR_0 >= 0x30 && VAR_0 <= 0x39) {
   VAR_2 = 1;
  } else if (VAR_0 == 0x2b) {
   VAR_2 = 1;
  } else if (VAR_0 == 0x2f) {
   VAR_2 = 1;
  }
  if (VAR_2 <= 0) {
   if (VAR_1->status == 1 && VAR_0 != 0x2d) {
    VAR_1->flag = 1;
   } else if (VAR_0 < 0 || VAR_0 > 0x7f) {
    VAR_1->flag = 1;
   }
   VAR_1->status = 0;
  } else {
   VAR_1->status = 2;
  }
  break;

 default:
  VAR_1->status = 0;
  break;
 }

 return VAR_0;
}
