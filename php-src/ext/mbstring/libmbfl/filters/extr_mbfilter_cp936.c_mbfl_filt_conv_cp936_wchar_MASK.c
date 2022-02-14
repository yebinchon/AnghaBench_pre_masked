
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int cache; int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int** VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;

int
FUNC_10(int VAR_8, mbfl_convert_filter *VAR_9)
{
 int VAR_10;
 int VAR_11, VAR_12, VAR_13 = -1;

 switch (VAR_9->status) {
 case 0:
  if (VAR_8 >= 0 && VAR_8 < 0x80) {
   FUNC_0((*VAR_9->output_function)(VAR_8, VAR_9->data));
  } else if (VAR_8 == 0x80) {
   FUNC_0((*VAR_9->output_function)(0x20ac, VAR_9->data));
  } else if (VAR_8 < 0xff) {
   VAR_9->status = 1;
   VAR_9->cache = VAR_8;
  } else {
   FUNC_0((*VAR_9->output_function)(0xf8f5, VAR_9->data));
  }
  break;

 case 1:
  VAR_9->status = 0;
  VAR_11 = VAR_9->cache;

  if (((VAR_11 >= 0xaa && VAR_11 <= 0xaf) || (VAR_11 >= 0xf8 && VAR_11 <= 0xfe)) &&
   (VAR_8 >= 0xa1 && VAR_8 <= 0xfe)) {

   VAR_13 = 94*(VAR_11 >= 0xf8 ? VAR_11 - 0xf2 : VAR_11 - 0xaa) + (VAR_8 - 0xa1) + 0xe000;
   FUNC_0((*VAR_9->output_function)(VAR_13, VAR_9->data));
  } else if (VAR_11 >= 0xa1 && VAR_11 <= 0xa7 && VAR_8 >= 0x40 && VAR_8 < 0xa1 && VAR_8 != 0x7f) {

   VAR_13 = 96*(VAR_11 - 0xa1) + VAR_8 - (VAR_8 >= 0x80 ? 0x41 : 0x40) + 0xe4c6;
   FUNC_0((*VAR_9->output_function)(VAR_13, VAR_9->data));
  }

  VAR_12 = (VAR_11 << 8) | VAR_8;

  if (VAR_13 <= 0 &&
   ((VAR_12 >= 0xa2ab && VAR_12 <= 0xa9f0 + (0xe80f-0xe801)) ||
    (VAR_12 >= 0xd7fa && VAR_12 <= 0xd7fa + (0xe814-0xe810)) ||
    (VAR_12 >= 0xfe50 && VAR_12 <= 0xfe80 + (0xe864-0xe844)))) {
   for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
    if (VAR_12 >= VAR_6[VAR_10][2] &&
     VAR_12 <= VAR_6[VAR_10][2] +
     VAR_6[VAR_10][1] - VAR_6[VAR_10][0]) {
     VAR_13 = VAR_12 - VAR_6[VAR_10][2] + VAR_6[VAR_10][0];
     FUNC_0((*VAR_9->output_function)(VAR_13, VAR_9->data));
     break;
    }
   }
  }

  if (VAR_13 <= 0) {
   if (VAR_11 < 0xff && VAR_11 > 0x80 && VAR_8 > 0x39 && VAR_8 < 0xff && VAR_8 != 0x7f) {
    VAR_13 = (VAR_11 - 0x81)*192 + (VAR_8 - 0x40);
    if (VAR_13 >= 0 && VAR_13 < VAR_5) {
     VAR_13 = VAR_4[VAR_13];
    } else {
     VAR_13 = 0;
    }
    if (VAR_13 <= 0) {
     VAR_13 = (VAR_11 << 8) | VAR_8;
     VAR_13 &= VAR_2;
     VAR_13 |= VAR_3;
    }
    FUNC_0((*VAR_9->output_function)(VAR_13, VAR_9->data));
   } else if ((VAR_8 >= 0 && VAR_8 < 0x21) || VAR_8 == 0x7f) {
    FUNC_0((*VAR_9->output_function)(VAR_8, VAR_9->data));
   } else {
    VAR_13 = (VAR_11 << 8) | VAR_8;
    VAR_13 &= VAR_0;
    VAR_13 |= VAR_1;
    FUNC_0((*VAR_9->output_function)(VAR_13, VAR_9->data));
   }
  }
  break;

 default:
  VAR_9->status = 0;
  break;
 }

 return VAR_8;
}
