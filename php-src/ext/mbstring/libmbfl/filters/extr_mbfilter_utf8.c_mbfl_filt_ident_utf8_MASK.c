
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int flag; } ;
typedef TYPE_1__ mbfl_identify_filter ;



int FUNC_0(int VAR_0, mbfl_identify_filter *VAR_1)
{
 int VAR_2;

 VAR_2 = (VAR_1->status >> 8) & 0xff;
 VAR_1->status &= 0xff;

 if (VAR_0 < 0x80) {
  if (VAR_0 < 0) {
   VAR_1->flag = 1;
  } else if (VAR_1->status) {
   VAR_1->flag = 1;
  }
  VAR_1->status = 0;
 } else if (VAR_0 < 0xc0) {
  switch (VAR_1->status) {
  case 0x20:
   if ((VAR_2 == 0x0 && VAR_0 >= 0xa0) ||
    (VAR_2 == 0xd && VAR_0 < 0xa0) ||
    (VAR_2 > 0x0 && VAR_2 != 0xd)) {
    VAR_1->status++;
   } else {
    VAR_1->flag = 1;
    VAR_1->status = 0;
   }
   break;
  case 0x30:
   if ((VAR_2 == 0x0 && VAR_0 >= 0x90) ||
    (VAR_2 > 0x0 && VAR_2 < 0x4) ||
    (VAR_2 == 0x4 && VAR_0 < 0x90)) {
    VAR_1->status++;
   } else {
    VAR_1->flag = 1;
    VAR_1->status = 0;
   }
   break;
  case 0x31:
   VAR_1->status++;
   break;
  case 0x10:
  case 0x21:
  case 0x32:
   VAR_1->status = 0;
   break;
  default:
   VAR_1->flag = 1;
   VAR_1->status = 0;
   break;
  }
 } else if (VAR_0 < 0xc2) {
  VAR_1->flag = 1;
  VAR_1->status = 0;
 } else {
  if (VAR_1->status) {
   VAR_1->flag = 1;
  }
  VAR_1->status = 0;
  if (VAR_0 < 0xe0) {
   VAR_1->status = 0x10;
  } else if (VAR_0 < 0xf0) {
   VAR_1->status = 0x20;
   VAR_1->status |= (VAR_0 & 0xf) << 8;
  } else if (VAR_0 < 0xf5) {
   VAR_1->status = 0x30;
   VAR_1->status |= (VAR_0 & 0x7) << 8;
  } else {
   VAR_1->flag = 1;
  }
 }

 return VAR_0;
}
