
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mode; } ;
typedef TYPE_1__ mbfl_filt_tl_jisx0201_jisx0208_param ;
struct TYPE_5__ {int status; int cache; int (* output_function ) (int,int ) ;int data; scalar_t__ opaque; } ;
typedef TYPE_2__ mbfl_convert_filter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int** VAR_17 ;

int
FUNC_5(int VAR_18, mbfl_convert_filter *VAR_19)
{
 int VAR_20, VAR_21;
 int VAR_22 = ((mbfl_filt_tl_jisx0201_jisx0208_param *)VAR_19->opaque)->mode;

 VAR_20 = VAR_18;

 if ((VAR_22 & VAR_0)
   && VAR_18 >= 0x21 && VAR_18 <= 0x7d && VAR_18 != 0x22 && VAR_18 != 0x27 && VAR_18 != 0x5c) {

  VAR_20 = VAR_18 + 0xfee0;
 } else if ((VAR_22 & VAR_1) &&
   ((VAR_18 >= 0x41 && VAR_18 <= 0x5a) || (VAR_18 >= 0x61 && VAR_18 <= 0x7a))) {

  VAR_20 = VAR_18 + 0xfee0;
 } else if ((VAR_22 & VAR_7) &&
   VAR_18 >= 0x30 && VAR_18 <= 0x39) {

  VAR_20 = VAR_18 + 0xfee0;
 } else if ((VAR_22 & VAR_8) && VAR_18 == 0x20) {

  VAR_20 = 0x3000;
 }

 if (VAR_22 &
   (VAR_6 | VAR_5)) {

  if ((VAR_22 & VAR_6) &&
    (VAR_22 & VAR_4)) {

   if (VAR_18 >= 0xff61 && VAR_18 <= 0xff9f) {
    if (VAR_19->status) {
     VAR_21 = (VAR_19->cache - 0xff60) & 0x3f;
     if (VAR_18 == 0xff9e && ((VAR_21 >= 22 && VAR_21 <= 36) || (VAR_21 >= 42 && VAR_21 <= 46))) {
      VAR_19->status = 0;
      VAR_20 = 0x3001 + VAR_16[VAR_21];
     } else if (VAR_18 == 0xff9e && VAR_21 == 19) {
      VAR_19->status = 0;
      VAR_20 = 0x30f4;
     } else if (VAR_18 == 0xff9f && (VAR_21 >= 42 && VAR_21 <= 46)) {
      VAR_19->status = 0;
      VAR_20 = 0x3002 + VAR_16[VAR_21];
     } else {
      VAR_19->status = 1;
      VAR_19->cache = VAR_18;
      VAR_20 = 0x3000 + VAR_16[VAR_21];
     }
    } else {
     VAR_19->status = 1;
     VAR_19->cache = VAR_18;
     return VAR_18;
    }
   } else {
    if (VAR_19->status) {
     VAR_21 = (VAR_19->cache - 0xff60) & 0x3f;
     VAR_19->status = 0;
     (*VAR_19->output_function)(0x3000 + VAR_16[VAR_21], VAR_19->data);
    }
   }
  } else if ((VAR_22 & VAR_5) &&
    (VAR_22 & VAR_4)) {

   if (VAR_18 >= 0xff61 && VAR_18 <= 0xff9f) {
    if (VAR_19->status) {
     VAR_21 = (VAR_19->cache - 0xff60) & 0x3f;
     if (VAR_18 == 0xff9e && ((VAR_21 >= 22 && VAR_21 <= 36) || (VAR_21 >= 42 && VAR_21 <= 46))) {
      VAR_19->status = 0;
      VAR_20 = 0x3001 + VAR_15[VAR_21];
     } else if (VAR_18 == 0xff9f && (VAR_21 >= 42 && VAR_21 <= 46)) {
      VAR_19->status = 0;
      VAR_20 = 0x3002 + VAR_15[VAR_21];
     } else {
      VAR_19->status = 1;
      VAR_19->cache = VAR_18;
      VAR_20 = 0x3000 + VAR_15[VAR_21];
     }
    } else {
     VAR_19->status = 1;
     VAR_19->cache = VAR_18;
     return VAR_18;
    }
   } else {
    if (VAR_19->status) {
     VAR_21 = (VAR_19->cache - 0xff60) & 0x3f;
     VAR_19->status = 0;
     (*VAR_19->output_function)(0x3000 + VAR_15[VAR_21], VAR_19->data);
    }
   }
  } else if ((VAR_22 & VAR_6) &&
    VAR_18 >= 0xff61 && VAR_18 <= 0xff9f) {

   VAR_20 = 0x3000 + VAR_16[VAR_18 - 0xff60];
  } else if ((VAR_22 & VAR_5)
    && VAR_18 >= 0xff61 && VAR_18 <= 0xff9f) {

   VAR_20 = 0x3000 + VAR_15[VAR_18 - 0xff60];
  }
 }

 if (VAR_22 & VAR_2) {

  if (VAR_18 == 0x5c) {
   VAR_20 = 0xffe5;
  } else if (VAR_18 == 0xa5) {
   VAR_20 = 0xffe5;
  } else if (VAR_18 == 0x7e) {
   VAR_20 = 0xffe3;
  } else if (VAR_18 == 0x203e) {
   VAR_20 = 0xffe3;
  } else if (VAR_18 == 0x27) {
   VAR_20 = 0x2019;
  } else if (VAR_18 == 0x22) {
   VAR_20 = 0x201d;
  }
 } else if (VAR_22 & VAR_3) {

  if (VAR_18 == 0x5c) {
   VAR_20 = 0xff3c;
  } else if (VAR_18 == 0x7e) {
   VAR_20 = 0xff5e;
  } else if (VAR_18 == 0x27) {
   VAR_20 = 0xff07;
  } else if (VAR_18 == 0x22) {
   VAR_20 = 0xff02;
  }
 }

 if (VAR_22 & 0xf0) {
  if ((VAR_22 & 0x10) && VAR_18 >= 0xff01 && VAR_18 <= 0xff5d && VAR_18 != 0xff02 && VAR_18 != 0xff07 && VAR_18!= 0xff3c) {
   VAR_20 = VAR_18 - 0xfee0;
  } else if ((VAR_22 & 0x20) && ((VAR_18 >= 0xff21 && VAR_18 <= 0xff3a) || (VAR_18 >= 0xff41 && VAR_18 <= 0xff5a))) {
   VAR_20 = VAR_18 - 0xfee0;
  } else if ((VAR_22 & 0x40) && (VAR_18 >= 0xff10 && VAR_18 <= 0xff19)) {
   VAR_20 = VAR_18 - 0xfee0;
  } else if ((VAR_22 & 0x80) && (VAR_18 == 0x3000)) {
   VAR_20 = 0x20;
  } else if ((VAR_22 & 0x10) && (VAR_18 == 0x2212)) {
   VAR_20 = 0x2d;
  }
 }

 if (VAR_22 &
   (VAR_14 | VAR_12)) {

  if ((VAR_22 & VAR_14) &&
    VAR_18 >= 0x30a1 && VAR_18 <= 0x30f4) {

   VAR_21 = VAR_18 - 0x30a1;
   if (VAR_17[VAR_21][1] != 0) {
    (VAR_19->output_function)(0xff00 + VAR_17[VAR_21][0], VAR_19->data);
    VAR_20 = 0xff00 + VAR_17[VAR_21][1];
   } else {
    VAR_20 = 0xff00 + VAR_17[VAR_21][0];
   }
  } else if ((VAR_22 & VAR_12) &&
    VAR_18 >= 0x3041 && VAR_18 <= 0x3093) {

   VAR_21 = VAR_18 - 0x3041;
   if (VAR_17[VAR_21][1] != 0) {
    (VAR_19->output_function)(0xff00 + VAR_17[VAR_21][0], VAR_19->data);
    VAR_20 = 0xff00 + VAR_17[VAR_21][1];
   } else {
    VAR_20 = 0xff00 + VAR_17[VAR_21][0];
   }
  } else if (VAR_18 == 0x3001) {
   VAR_20 = 0xff64;
  } else if (VAR_18 == 0x3002) {
   VAR_20 = 0xff61;
  } else if (VAR_18 == 0x300c) {
   VAR_20 = 0xff62;
  } else if (VAR_18 == 0x300d) {
   VAR_20 = 0xff63;
  } else if (VAR_18 == 0x309b) {
   VAR_20 = 0xff9e;
  } else if (VAR_18 == 0x309c) {
   VAR_20 = 0xff9f;
  } else if (VAR_18 == 0x30fc) {
   VAR_20 = 0xff70;
  } else if (VAR_18 == 0x30fb) {
   VAR_20 = 0xff65;
  }
 } else if (VAR_22 & (VAR_11
   | VAR_13)) {
  if ((VAR_22 & VAR_11) &&
    ((VAR_18 >= 0x3041 && VAR_18 <= 0x3093) || VAR_18 == 0x309d || VAR_18 == 0x309e)) {

   VAR_20 = VAR_18 + 0x60;
  } else if ((VAR_22 & VAR_13) &&
    ((VAR_18 >= 0x30a1 && VAR_18 <= 0x30f3) || VAR_18 == 0x30fd || VAR_18 == 0x30fe)) {

   VAR_20 = VAR_18 - 0x60;
  }
 }

 if (VAR_22 & VAR_9) {
  if (VAR_18 == 0xffe5) {
   VAR_20 = 0x5c;
  } else if (VAR_18 == 0xff3c) {
   VAR_20 = 0x5c;
  } else if (VAR_18 == 0xffe3) {
   VAR_20 = 0x7e;
  } else if (VAR_18 == 0x203e) {
   VAR_20 = 0x7e;
  } else if (VAR_18 == 0x2018) {
   VAR_20 = 0x27;
  } else if (VAR_18 == 0x2019) {
   VAR_20 = 0x27;
  } else if (VAR_18 == 0x201c) {
   VAR_20 = 0x22;
  } else if (VAR_18 == 0x201d) {
   VAR_20 = 0x22;
  }
 }

 if (VAR_22 & VAR_10) {
  if (VAR_18 == 0xff3c) {
   VAR_20 = 0x5c;
  } else if (VAR_18 == 0xff5e) {
   VAR_20 = 0x7e;
  } else if (VAR_18 == 0xff07) {
   VAR_20 = 0x27;
  } else if (VAR_18 == 0xff02) {
   VAR_20 = 0x22;
  }
 }

 return (*VAR_19->output_function)(VAR_20, VAR_19->data);
}
