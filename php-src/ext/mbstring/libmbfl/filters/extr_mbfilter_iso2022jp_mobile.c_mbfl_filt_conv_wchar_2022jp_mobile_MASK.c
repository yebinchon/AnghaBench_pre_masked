
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int status; scalar_t__ cache; int data; int (* output_function ) (int,int ) ;TYPE_1__* to; } ;
typedef TYPE_2__ mbfl_convert_filter ;
struct TYPE_6__ {scalar_t__ no_encoding; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int,int*,TYPE_2__*) ;
 int FUNC_3 (int,TYPE_2__*) ;
 scalar_t__ VAR_7 ;
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
 int* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

int
FUNC_17(int VAR_20, mbfl_convert_filter *VAR_21)
{
 int VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_24 = 0;
 VAR_25 = 0;
 if (VAR_20 >= VAR_10 && VAR_20 < VAR_9) {
  VAR_24 = VAR_8[VAR_20 - VAR_10];
 } else if (VAR_20 >= VAR_13 && VAR_20 < VAR_12) {
  VAR_24 = VAR_11[VAR_20 - VAR_13];
 } else if (VAR_20 >= VAR_16 && VAR_20 < VAR_15) {
  VAR_24 = VAR_14[VAR_20 - VAR_16];
 } else if (VAR_20 >= VAR_19 && VAR_20 < VAR_18) {
  VAR_24 = VAR_17[VAR_20 - VAR_19];
 } else if (VAR_20 >= 0xe000 && VAR_20 < (0xe000 + 20*94)) {
  VAR_24 = VAR_20 - 0xe000;
  VAR_22 = VAR_24/94 + 0x7f;
  VAR_23 = VAR_24%94 + 0x21;
  VAR_24 = (VAR_22 << 8) | VAR_23;
 }
 if (VAR_24 <= 0) {
  VAR_22 = VAR_20 & ~VAR_2;
  if (VAR_22 == VAR_3) {
   VAR_24 = VAR_20 & VAR_2;
   VAR_25 = 1;
  } else if (VAR_22 == VAR_0) {
   VAR_24 = VAR_20 & VAR_2;
  } else if (VAR_22 == VAR_1) {
   VAR_24 = VAR_20 & VAR_2;
   VAR_24 |= 0x8080;
  } else if (VAR_20 == 0xa5) {
   VAR_24 = 0x216f;
  } else if (VAR_20 == 0x203e) {
   VAR_24 = 0x2131;
  } else if (VAR_20 == 0xff3c) {
   VAR_24 = 0x2140;
  } else if (VAR_20 == 0xff5e) {
   VAR_24 = 0x2141;
  } else if (VAR_20 == 0x2225) {
   VAR_24 = 0x2142;
  } else if (VAR_20 == 0xff0d) {
   VAR_24 = 0x215d;
  } else if (VAR_20 == 0xffe0) {
   VAR_24 = 0x2171;
  } else if (VAR_20 == 0xffe1) {
   VAR_24 = 0x2172;
  } else if (VAR_20 == 0xffe2) {
   VAR_24 = 0x224c;
  }
 }

 if ((VAR_24 <= 0) || (VAR_24 >= 0xa1a1 && VAR_25 == 0)) {
  VAR_24 = -1;
  VAR_22 = 0;
  VAR_23 = VAR_5 - VAR_6;
  while (VAR_22 < VAR_23) {
   if (VAR_20 == VAR_4[VAR_22]) {
    VAR_24 = ((VAR_22/94 + 0x2d) << 8) + (VAR_22%94 + 0x21);
    break;
   }
   VAR_22++;
  }
  if (VAR_20 == 0) {
   VAR_24 = 0;
  } else if (VAR_24 <= 0) {
   VAR_24 = -1;
  }
 }

  if (VAR_21->to->no_encoding == VAR_7 &&
  FUNC_2(VAR_20, &VAR_24, VAR_21) > 0) {
  FUNC_1(VAR_22,VAR_23,VAR_24,VAR_25);
  VAR_24 -= 0x1600;
  }

 if (VAR_21->status == 1 && VAR_21->cache > 0) {
  return VAR_20;
 }

 if (VAR_24 >= 0) {
  if (VAR_24 < 0x80) {
   if ((VAR_21->status & 0xff00) != 0) {
    FUNC_0((*VAR_21->output_function)(0x1b, VAR_21->data));
    FUNC_0((*VAR_21->output_function)(0x28, VAR_21->data));
    FUNC_0((*VAR_21->output_function)(0x42, VAR_21->data));
   }
   FUNC_0((*VAR_21->output_function)(VAR_24, VAR_21->data));
   VAR_21->status = 0;
  } else if (VAR_24 > 0xa0 && VAR_24 < 0xe0) {
   if ((VAR_21->status & 0xff00) != 0x100) {
    FUNC_0((*VAR_21->output_function)(0x1b, VAR_21->data));
    FUNC_0((*VAR_21->output_function)(0x28, VAR_21->data));
    FUNC_0((*VAR_21->output_function)(0x49, VAR_21->data));
   }
   VAR_21->status = 0x100;
   FUNC_0((*VAR_21->output_function)(VAR_24 & 0x7f, VAR_21->data));
  } else if (VAR_24 < 0x7e7f) {
   if ((VAR_21->status & 0xff00) != 0x200) {
    FUNC_0((*VAR_21->output_function)(0x1b, VAR_21->data));
    FUNC_0((*VAR_21->output_function)(0x24, VAR_21->data));
    FUNC_0((*VAR_21->output_function)(0x42, VAR_21->data));
   }
   VAR_21->status = 0x200;
   FUNC_0((*VAR_21->output_function)((VAR_24 >> 8) & 0xff, VAR_21->data));
   FUNC_0((*VAR_21->output_function)(VAR_24 & 0x7f, VAR_21->data));
  }
 } else {
  FUNC_0(FUNC_3(VAR_20, VAR_21));
 }

 return VAR_20;
}
