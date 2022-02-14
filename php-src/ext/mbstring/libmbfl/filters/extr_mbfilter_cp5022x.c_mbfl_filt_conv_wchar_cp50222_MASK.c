
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int const VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int,TYPE_1__*) ;
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
 int FUNC_17 (int,int ) ;
 int FUNC_18 (int,int ) ;
 int FUNC_19 (int,int ) ;
 int* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

int
FUNC_20(int VAR_23, mbfl_convert_filter *VAR_24)
{
 int VAR_25;

 VAR_25 = 0;

 if (VAR_23 >= VAR_13 && VAR_23 < VAR_12) {
  VAR_25 = VAR_11[VAR_23 - VAR_13];
 } else if (VAR_23 >= VAR_16 && VAR_23 < VAR_15) {
  VAR_25 = VAR_14[VAR_23 - VAR_16];
 } else if (VAR_23 >= VAR_19 && VAR_23 < VAR_18) {
  VAR_25 = VAR_17[VAR_23 - VAR_19];
 } else if (VAR_23 >= VAR_22 && VAR_23 < VAR_21) {
  VAR_25 = VAR_20[VAR_23 - VAR_22];
 } else if (VAR_23 >= 0xe000 && VAR_23 < (0xe000 + 10 * 94)) {


  VAR_25 = VAR_23 - 0xe000;
  VAR_25 = (VAR_25 / 94 + 0x75) << 8 | (VAR_25 % 94 + 0x21);
 } else if (VAR_23 >= (0xe000 + 10 * 94) && VAR_23 <= (0xe000 + 20 * 94)) {


  VAR_25 = VAR_23 - (0xe000 + 10 * 94);
  VAR_25 = (VAR_25 / 94 + 0xf5) << 8 | (VAR_25 % 94 + 0xa1);
 }

 if (VAR_25 <= 0) {
  if (VAR_23 == 0xa5) {
   VAR_25 = 0x1005c;
  } else if (VAR_23 == 0x203e) {
   VAR_25 = 0x1007e;
  } else if (VAR_23 == 0xff3c) {
   VAR_25 = 0x2140;
  } else if (VAR_23 == 0xff5e) {
   VAR_25 = 0x2141;
  } else if (VAR_23 == 0x2225) {
   VAR_25 = 0x2142;
  } else if (VAR_23 == 0xff0d) {
   VAR_25 = 0x215d;
  } else if (VAR_23 == 0xffe0) {
   VAR_25 = 0x2171;
  } else if (VAR_23 == 0xffe1) {
   VAR_25 = 0x2172;
  } else if (VAR_23 == 0xffe2) {
   VAR_25 = 0x224c;
  }
 }
 if (VAR_25 <= 0 || (VAR_25 >= 0x8080 && VAR_25 < 0x10000)) {
  int VAR_26;
  VAR_25 = -1;

  for (VAR_26 = 0;
    VAR_26 < VAR_1 - VAR_2; VAR_26++) {
   const int VAR_27 = VAR_2 / 94;

   if (VAR_23 == VAR_0[VAR_26]) {
    VAR_25 = ((VAR_26 / 94 + VAR_27 + 0x21) << 8) + (VAR_26 % 94 + 0x21);
    break;
   }
  }

  if (VAR_25 <= 0) {
   const int VAR_28 = VAR_5 / 94;
   const int VAR_29 =
     VAR_4 - VAR_5;
   for (VAR_26 = 0; VAR_26 < VAR_29; VAR_26++) {
    if (VAR_23 == VAR_3[VAR_26]) {
     VAR_25 = ((VAR_26 / 94 + VAR_28 + 0x21) << 8) + (VAR_26 % 94 + 0x21);
     break;
    }
   }
  }

  if (VAR_25 <= 0) {
   const int VAR_30 =
     VAR_9 - VAR_10;
   const int VAR_31 = VAR_30 >
     VAR_7 ?
      VAR_7:
      VAR_30;
   for (VAR_26 = 0; VAR_26 < VAR_31; VAR_26++) {
    if (VAR_23 == VAR_8[VAR_26]) {
     VAR_25 = VAR_6[VAR_26];
     break;
    }
   }
  }

  if (VAR_23 == 0) {
   VAR_25 = 0;
  } else if (VAR_25 <= 0) {
   VAR_25 = -1;
  }
 }

 if (VAR_25 >= 0) {
  if (VAR_25 < 0x80) {
   if ((VAR_24->status & 0xff00) == 0x500) {
    FUNC_0((*VAR_24->output_function)(0x0f, VAR_24->data));
    VAR_24->status = 0;
   } else if ((VAR_24->status & 0xff00) != 0) {
    FUNC_0((*VAR_24->output_function)(0x1b, VAR_24->data));
    FUNC_0((*VAR_24->output_function)(0x28, VAR_24->data));
    FUNC_0((*VAR_24->output_function)(0x42, VAR_24->data));
    VAR_24->status = 0;
   }
   FUNC_0((*VAR_24->output_function)(VAR_25, VAR_24->data));
  } else if (VAR_25 >= 0xa0 && VAR_25 < 0xe0) {
   if ((VAR_24->status & 0xff00) != 0x500) {
    FUNC_0((*VAR_24->output_function)(0x0e, VAR_24->data));
    VAR_24->status = 0x500;
   }
   FUNC_0((*VAR_24->output_function)(VAR_25 - 0x80, VAR_24->data));
  } else if (VAR_25 < 0x8080) {
   if ((VAR_24->status & 0xff00) == 0x500) {
    FUNC_0((*VAR_24->output_function)(0x0f, VAR_24->data));
    VAR_24->status = 0;
   }
   if ((VAR_24->status & 0xff00) != 0x200) {
    FUNC_0((*VAR_24->output_function)(0x1b, VAR_24->data));
    FUNC_0((*VAR_24->output_function)(0x24, VAR_24->data));
    FUNC_0((*VAR_24->output_function)(0x42, VAR_24->data));
    VAR_24->status = 0x200;
   }
   FUNC_0((*VAR_24->output_function)((VAR_25 >> 8) & 0x7f, VAR_24->data));
   FUNC_0((*VAR_24->output_function)(VAR_25 & 0x7f, VAR_24->data));
  } else if (VAR_25 < 0x10000) {
   FUNC_0(FUNC_1(VAR_23, VAR_24));
  } else {
   if ((VAR_24->status & 0xff00) == 0x500) {
    FUNC_0((*VAR_24->output_function)(0x0f, VAR_24->data));
    VAR_24->status = 0;
   }
   if ((VAR_24->status & 0xff00) != 0x400) {
    FUNC_0((*VAR_24->output_function)(0x1b, VAR_24->data));
    FUNC_0((*VAR_24->output_function)(0x28, VAR_24->data));
    FUNC_0((*VAR_24->output_function)(0x4a, VAR_24->data));
   }
   VAR_24->status = 0x400;
   FUNC_0((*VAR_24->output_function)(VAR_25 & 0x7f, VAR_24->data));
  }
 } else {
  FUNC_0(FUNC_1(VAR_23, VAR_24));
 }

 return VAR_23;
}
