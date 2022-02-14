
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int flag; } ;
typedef TYPE_1__ mbfl_identify_filter ;



__attribute__((used)) static int FUNC_0(int VAR_0, mbfl_identify_filter *VAR_1)
{
retry:
 switch (VAR_1->status & 0xf) {




 case 0:
  if (!(VAR_1->status & 0x10)) {
   if (VAR_0 == 0x1b)
    VAR_1->status += 2;
  } else if (VAR_1->status == 0x20 && VAR_0 > 0x20 && VAR_0 < 0x7f) {
   VAR_1->status += 1;
  } else if (VAR_0 >= 0 && VAR_0 < 0x80) {
   ;
  } else {
   VAR_1->flag = 1;
  }
  break;


 case 1:
  VAR_1->status &= ~0xf;
  if (VAR_0 < 0x21 || VAR_0 > 0x7e) {
   VAR_1->flag = 1;
  }
  break;


 case 2:
  if (VAR_0 == 0x24) {
   VAR_1->status++;
  } else {
   VAR_1->flag = 1;
   VAR_1->status &= ~0xf;
   goto retry;
  }
  break;


 case 3:
  if (VAR_0 == 0x29) {
   VAR_1->status++;
  } else {
   VAR_1->flag = 1;
   VAR_1->status &= ~0xf;
   goto retry;
  }
  break;


 case 5:
  if (VAR_0 == 0x43) {
   VAR_1->status = 0x10;
  } else {
   VAR_1->flag = 1;
   VAR_1->status &= ~0xf;
   goto retry;
  }
  break;

 default:
  VAR_1->status = 0;
  break;
 }

 return VAR_0;
}
