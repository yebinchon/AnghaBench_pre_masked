
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
 int** VAR_4 ;
 int** VAR_5 ;
 int** VAR_6 ;
 int** VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
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
 int VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;

 switch (VAR_12->status) {
 case 0:
  if (VAR_11 >= 0 && VAR_11 < 0x80 && VAR_11 != 0x5c) {
   FUNC_0((*VAR_12->output_function)(VAR_11, VAR_12->data));
  } else if (VAR_11 > 0xa0 && VAR_11 < 0xe0) {
   FUNC_0((*VAR_12->output_function)(0xfec0 + VAR_11, VAR_12->data));
  } else if (VAR_11 > 0x80 && VAR_11 < 0xfd && VAR_11 != 0xa0) {
   VAR_12->status = 1;
   VAR_12->cache = VAR_11;
  } else if (VAR_11 == 0x5c) {
   FUNC_0((*VAR_12->output_function)(0x00a5, VAR_12->data));
  } else if (VAR_11 == 0x80) {
   FUNC_0((*VAR_12->output_function)(0x005c, VAR_12->data));
  } else if (VAR_11 == 0xa0) {
   FUNC_0((*VAR_12->output_function)(0x00a0, VAR_12->data));
  } else if (VAR_11 == 0xfd) {
   FUNC_0((*VAR_12->output_function)(0x00a9, VAR_12->data));
  } else if (VAR_11 == 0xfe) {
   FUNC_0((*VAR_12->output_function)(0x2122, VAR_12->data));
  } else if (VAR_11 == 0xff) {
   FUNC_0((*VAR_12->output_function)(0x2026, VAR_12->data));
   FUNC_0((*VAR_12->output_function)(0xf87f, VAR_12->data));
  } else {
   VAR_20 = VAR_11 & VAR_0;
   VAR_20 |= VAR_1;
   FUNC_0((*VAR_12->output_function)(VAR_20, VAR_12->data));
  }
  break;

 case 1:
  VAR_12->status = 0;
  VAR_16 = VAR_12->cache;
  if (VAR_11 >= 0x40 && VAR_11 <= 0xfc && VAR_11 != 0x7f) {
   VAR_20 = 0;
   FUNC_1(VAR_16, VAR_11, VAR_18, VAR_19);
   VAR_17 = (VAR_18 - 0x21)*94 + VAR_19 - 0x21;
   if (VAR_17 <= 0x89) {
    if (VAR_17 == 0x1c) {
     VAR_20 = 0x2014;
    } else if (VAR_17 == 0x1f) {
     VAR_20 = 0xff3c;
    } else if (VAR_17 == 0x20) {
     VAR_20 = 0x301c;
    } else if (VAR_17 == 0x21) {
     VAR_20 = 0x2016;
    } else if (VAR_17 == 0x3c) {
     VAR_20 = 0x2212;
    } else if (VAR_17 == 0x50) {
     VAR_20 = 0x00a2;
    } else if (VAR_17 == 0x51) {
     VAR_20 = 0x00a3;
    } else if (VAR_17 == 0x89) {
     VAR_20 = 0x00ac;
    }
   }


   if (VAR_20 == 0) {
    for (VAR_13=0; VAR_13<7; VAR_13++) {
     if (VAR_17 >= VAR_6[VAR_13][0] && VAR_17 <= VAR_6[VAR_13][1]) {
      VAR_20 = VAR_17 - VAR_6[VAR_13][0] + VAR_6[VAR_13][2];
      break;
     }
    }
   }

   if (VAR_20 == 0) {

    for (VAR_13=0; VAR_13<VAR_8; VAR_13++) {
     if (VAR_17 == VAR_7[VAR_13][0]) {
      if (VAR_7[VAR_13][1] == 0xf860) {
       VAR_15 = 4;
      } else if (VAR_7[VAR_13][1] == 0xf861) {
       VAR_15 = 5;
      } else {
       VAR_15 = 6;
      }
      for (VAR_14=1; VAR_14<VAR_15-1; VAR_14++) {
       FUNC_0((*VAR_12->output_function)(VAR_7[VAR_13][VAR_14], VAR_12->data));
      }
      VAR_20 = VAR_7[VAR_13][VAR_15-1];
      break;
     }
    }
   }

   if (VAR_20 == 0) {
    for (VAR_13=0; VAR_13<8; VAR_13++) {
     if (VAR_17 >= VAR_5[VAR_13][0] && VAR_17 <= VAR_5[VAR_13][1]) {
      VAR_20 = VAR_4[VAR_13][VAR_17 - VAR_5[VAR_13][0]];
      VAR_19 = 0;
      if (VAR_17 >= 0x043e && VAR_17 <= 0x0441) {
       VAR_19 = 0xf87a;
      } else if (VAR_17 == 0x03b1 || VAR_17 == 0x03b7) {
       VAR_19 = 0xf87f;
      } else if (VAR_17 == 0x04b8 || VAR_17 == 0x04b9 || VAR_17 == 0x04c4) {
       VAR_19 = 0x20dd;
      } else if (VAR_17 == 0x1ed9 || VAR_17 == 0x1eda || VAR_17 == 0x1ee8 || VAR_17 == 0x1ef3 ||
           (VAR_17 >= 0x1ef5 && VAR_17 <= 0x1efb) || VAR_17 == 0x1f05 || VAR_17 == 0x1f06 ||
           VAR_17 == 0x1f18 || (VAR_17 >= 0x1ff2 && VAR_17 <= 0x20a5)) {
       VAR_19 = 0xf87e;
      }
      if (VAR_19 > 0) {
       FUNC_0((*VAR_12->output_function)(VAR_20, VAR_12->data));
       VAR_20 = VAR_19;
      }
      break;
     }
    }
   }

   if (VAR_20 == 0 && VAR_17 >= 0 && VAR_17 < VAR_10) {
    VAR_20 = VAR_9[VAR_17];
   }

   if (VAR_20 <= 0) {
    VAR_20 = (VAR_18 << 8) | VAR_19;
    VAR_20 &= VAR_2;
    VAR_20 |= VAR_3;
   }
   FUNC_0((*VAR_12->output_function)(VAR_20, VAR_12->data));
  } else if ((VAR_11 >= 0 && VAR_11 < 0x21) || VAR_11 == 0x7f) {
   FUNC_0((*VAR_12->output_function)(VAR_11, VAR_12->data));
  } else {
   VAR_20 = (VAR_16 << 8) | VAR_11;
   VAR_20 &= VAR_0;
   VAR_20 |= VAR_1;
   FUNC_0((*VAR_12->output_function)(VAR_20, VAR_12->data));
  }
  break;

 default:
  VAR_12->status = 0;
  break;
 }

 return VAR_11;
}
