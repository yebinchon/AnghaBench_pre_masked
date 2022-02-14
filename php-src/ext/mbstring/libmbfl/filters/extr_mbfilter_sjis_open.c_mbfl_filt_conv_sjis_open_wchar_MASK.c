
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
 int FUNC_1 (int,int,int,int) ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int* VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;

int
FUNC_8(int VAR_15, mbfl_convert_filter *VAR_16)
{
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 switch (VAR_16->status) {
 case 0:
  if (VAR_15 >= 0 && VAR_15 < 0x80) {
   FUNC_0((*VAR_16->output_function)(VAR_15, VAR_16->data));
  } else if (VAR_15 > 0xa0 && VAR_15 < 0xe0) {
   FUNC_0((*VAR_16->output_function)(0xfec0 + VAR_15, VAR_16->data));
  } else if (VAR_15 > 0x80 && VAR_15 < 0xfd && VAR_15 != 0xa0) {
   VAR_16->status = 1;
   VAR_16->cache = VAR_15;
  } else {
   VAR_21 = VAR_15 & VAR_0;
   VAR_21 |= VAR_1;
   FUNC_0((*VAR_16->output_function)(VAR_21, VAR_16->data));
  }
  break;

 case 1:
  VAR_16->status = 0;
  VAR_17 = VAR_16->cache;
  if (VAR_15 >= 0x40 && VAR_15 <= 0xfc && VAR_15 != 0x7f) {
   VAR_21 = 0;
   FUNC_1(VAR_17, VAR_15, VAR_19, VAR_20);
   VAR_18 = (VAR_19 - 0x21)*94 + VAR_20 - 0x21;
   if (VAR_18 <= 137) {
    if (VAR_18 == 31) {
     VAR_21 = 0xff3c;
    } else if (VAR_18 == 32) {
     VAR_21 = 0xff5e;
    } else if (VAR_18 == 33) {
     VAR_21 = 0x2225;
    } else if (VAR_18 == 60) {
     VAR_21 = 0xff0d;
    } else if (VAR_18 == 80) {
     VAR_21 = 0xffe0;
    } else if (VAR_18 == 81) {
     VAR_21 = 0xffe1;
    } else if (VAR_18 == 137) {
     VAR_21 = 0xffe2;
    }
   }
   if (VAR_21 == 0) {
    if (VAR_18 >= VAR_6 && VAR_18 < VAR_5) {
     VAR_21 = VAR_4[VAR_18 - VAR_6];
    } else if (VAR_18 >= 0 && VAR_18 < VAR_14) {
     VAR_21 = VAR_13[VAR_18];
    } else if (VAR_18 >= VAR_9 && VAR_18 < VAR_8) {
     VAR_21 = VAR_7[VAR_18 - VAR_9];
    } else if (VAR_18 >= VAR_12 && VAR_18 < VAR_11) {
     VAR_21 = VAR_10[VAR_18 - VAR_12];
    } else if (VAR_18 >= (94*94) && VAR_18 < (114*94)) {
     VAR_21 = VAR_18 - (94*94) + 0xe000;
    }
   }
   if (VAR_21 <= 0) {
    VAR_21 = (VAR_19 << 8) | VAR_20;
    VAR_21 &= VAR_2;
    VAR_21 |= VAR_3;
   }
   FUNC_0((*VAR_16->output_function)(VAR_21, VAR_16->data));
  } else if ((VAR_15 >= 0 && VAR_15 < 0x21) || VAR_15 == 0x7f) {
   FUNC_0((*VAR_16->output_function)(VAR_15, VAR_16->data));
  } else {
   VAR_21 = (VAR_17 << 8) | VAR_15;
   VAR_21 &= VAR_0;
   VAR_21 |= VAR_1;
   FUNC_0((*VAR_16->output_function)(VAR_21, VAR_16->data));
  }
  break;

 default:
  VAR_16->status = 0;
  break;
 }

 return VAR_15;
}
