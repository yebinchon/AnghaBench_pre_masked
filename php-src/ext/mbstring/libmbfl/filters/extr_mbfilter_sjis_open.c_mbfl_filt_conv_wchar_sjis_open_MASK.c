
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; int (* output_function ) (int,int ) ;} ;
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
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

int
FUNC_6(int VAR_22, mbfl_convert_filter *VAR_23)
{
 int VAR_24, VAR_25, VAR_26, VAR_27;

 VAR_26 = 0;
 VAR_27 = 0;
 if (VAR_22 >= VAR_12 && VAR_22 < VAR_11) {
  VAR_26 = VAR_10[VAR_22 - VAR_12];
 } else if (VAR_22 >= VAR_15 && VAR_22 < VAR_14) {
  VAR_26 = VAR_13[VAR_22 - VAR_15];
 } else if (VAR_22 >= VAR_18 && VAR_22 < VAR_17) {
  VAR_26 = VAR_16[VAR_22 - VAR_18];
 } else if (VAR_22 >= VAR_21 && VAR_22 < VAR_20) {
  VAR_26 = VAR_19[VAR_22 - VAR_21];
 } else if (VAR_22 >= 0xe000 && VAR_22 < (0xe000 + 20*94)) {
  VAR_26 = VAR_22 - 0xe000;
  VAR_24 = VAR_26/94 + 0x7f;
  VAR_25 = VAR_26%94 + 0x21;
  VAR_26 = (VAR_24 << 8) | VAR_25;
  VAR_27 = 1;
 }
 if (VAR_26 <= 0) {
  VAR_24 = VAR_22 & ~VAR_2;
  if (VAR_24 == VAR_3) {
   VAR_26 = VAR_22 & VAR_2;
   VAR_27 = 1;
  } else if (VAR_24 == VAR_0) {
   VAR_26 = VAR_22 & VAR_2;
  } else if (VAR_24 == VAR_1) {
   VAR_26 = VAR_22 & VAR_2;
   VAR_26 |= 0x8080;
  } else if (VAR_22 == 0xa5) {
   VAR_26 = 0x216f;
  } else if (VAR_22 == 0x203e) {
   VAR_26 = 0x2131;
  } else if (VAR_22 == 0xff3c) {
   VAR_26 = 0x2140;
  } else if (VAR_22 == 0xff5e) {
   VAR_26 = 0x2141;
  } else if (VAR_22 == 0x2225) {
   VAR_26 = 0x2142;
  } else if (VAR_22 == 0xff0d) {
   VAR_26 = 0x215d;
  } else if (VAR_22 == 0xffe0) {
   VAR_26 = 0x2171;
  } else if (VAR_22 == 0xffe1) {
   VAR_26 = 0x2172;
  } else if (VAR_22 == 0xffe2) {
   VAR_26 = 0x224c;
  }
 }
 if ((VAR_26 <= 0) || (VAR_26 >= 0x8080 && VAR_27 == 0)) {
  VAR_26 = -1;
  VAR_24 = 0;
  VAR_25 = VAR_5 - VAR_6;
  while (VAR_24 < VAR_25) {
   if (VAR_22 == VAR_4[VAR_24]) {
    VAR_26 = ((VAR_24/94 + 0x2d) << 8) + (VAR_24%94 + 0x21);
    break;
   }
   VAR_24++;
  }
  if (VAR_26 <= 0) {
   VAR_24 = 0;
   VAR_25 = VAR_8 - VAR_9;
   while (VAR_24 < VAR_25) {
    if (VAR_22 == VAR_7[VAR_24]) {
     VAR_26 = ((VAR_24/94 + 0x93) << 8) + (VAR_24%94 + 0x21);
     break;
    }
    VAR_24++;
   }
  }
  if (VAR_22 == 0) {
   VAR_26 = 0;
  } else if (VAR_26 <= 0) {
   VAR_26 = -1;
  }
 }

 if (VAR_26 >= 0) {
  if (VAR_26 < 0x100) {
   FUNC_0((*VAR_23->output_function)(VAR_26, VAR_23->data));
  } else {
   VAR_24 = (VAR_26 >> 8) & 0xff;
   VAR_25 = VAR_26 & 0xff;
   FUNC_1(VAR_24, VAR_25, VAR_26, VAR_27);
   FUNC_0((*VAR_23->output_function)(VAR_26, VAR_23->data));
   FUNC_0((*VAR_23->output_function)(VAR_27, VAR_23->data));
  }
 } else {
  FUNC_0(FUNC_2(VAR_22, VAR_23));
 }

 return VAR_22;
}
