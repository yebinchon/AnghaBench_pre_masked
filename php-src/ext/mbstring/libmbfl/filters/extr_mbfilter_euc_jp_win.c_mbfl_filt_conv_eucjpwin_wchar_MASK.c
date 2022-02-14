
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
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int* VAR_13 ;
 int VAR_14 ;
 int* VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int,int ) ;
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

int
FUNC_13(int VAR_17, mbfl_convert_filter *VAR_18)
{
 int VAR_19, VAR_20, VAR_21, VAR_22;

 switch (VAR_18->status) {
 case 0:
  if (VAR_17 >= 0 && VAR_17 < 0x80) {
   FUNC_0((*VAR_18->output_function)(VAR_17, VAR_18->data));
  } else if (VAR_17 > 0xa0 && VAR_17 < 0xff) {
   VAR_18->status = 1;
   VAR_18->cache = VAR_17;
  } else if (VAR_17 == 0x8e) {
   VAR_18->status = 2;
  } else if (VAR_17 == 0x8f) {
   VAR_18->status = 3;
  } else {
   VAR_21 = VAR_17 & VAR_0;
   VAR_21 |= VAR_1;
   FUNC_0((*VAR_18->output_function)(VAR_21, VAR_18->data));
  }
  break;

 case 1:
  VAR_18->status = 0;
  VAR_19 = VAR_18->cache;
  if (VAR_17 > 0xa0 && VAR_17 < 0xff) {
   VAR_21 = 0;
   VAR_20 = (VAR_19 - 0xa1)*94 + VAR_17 - 0xa1;
   if (VAR_20 <= 137) {
    if (VAR_20 == 31) {
     VAR_21 = 0xff3c;
    } else if (VAR_20 == 32) {
     VAR_21 = 0xff5e;
    } else if (VAR_20 == 33) {
     VAR_21 = 0x2225;
    } else if (VAR_20 == 60) {
     VAR_21 = 0xff0d;
    } else if (VAR_20 == 80) {
     VAR_21 = 0xffe0;
    } else if (VAR_20 == 81) {
     VAR_21 = 0xffe1;
    } else if (VAR_20 == 137) {
     VAR_21 = 0xffe2;
    }
   }
   if (VAR_21 == 0) {
    if (VAR_20 >= VAR_7 && VAR_20 < VAR_6) {
     VAR_21 = VAR_5[VAR_20 - VAR_7];
    } else if (VAR_20 >= 0 && VAR_20 < VAR_14) {
     VAR_21 = VAR_13[VAR_20];
    } else if (VAR_20 >= (84 * 94)) {
     VAR_21 = VAR_20 - (84 * 94) + 0xe000;
    }
   }
   if (VAR_21 <= 0) {
    VAR_21 = ((VAR_19 & 0x7f) << 8) | (VAR_17 & 0x7f);
    VAR_21 &= VAR_3;
    VAR_21 |= VAR_4;
   }
   FUNC_0((*VAR_18->output_function)(VAR_21, VAR_18->data));
  } else if ((VAR_17 >= 0 && VAR_17 < 0x21) || VAR_17 == 0x7f) {
   FUNC_0((*VAR_18->output_function)(VAR_17, VAR_18->data));
  } else {
   VAR_21 = (VAR_19 << 8) | VAR_17;
   VAR_21 &= VAR_0;
   VAR_21 |= VAR_1;
   FUNC_0((*VAR_18->output_function)(VAR_21, VAR_18->data));
  }
  break;

 case 2:
  VAR_18->status = 0;
  if (VAR_17 > 0xa0 && VAR_17 < 0xe0) {
   VAR_21 = 0xfec0 + VAR_17;
   FUNC_0((*VAR_18->output_function)(VAR_21, VAR_18->data));
  } else if ((VAR_17 >= 0 && VAR_17 < 0x21) || VAR_17 == 0x7f) {
   FUNC_0((*VAR_18->output_function)(VAR_17, VAR_18->data));
  } else {
   VAR_21 = 0x8e00 | VAR_17;
   VAR_21 &= VAR_0;
   VAR_21 |= VAR_1;
   FUNC_0((*VAR_18->output_function)(VAR_21, VAR_18->data));
  }
  break;

 case 3:
  if ((VAR_17 >= 0 && VAR_17 < 0x21) || VAR_17 == 0x7f) {
   FUNC_0((*VAR_18->output_function)(VAR_17, VAR_18->data));
   VAR_18->status = 0;
  } else {
   VAR_18->status++;
   VAR_18->cache = VAR_17;
  }
  break;
 case 4:
  VAR_18->status = 0;
  VAR_19 = VAR_18->cache;
  if (VAR_19 > 0xa0 && VAR_19 < 0xff && VAR_17 > 0xa0 && VAR_17 < 0xff) {
   VAR_20 = (VAR_19 - 0xa1)*94 + VAR_17 - 0xa1;
   if (VAR_20 >= 0 && VAR_20 < VAR_16) {
    VAR_21 = VAR_15[VAR_20];
    if (VAR_21 == 0x007e) {
     VAR_21 = 0xff5e;
    }
   } else if (VAR_20 >= (82*94) && VAR_20 < (84*94)) {
    VAR_20 = (VAR_19<< 8) | VAR_17;
    VAR_21 = 0;
    VAR_22 = 0;
    while (VAR_22 < VAR_9) {
     if (VAR_20 == VAR_8[VAR_22]) {
      if (VAR_22 < (VAR_11 - VAR_12)) {
       VAR_21 = VAR_10[VAR_22];
      }
      break;
     }
     VAR_22++;
    }
   } else if (VAR_20 >= (84*94)) {
    VAR_21 = VAR_20 - (84*94) + (0xe000 + (94*10));
   } else {
    VAR_21 = 0;
   }
   if (VAR_21 == 0x00A6) {
    VAR_21 = 0xFFE4;
   }
   if (VAR_21 <= 0) {
    VAR_21 = ((VAR_19 & 0x7f) << 8) | (VAR_17 & 0x7f);
    VAR_21 &= VAR_3;
    VAR_21 |= VAR_2;
   }
   FUNC_0((*VAR_18->output_function)(VAR_21, VAR_18->data));
  } else if ((VAR_17 >= 0 && VAR_17 < 0x21) || VAR_17 == 0x7f) {
   FUNC_0((*VAR_18->output_function)(VAR_17, VAR_18->data));
  } else {
   VAR_21 = (VAR_19 << 8) | VAR_17 | 0x8f0000;
   VAR_21 &= VAR_0;
   VAR_21 |= VAR_1;
   FUNC_0((*VAR_18->output_function)(VAR_21, VAR_18->data));
  }
  break;

 default:
  VAR_18->status = 0;
  break;
 }

 return VAR_17;
}
