
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
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

int
FUNC_7(int VAR_21, mbfl_convert_filter *VAR_22)
{
 int VAR_23, VAR_24, VAR_25;

 VAR_25 = 0;
 if (VAR_21 >= VAR_11 && VAR_21 < VAR_10) {
  VAR_25 = VAR_9[VAR_21 - VAR_11];
 } else if (VAR_21 >= VAR_14 && VAR_21 < VAR_13) {
  VAR_25 = VAR_12[VAR_21 - VAR_14];
 } else if (VAR_21 >= VAR_17 && VAR_21 < VAR_16) {
  VAR_25 = VAR_15[VAR_21 - VAR_17];
 } else if (VAR_21 >= VAR_20 && VAR_21 < VAR_19) {
  VAR_25 = VAR_18[VAR_21 - VAR_20];
 }
 if (VAR_25 >= 0x8080) VAR_25 = -1;
 if (VAR_25 <= 0) {
  VAR_23 = VAR_21 & ~VAR_1;
  if (VAR_23 == VAR_2) {
   VAR_25 = VAR_21 & VAR_1;
   if (VAR_25 >= ((85 + 0x20) << 8)) {
    VAR_25 = -1;
   }
  } else if (VAR_23 == VAR_0) {
   VAR_25 = VAR_21 & VAR_1;
   if ((VAR_25 >= ((85 + 0x20) << 8) &&
                             VAR_25 <= ((88 + 0x20) << 8)) ||
       (VAR_25 >= ((93 + 0x20) << 8) &&
                             VAR_25 <= ((94 + 0x20) << 8))) {
    VAR_25 = -1;
   }
  } else if (VAR_21 == 0xa5) {
   VAR_25 = 0x005c;
  } else if (VAR_21 == 0x203e) {
   VAR_25 = 0x007e;
  } else if (VAR_21 == 0xff3c) {
   VAR_25 = 0x2140;
  } else if (VAR_21 == 0xff5e) {
   VAR_25 = 0x2141;
  } else if (VAR_21 == 0x2225) {
   VAR_25 = 0x2142;
  } else if (VAR_21 == 0xff0d) {
   VAR_25 = 0x215d;
  } else if (VAR_21 == 0xffe0) {
   VAR_25 = 0x2171;
  } else if (VAR_21 == 0xffe1) {
   VAR_25 = 0x2172;
  } else if (VAR_21 == 0xffe2) {
   VAR_25 = 0x224c;
  } else {
   VAR_25 = -1;
   VAR_23 = 0;
   VAR_24 = VAR_4 - VAR_5;
   while (VAR_23 < VAR_24) {
    if (VAR_21 == VAR_3[VAR_23]) {
     VAR_25 = ((VAR_23/94 + 0x2d) << 8) + (VAR_23%94 + 0x21);
     break;
    }
    VAR_23++;
   }
   if (VAR_25 < 0) {
    VAR_23 = 0;
    VAR_24 = VAR_7 - VAR_8;
    while (VAR_23 < VAR_24) {
     if (VAR_21 == VAR_6[VAR_23]) {
       VAR_25 = ((VAR_23/94 + 0x79) << 8) +(VAR_23%94 + 0x21);
       break;
     }
     VAR_23++;
    }
   }
  }
  if (VAR_21 == 0) {
   VAR_25 = 0;
  } else if (VAR_25 <= 0) {
   VAR_25 = -1;
  }
 }

 if (VAR_25 >= 0) {
  if (VAR_25 < 0x80) {
   FUNC_0((*VAR_22->output_function)(VAR_25, VAR_22->data));
  } else if (VAR_25 < 0x100) {
   FUNC_0((*VAR_22->output_function)(0x8e, VAR_22->data));
   FUNC_0((*VAR_22->output_function)(VAR_25, VAR_22->data));
  } else if (VAR_25 < 0x8080) {
   FUNC_0((*VAR_22->output_function)(((VAR_25 >> 8) & 0xff) | 0x80, VAR_22->data));
   FUNC_0((*VAR_22->output_function)((VAR_25 & 0xff) | 0x80, VAR_22->data));
  } else {
      FUNC_0(FUNC_1(VAR_21, VAR_22));
  }
 } else {
  FUNC_0(FUNC_1(VAR_21, VAR_22));
 }

 return VAR_21;
}
