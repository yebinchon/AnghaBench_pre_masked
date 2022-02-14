
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

 VAR_2 = (VAR_1->status >> 8) & 0xff;
 VAR_1->status &= 0xff;

 if (VAR_1->status == 0) {
  if (VAR_0 <= 0x80 || VAR_0 == 0xff) {
   VAR_1->status = 0;
  } else {
   VAR_1->status = 1;
   VAR_1->status |= (VAR_0 << 8);
  }
 } else if (VAR_1->status == 1) {
  if (((VAR_2 >= 0x81 && VAR_2 <= 0x84) || (VAR_2 >= 0x90 && VAR_2 <= 0xe3)) && VAR_0 >= 0x30 && VAR_0 <= 0x39) {
   VAR_1->status = 2;
  } else if (((VAR_2 >= 0xaa && VAR_2 <= 0xaf) || (VAR_2 >= 0xf8 && VAR_2 <= 0xfe)) && (VAR_0 >= 0xa1 && VAR_0 <= 0xfe)) {
   VAR_1->status = 0;
  } else if (VAR_2 >= 0xa1 && VAR_2 <= 0xa7 && VAR_0 >= 0x40 && VAR_0 < 0xa1 && VAR_0 != 0x7f) {
   VAR_1->status = 0;
  } else if ((VAR_2 >= 0xa1 && VAR_2 <= 0xa9 && VAR_0 >= 0xa1 && VAR_0 <= 0xfe) ||
       (VAR_2 >= 0xb0 && VAR_2 <= 0xf7 && VAR_0 >= 0xa1 && VAR_0 <= 0xfe) ||
       (VAR_2 >= 0x81 && VAR_2 <= 0xa0 && VAR_0 >= 0x40 && VAR_0 <= 0xfe && VAR_0 != 0x7f) ||
       (VAR_2 >= 0xaa && VAR_2 <= 0xfe && VAR_0 >= 0x40 && VAR_0 <= 0xa0 && VAR_0 != 0x7f) ||
       (VAR_2 >= 0xa8 && VAR_2 <= 0xa9 && VAR_0 >= 0x40 && VAR_0 <= 0xa0 && VAR_0 != 0x7f)) {
   VAR_1->status = 0;
  } else {
   VAR_1->flag = 1;
   VAR_1->status = 0;
  }
 } else if (VAR_1->status == 2) {
  if (VAR_0 > 0x80 && VAR_0 < 0xff) {
   VAR_1->status = 3;
  } else {
   VAR_1->flag = 1;
   VAR_1->status = 0;
  }
 } else if (VAR_1->status == 3) {
  if (VAR_0 >= 0x30 && VAR_0 < 0x40) {
   VAR_1->status = 0;
  } else {
   VAR_1->flag = 1;
   VAR_1->status = 0;
  }
 } else {
  VAR_1->flag = 1;
 }

 return VAR_0;
}
