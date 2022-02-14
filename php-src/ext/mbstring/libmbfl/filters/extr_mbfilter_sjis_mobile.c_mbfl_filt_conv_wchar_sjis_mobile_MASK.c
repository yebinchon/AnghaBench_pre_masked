
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int status; scalar_t__ cache; int data; int (* output_function ) (int,int ) ;TYPE_1__* to; } ;
typedef TYPE_2__ mbfl_convert_filter ;
struct TYPE_8__ {scalar_t__ no_encoding; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int,int,int) ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int,int*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int,int*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int,int*,TYPE_2__*) ;
 int FUNC_6 (int,TYPE_2__*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;
 int* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

int
FUNC_10(int VAR_28, mbfl_convert_filter *VAR_29)
{
 int VAR_30, VAR_31, VAR_32, VAR_33;

 VAR_32 = 0;
 VAR_33 = 0;
 if (VAR_28 >= VAR_18 && VAR_28 < VAR_17) {
  VAR_32 = VAR_16[VAR_28 - VAR_18];
 } else if (VAR_28 >= VAR_21 && VAR_28 < VAR_20) {
  VAR_32 = VAR_19[VAR_28 - VAR_21];
 } else if (VAR_28 >= VAR_24 && VAR_28 < VAR_23) {
  VAR_32 = VAR_22[VAR_28 - VAR_24];
 } else if (VAR_28 >= VAR_27 && VAR_28 < VAR_26) {
  VAR_32 = VAR_25[VAR_28 - VAR_27];
 } else if (VAR_28 >= 0xe000 && VAR_28 < (0xe000 + 20*94)) {
  VAR_32 = VAR_28 - 0xe000;
  VAR_30 = VAR_32/94 + 0x7f;
  VAR_31 = VAR_32%94 + 0x21;
  VAR_32 = (VAR_30 << 8) | VAR_31;
  VAR_33 = 1;
 }
 if (VAR_32 <= 0) {
  VAR_30 = VAR_28 & ~VAR_2;
  if (VAR_30 == VAR_3) {
   VAR_32 = VAR_28 & VAR_2;
   VAR_33 = 1;
  } else if (VAR_30 == VAR_0) {
   VAR_32 = VAR_28 & VAR_2;
  } else if (VAR_30 == VAR_1) {
   VAR_32 = VAR_28 & VAR_2;
   VAR_32 |= 0x8080;
  } else if (VAR_28 == 0xa5) {
   VAR_32 = 0x216f;
  } else if (VAR_28 == 0x203e) {
   VAR_32 = 0x2131;
  } else if (VAR_28 == 0xff3c) {
   VAR_32 = 0x2140;
  } else if (VAR_28 == 0xff5e) {
   VAR_32 = 0x2141;
  } else if (VAR_28 == 0x2225) {
   VAR_32 = 0x2142;
  } else if (VAR_28 == 0xff0d) {
   VAR_32 = 0x215d;
  } else if (VAR_28 == 0xffe0) {
   VAR_32 = 0x2171;
  } else if (VAR_28 == 0xffe1) {
   VAR_32 = 0x2172;
  } else if (VAR_28 == 0xffe2) {
   VAR_32 = 0x224c;
  }
 }

 if ((VAR_32 <= 0) || (VAR_32 >= 0x8080 && VAR_33 == 0)) {
  VAR_32 = -1;
  VAR_30 = 0;
  VAR_31 = VAR_5 - VAR_6;
  while (VAR_30 < VAR_31) {
   if (VAR_28 == VAR_4[VAR_30]) {
    VAR_32 = ((VAR_30/94 + 0x2d) << 8) + (VAR_30%94 + 0x21);
    break;
   }
   VAR_30++;
  }
  if (VAR_32 <= 0) {
   VAR_30 = 0;
   VAR_31 = VAR_8 - VAR_9;
   while (VAR_30 < VAR_31) {
    if (VAR_28 == VAR_7[VAR_30]) {
     VAR_32 = ((VAR_30/94 + 0x93) << 8) + (VAR_30%94 + 0x21);
     break;
    }
    VAR_30++;
   }
  }

  if (VAR_32 <= 0) {
   VAR_30 = 0;
   VAR_31 = VAR_11 - VAR_12;
   while (VAR_30 < VAR_31) {
    if (VAR_28 == VAR_10[VAR_30]) {
     VAR_32 = ((VAR_30/94 + 0x93) << 8) + (VAR_30%94 + 0x21);
     break;
    }
    VAR_30++;
   }
  }
  if (VAR_28 == 0) {
   VAR_32 = 0;
  } else if (VAR_32 <= 0) {
   VAR_32 = -1;
  }
 }

  if ((VAR_29->to->no_encoding == VAR_13 &&
   FUNC_3(VAR_28, &VAR_32, VAR_29) > 0) ||
  (VAR_29->to->no_encoding == VAR_14 &&
   FUNC_4(VAR_28, &VAR_32, VAR_29) > 0) ||
  (VAR_29->to->no_encoding == VAR_15 &&
   FUNC_5(VAR_28, &VAR_32, VAR_29) > 0 )) {
  FUNC_1(VAR_30,VAR_31,VAR_32,VAR_33);
  }

 if (VAR_29->status == 1 && VAR_29->cache > 0) {
  return VAR_28;
 }

 if (VAR_32 >= 0) {
  if (VAR_32 < 0x100) {
   FUNC_0((*VAR_29->output_function)(VAR_32, VAR_29->data));
  } else {
   VAR_30 = (VAR_32 >> 8) & 0xff;
   VAR_31 = VAR_32 & 0xff;
   FUNC_2(VAR_30, VAR_31, VAR_32, VAR_33);
   FUNC_0((*VAR_29->output_function)(VAR_32, VAR_29->data));
   FUNC_0((*VAR_29->output_function)(VAR_33, VAR_29->data));
  }
 } else {
  FUNC_0(FUNC_6(VAR_28, VAR_29));
 }

 return VAR_28;
}
