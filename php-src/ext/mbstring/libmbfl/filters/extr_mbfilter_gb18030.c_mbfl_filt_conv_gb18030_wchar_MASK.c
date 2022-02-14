
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
 int FUNC_1 (int,int ,int ) ;
 int** VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (int,int ) ;

int
FUNC_17(int VAR_11, mbfl_convert_filter *VAR_12)
{
 int VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17 = -1;

 switch (VAR_12->status) {
 case 0:
  if (VAR_11 >= 0 && VAR_11 < 0x80) {
   FUNC_0((*VAR_12->output_function)(VAR_11, VAR_12->data));
  } else if (VAR_11 == 0x80) {
   FUNC_0((*VAR_12->output_function)(0x20ac, VAR_12->data));
  } else if (VAR_11 == 0xff) {
   FUNC_0((*VAR_12->output_function)(0x00ff, VAR_12->data));
  } else if (VAR_11 > 0x80 && VAR_11 < 0xff) {
   VAR_12->status = 1;
   VAR_12->cache = VAR_11;
  } else {
   VAR_17 = VAR_11 & VAR_0;
   VAR_17 |= VAR_1;
   FUNC_0((*VAR_12->output_function)(VAR_17, VAR_12->data));
  }
  break;

 case 1:
  VAR_14 = VAR_12->cache;
  VAR_12->status = 0;

  if (VAR_14 >= 0x81 && VAR_14 <= 0x84 && VAR_11 >= 0x30 && VAR_11 <= 0x39) {
   VAR_12->status = 2;
   VAR_12->cache = (VAR_14 << 8) | VAR_11;
   return VAR_11;
  } else if (VAR_14 >= 0x90 && VAR_14 <= 0xe3 && VAR_11 >= 0x30 && VAR_11 <= 0x39) {

   VAR_12->status = 2;
   VAR_12->cache = (VAR_14 << 8) | VAR_11;
   return VAR_11;
  } else if (((VAR_14 >= 0xaa && VAR_14 <= 0xaf) || (VAR_14 >= 0xf8 && VAR_14 <= 0xfe)) &&
       (VAR_11 >= 0xa1 && VAR_11 <= 0xfe)) {
   VAR_17 = 94*(VAR_14 >= 0xf8 ? VAR_14 - 0xf2 : VAR_14 - 0xaa) + (VAR_11 - 0xa1) + 0xe000;
   FUNC_0((*VAR_12->output_function)(VAR_17, VAR_12->data));
  } else if (VAR_14 >= 0xa1 && VAR_14 <= 0xa7 && VAR_11 >= 0x40 && VAR_11 < 0xa1 && VAR_11 != 0x7f) {

   VAR_17 = 96*(VAR_14 - 0xa1) + VAR_11 - (VAR_11 >= 0x80 ? 0x41 : 0x40) + 0xe4c6;
   FUNC_0((*VAR_12->output_function)(VAR_17, VAR_12->data));
  }

  VAR_15 = (VAR_14 << 8) | VAR_11;

  if (VAR_17 <= 0 &&
   ((VAR_15 >= 0xa2ab && VAR_15 <= 0xa9f0 + (0xe80f-0xe801)) ||
    (VAR_15 >= 0xd7fa && VAR_15 <= 0xd7fa + (0xe814-0xe810)) ||
    (VAR_15 >= 0xfe50 && VAR_15 <= 0xfe80 + (0xe864-0xe844)))) {
   for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
    if (VAR_15 >= VAR_6[VAR_13][2] &&
     VAR_15 <= VAR_6[VAR_13][2] + VAR_6[VAR_13][1]
     - VAR_6[VAR_13][0]) {
     VAR_17 = VAR_15 - VAR_6[VAR_13][2] + VAR_6[VAR_13][0];
     FUNC_0((*VAR_12->output_function)(VAR_17, VAR_12->data));
     break;
    }
   }
  }

  if (VAR_17 <= 0) {
   if ((VAR_14 >= 0xa1 && VAR_14 <= 0xa9 && VAR_11 >= 0xa1 && VAR_11 <= 0xfe) ||
    (VAR_14 >= 0xb0 && VAR_14 <= 0xf7 && VAR_11 >= 0xa1 && VAR_11 <= 0xfe) ||
    (VAR_14 >= 0x81 && VAR_14 <= 0xa0 && VAR_11 >= 0x40 && VAR_11 <= 0xfe && VAR_11 != 0x7f) ||
    (VAR_14 >= 0xaa && VAR_14 <= 0xfe && VAR_11 >= 0x40 && VAR_11 <= 0xa0 && VAR_11 != 0x7f) ||
    (VAR_14 >= 0xa8 && VAR_14 <= 0xa9 && VAR_11 >= 0x40 && VAR_11 <= 0xa0 && VAR_11 != 0x7f)) {
    VAR_17 = (VAR_14 - 0x81)*192 + (VAR_11 - 0x40);
    if (VAR_17 >= 0 && VAR_17 < VAR_5) {
     VAR_17 = VAR_4[VAR_17];
    } else {
     VAR_17 = 0;
    }
    if (VAR_17 <= 0) {
     VAR_17 = (VAR_14 << 8) | VAR_11;
     VAR_17 &= VAR_3;
     VAR_17 |= VAR_2;
    }
    FUNC_0((*VAR_12->output_function)(VAR_17, VAR_12->data));
   } else if ((VAR_11 >= 0 && VAR_11 < 0x21) || VAR_11 == 0x7f) {
    FUNC_0((*VAR_12->output_function)(VAR_11, VAR_12->data));
   } else {
    VAR_17 = (VAR_14 << 8) | VAR_11;
    VAR_17 &= VAR_0;
    VAR_17 |= VAR_1;
    FUNC_0((*VAR_12->output_function)(VAR_17, VAR_12->data));
   }
  }
  break;
 case 2:
  VAR_14 = (VAR_12->cache >> 8) & 0xff;
  VAR_15 = VAR_12->cache & 0xff;
  VAR_12->status = 0;
  VAR_12->cache = 0;
  if (((VAR_14 >= 0x81 && VAR_14 <= 0x84) || (VAR_14 >= 0x90 && VAR_14 <= 0xe3)) &&
   VAR_15 >= 0x30 && VAR_15 <= 0x39 && VAR_11 >= 0x81 && VAR_11 <= 0xfe) {
   VAR_12->cache = (VAR_14 << 16) | (VAR_15 << 8) | VAR_11;
   VAR_12->status = 3;
  } else {
   VAR_17 = (VAR_14 << 16) | (VAR_15 << 8) | VAR_11;
   VAR_17 &= VAR_0;
   VAR_17 |= VAR_1;
   FUNC_0((*VAR_12->output_function)(VAR_17, VAR_12->data));
  }
   break;

 case 3:
  VAR_14 = (VAR_12->cache >> 16) & 0xff;
  VAR_15 = (VAR_12->cache >> 8) & 0xff;
  VAR_16 = VAR_12->cache & 0xff;
  VAR_12->status = 0;
  VAR_12->cache = 0;
  if (((VAR_14 >= 0x81 && VAR_14 <= 0x84) || (VAR_14 >= 0x90 && VAR_14 <= 0xe3)) &&
   VAR_15 >= 0x30 && VAR_15 <= 0x39 && VAR_16 >= 0x81 && VAR_16 <= 0xfe && VAR_11 >= 0x30 && VAR_11 <= 0x39) {
   if (VAR_14 >= 0x90 && VAR_14 <= 0xe3) {
    VAR_17 = ((((VAR_14 - 0x90)*10 + (VAR_15 - 0x30))*126 + (VAR_16 - 0x81)))*10 + (VAR_11 - 0x30) + 0x10000;
   } else {
    VAR_17 = (((VAR_14 - 0x81)*10 + (VAR_15 - 0x30))*126 + (VAR_16 - 0x81))*10 + (VAR_11 - 0x30);
    if (VAR_17 >= 0 && VAR_17 <= 39419) {
     VAR_13 = FUNC_1(VAR_17, VAR_8, VAR_9);
     if (VAR_13<0) {

      VAR_17 = (VAR_14 << 24) | (VAR_15 << 16) | (VAR_16 << 8) | VAR_11;
      VAR_17 &= VAR_0;
      VAR_17 |= VAR_1;
      FUNC_0((*VAR_12->output_function)(VAR_17, VAR_12->data));
      return VAR_11;
     }
     VAR_17 += VAR_10[VAR_13];
    } else {
     VAR_17 = (VAR_14 << 24) | (VAR_15 << 16) | (VAR_16 << 8) | VAR_11;
     VAR_17 &= VAR_0;
     VAR_17 |= VAR_1;
     FUNC_0((*VAR_12->output_function)(VAR_17, VAR_12->data));
     return VAR_11;
    }
   }
   FUNC_0((*VAR_12->output_function)(VAR_17, VAR_12->data));
  } else {
   VAR_17 = (VAR_14 << 24) | (VAR_15 << 16) | (VAR_16 << 8) | VAR_11;
   VAR_17 &= VAR_0;
   VAR_17 |= VAR_1;
   FUNC_0((*VAR_12->output_function)(VAR_17, VAR_12->data));
  }
   break;

 default:
  VAR_12->status = 0;
  break;
 }

 return VAR_11;
}
