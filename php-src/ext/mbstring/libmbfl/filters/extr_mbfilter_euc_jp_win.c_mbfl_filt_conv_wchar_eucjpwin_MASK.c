
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
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 int* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

int
FUNC_10(int VAR_24, mbfl_convert_filter *VAR_25)
{
 int VAR_26, VAR_27, VAR_28;

 VAR_28 = 0;
 if (VAR_24 >= VAR_14 && VAR_24 < VAR_13) {
  VAR_28 = VAR_12[VAR_24 - VAR_14];
 } else if (VAR_24 >= VAR_17 && VAR_24 < VAR_16) {
  VAR_28 = VAR_15[VAR_24 - VAR_17];
 } else if (VAR_24 >= VAR_20 && VAR_24 < VAR_19) {
  VAR_28 = VAR_18[VAR_24 - VAR_20];
 } else if (VAR_24 >= VAR_23 && VAR_24 < VAR_22) {
  VAR_28 = VAR_21[VAR_24 - VAR_23];
 } else if (VAR_24 >= 0xe000 && VAR_24 < (0xe000 + 10*94)) {
  VAR_28 = VAR_24 - 0xe000;
  VAR_26 = VAR_28/94 + 0x75;
  VAR_27 = VAR_28%94 + 0x21;
  VAR_28 = (VAR_26 << 8) | VAR_27;
 } else if (VAR_24 >= (0xe000 + 10*94) && VAR_24 < (0xe000 + 20*94)) {
  VAR_28 = VAR_24 - (0xe000 + 10*94);
  VAR_26 = VAR_28/94 + 0xf5;
  VAR_27 = VAR_28%94 + 0xa1;
  VAR_28 = (VAR_26 << 8) | VAR_27;
 }
 if (VAR_28 == 0xa2f1) {
  VAR_28 = 0x2d62;
 }
 if (VAR_28 <= 0) {
  VAR_26 = VAR_24 & ~VAR_2;
  if (VAR_26 == VAR_3) {
   VAR_28 = VAR_24 & VAR_2;
   if (VAR_28 >= ((85 + 0x20) << 8)) {
    VAR_28 = -1;
   }
  } else if (VAR_26 == VAR_0) {
   VAR_28 = VAR_24 & VAR_2;
   if (VAR_28 >= ((85 + 0x20) << 8)) {
    VAR_28 = -1;
   }
  } else if (VAR_26 == VAR_1) {
   VAR_28 = VAR_24 & VAR_2;
   if (VAR_28 >= ((83 + 0x20) << 8)) {
    VAR_28 = -1;
   } else {
    VAR_28 |= 0x8080;
   }
  } else if (VAR_24 == 0xa5) {
   VAR_28 = 0x216f;
  } else if (VAR_24 == 0x203e) {
   VAR_28 = 0x2131;
  } else if (VAR_24 == 0xff3c) {
   VAR_28 = 0x2140;
  } else if (VAR_24 == 0xff5e) {
   VAR_28 = 0x2141;
  } else if (VAR_24 == 0x2225) {
   VAR_28 = 0x2142;
  } else if (VAR_24 == 0xff0d) {
   VAR_28 = 0x215d;
  } else if (VAR_24 == 0xffe0) {
   VAR_28 = 0x2171;
  } else if (VAR_24 == 0xffe1) {
   VAR_28 = 0x2172;
  } else if (VAR_24 == 0xffe2) {
   VAR_28 = 0x224c;
  } else if (VAR_24 == 0xff5e) {
   VAR_28 = 0x2141;
  } else {
   VAR_28 = -1;
   VAR_26 = 0;
   VAR_27 = VAR_5 - VAR_6;
   while (VAR_26 < VAR_27) {
    const int VAR_29 = VAR_6 / 94;

    if (VAR_24 == VAR_4[VAR_26]) {
     VAR_28 = ((VAR_26 / 94 + VAR_29 + 0x21) << 8) + (VAR_26 % 94 + 0x21);
     break;
    }
    VAR_26++;
   }
   if (VAR_28 < 0) {
    VAR_26 = 0;
    VAR_27 = VAR_10 - VAR_11;
    while (VAR_26 < VAR_27) {
     if (VAR_24 == VAR_9[VAR_26]) {
      if (VAR_26 < VAR_8) {
       VAR_28 = VAR_7[VAR_26];
      }
      break;
     }
     VAR_26++;
    }
   }
  }
  if (VAR_24 == 0) {
   VAR_28 = 0;
  } else if (VAR_28 <= 0) {
   VAR_28 = -1;
  }
 }

 if (VAR_28 >= 0) {
  if (VAR_28 < 0x80) {
   FUNC_0((*VAR_25->output_function)(VAR_28, VAR_25->data));
  } else if (VAR_28 < 0x100) {
   FUNC_0((*VAR_25->output_function)(0x8e, VAR_25->data));
   FUNC_0((*VAR_25->output_function)(VAR_28, VAR_25->data));
  } else if (VAR_28 < 0x8080) {
   FUNC_0((*VAR_25->output_function)(((VAR_28 >> 8) & 0xff) | 0x80, VAR_25->data));
   FUNC_0((*VAR_25->output_function)((VAR_28 & 0xff) | 0x80, VAR_25->data));
  } else {
   FUNC_0((*VAR_25->output_function)(0x8f, VAR_25->data));
   FUNC_0((*VAR_25->output_function)(((VAR_28 >> 8) & 0xff) | 0x80, VAR_25->data));
   FUNC_0((*VAR_25->output_function)((VAR_28 & 0xff) | 0x80, VAR_25->data));
  }
 } else {
  FUNC_0(FUNC_1(VAR_24, VAR_25));
 }

 return VAR_24;
}
