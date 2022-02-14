
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; int cache; int data; int (* output_function ) (int,int ) ;TYPE_1__* from; } ;
typedef TYPE_2__ mbfl_convert_filter ;
struct TYPE_4__ {int no_encoding; } ;


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
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int,int*) ;
 int FUNC_4 (int,int*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
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

int
FUNC_20(int VAR_18, mbfl_convert_filter *VAR_19)
{
 int VAR_20, VAR_21, VAR_22 = 0, VAR_23 = 0, VAR_24;
 int VAR_25 = 0;

retry:
 switch (VAR_19->status) {
 case 0:
  if (VAR_18 >= 0 && VAR_18 < 0x80) {
   if (VAR_19->from->no_encoding == VAR_17 && VAR_18 == 0x1b) {
    VAR_19->cache = VAR_18;
    VAR_19->status = 2;
   } else {
    FUNC_0((*VAR_19->output_function)(VAR_18, VAR_19->data));
   }
  } else if (VAR_18 > 0xa0 && VAR_18 < 0xe0) {
   FUNC_0((*VAR_19->output_function)(0xfec0 + VAR_18, VAR_19->data));
  } else if (VAR_18 > 0x80 && VAR_18 < 0xfd && VAR_18 != 0xa0) {
   VAR_19->status = 1;
   VAR_19->cache = VAR_18;
  } else {
   VAR_24 = VAR_18 & VAR_0;
   VAR_24 |= VAR_1;
   FUNC_0((*VAR_19->output_function)(VAR_24, VAR_19->data));
  }
  break;

 case 1:
  VAR_19->status = 0;
  VAR_20 = VAR_19->cache;
  if (VAR_18 >= 0x40 && VAR_18 <= 0xfc && VAR_18 != 0x7f) {
   VAR_24 = 0;
   FUNC_1(VAR_20, VAR_18, VAR_22, VAR_23);
   VAR_21 = (VAR_22 - 0x21)*94 + VAR_23 - 0x21;
   if (VAR_21 <= 137) {
    if (VAR_21 == 31) {
     VAR_24 = 0xff3c;
    } else if (VAR_21 == 32) {
     VAR_24 = 0xff5e;
    } else if (VAR_21 == 33) {
     VAR_24 = 0x2225;
    } else if (VAR_21 == 60) {
     VAR_24 = 0xff0d;
    } else if (VAR_21 == 80) {
     VAR_24 = 0xffe0;
    } else if (VAR_21 == 81) {
     VAR_24 = 0xffe1;
    } else if (VAR_21 == 137) {
     VAR_24 = 0xffe2;
    }
   }
   if (VAR_24 == 0) {
    if (VAR_21 >= VAR_6 && VAR_21 < VAR_5) {
     VAR_24 = VAR_4[VAR_21 - VAR_6];
    } else if (VAR_21 >= 0 && VAR_21 < VAR_14) {
     VAR_24 = VAR_13[VAR_21];
    } else if (VAR_21 >= VAR_9 && VAR_21 < VAR_8) {
     VAR_24 = VAR_7[VAR_21 - VAR_9];
    } else if (VAR_21 >= VAR_12 && VAR_21 < VAR_11) {
     VAR_24 = VAR_10[VAR_21 - VAR_12];
    } else if (VAR_21 >= (94*94) && VAR_21 < (114*94)) {
     VAR_24 = VAR_21 - (94*94) + 0xe000;
    }

     if (VAR_21 >= (94*94) && VAR_21 < 119*94) {
     if (VAR_19->from->no_encoding == VAR_15) {
      VAR_24 = FUNC_2(VAR_21, &VAR_25);
     } else if (VAR_19->from->no_encoding == VAR_16) {
      VAR_24 = FUNC_3(VAR_21, &VAR_25);
     } else if (VAR_19->from->no_encoding == VAR_17) {
      VAR_24 = FUNC_4(VAR_21, &VAR_25);
     }

     if (VAR_24 > 0 && VAR_25 > 0) {
      FUNC_0((*VAR_19->output_function)(VAR_25, VAR_19->data));
     }
    }
   }
   if (VAR_24 <= 0) {
    VAR_24 = (VAR_22 << 8) | VAR_23;
    VAR_24 &= VAR_2;
    VAR_24 |= VAR_3;
   }
   FUNC_0((*VAR_19->output_function)(VAR_24, VAR_19->data));
  } else if ((VAR_18 >= 0 && VAR_18 < 0x21) || VAR_18 == 0x7f) {
   FUNC_0((*VAR_19->output_function)(VAR_18, VAR_19->data));
  } else {
   VAR_24 = (VAR_20 << 8) | VAR_18;
   VAR_24 &= VAR_0;
   VAR_24 |= VAR_1;
   FUNC_0((*VAR_19->output_function)(VAR_24, VAR_19->data));
  }
  break;

 case 2:
  if (VAR_19->from->no_encoding == VAR_17 &&
   VAR_18 == 0x24) {
    VAR_19->cache = VAR_18;
    VAR_19->status++;
  } else {
   VAR_19->cache = 0;
   VAR_19->status = 0;
   FUNC_0((*VAR_19->output_function)(0x1b, VAR_19->data));
   goto retry;
  }
  break;


 case 3:
  if (VAR_19->from->no_encoding == VAR_17 &&
   ((VAR_18 >= 0x45 && VAR_18 <= 0x47) || (VAR_18 >= 0x4f && VAR_18 <= 0x51))) {
    VAR_19->cache = VAR_18;
    VAR_19->status++;
  } else {
   VAR_19->cache = 0;
   VAR_19->status = 0;
   FUNC_0((*VAR_19->output_function)(0x1b, VAR_19->data));
   FUNC_0((*VAR_19->output_function)(0x24, VAR_19->data));
   goto retry;
  }
  break;


 case 4:
  VAR_24 = 0;
  if (VAR_19->from->no_encoding == VAR_17) {
   VAR_20 = VAR_19->cache;

   if (VAR_18 == 0x0f) {
    VAR_24 = VAR_18;
    VAR_19->cache = 0;
    VAR_19->status = 0;
   } else {
    if (VAR_20 == 0x47 && VAR_18 >= 0x21 && VAR_18 <= 0x7a) {
     VAR_22 = 0x91; VAR_23 = VAR_18;
    } else if (VAR_20 == 0x45 && VAR_18 >= 0x21 && VAR_18 <= 0x7a) {
     VAR_22 = 0x8d; VAR_23 = VAR_18;
    } else if (VAR_20 == 0x46 && VAR_18 >= 0x21 && VAR_18 <= 0x7a) {
     VAR_22 = 0x8e; VAR_23 = VAR_18;
    } else if (VAR_20 == 0x4f && VAR_18 >= 0x21 && VAR_18 <= 0x6d) {
     VAR_22 = 0x92; VAR_23 = VAR_18;
    } else if (VAR_20 == 0x50 && VAR_18 >= 0x21 && VAR_18 <= 0x6c) {
     VAR_22 = 0x95; VAR_23 = VAR_18;
    } else if (VAR_20 == 0x51 && VAR_18 >= 0x21 && VAR_18 <= 0x5e) {
     VAR_22 = 0x96; VAR_23 = VAR_18;
    }
    VAR_21 = (VAR_22 - 0x21)*94 + VAR_23 - 0x21;
    VAR_24 = FUNC_4(VAR_21, &VAR_25);
    if (VAR_24 > 0) {
     if (VAR_25 > 0) {
      FUNC_0((*VAR_19->output_function)(VAR_25, VAR_19->data));
     }
     FUNC_0((*VAR_19->output_function)(VAR_24, VAR_19->data));
    }
   }
  }

  if (VAR_24 <= 0) {
   VAR_20 = VAR_19->cache;
   VAR_19->cache = 0;
   VAR_19->status = 0;
   FUNC_0((*VAR_19->output_function)(0x1b, VAR_19->data));
   FUNC_0((*VAR_19->output_function)(0x24, VAR_19->data));
   FUNC_0((*VAR_19->output_function)(VAR_20 & 0xff, VAR_19->data));
   goto retry;
  }
  break;

 default:
  VAR_19->status = 0;
  break;
 }

 return VAR_18;
}
