
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int flag; } ;
typedef TYPE_1__ mbfl_identify_filter ;



__attribute__((used)) static int FUNC_0(int VAR_0, mbfl_identify_filter *VAR_1)
{
 switch (VAR_1->status) {
 case 0:
  if (VAR_0 >= 0 && VAR_0 < 0x80) {
   ;
  } else if (VAR_0 > 0xa0 && VAR_0 < 0xff) {
   VAR_1->status = 1;
  } else {
   VAR_1->flag = 1;
  }
  break;

 case 1:
  if (VAR_0 < 0xa1 || VAR_0 > 0xfe) {
   VAR_1->flag = 1;
  }
  VAR_1->status = 0;
  break;

 default:
  VAR_1->status = 0;
  break;
 }

 return VAR_0;
}
