
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int status; int cache; int data; int (* output_function ) (int,int ) ;TYPE_1__* to; } ;
typedef TYPE_2__ mbfl_convert_filter ;
struct TYPE_5__ {scalar_t__ no_encoding; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int,int,int) ;
 int* VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int,int*,int ) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int,TYPE_2__*) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
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
 int FUNC_20 (int,int ) ;
 int FUNC_21 (int,int ) ;
 int FUNC_22 (int,int ) ;
 int FUNC_23 (int,int ) ;
 int FUNC_24 (int,int ) ;
 int FUNC_25 (int,int ) ;
 int FUNC_26 (int,int ) ;
 int FUNC_27 (int,int ) ;
 int FUNC_28 (int,int ) ;
 int FUNC_29 (int,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int* VAR_18 ;
 int* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int* VAR_23 ;
 int** VAR_24 ;
 int VAR_25 ;
 int** VAR_26 ;

int
FUNC_30(int VAR_27, mbfl_convert_filter *VAR_28) {
 int VAR_29;
 int VAR_30, VAR_31, VAR_32 = 0, VAR_33;

retry:


 if ((VAR_28->status & 0xf)== 0 && (
   VAR_27 == 0x00E6 ||
   (VAR_27 >= 0x0254 && VAR_27 <= 0x02E9) ||
   (VAR_27 >= 0x304B && VAR_27 <= 0x3053) ||
   (VAR_27 >= 0x30AB && VAR_27 <= 0x30C8) ||
   VAR_27 == 0x31F7)) {
  for (VAR_29=0;VAR_29<VAR_7;VAR_29++) {
   if (VAR_27 == VAR_6[2*VAR_29]) {
    VAR_28->status++;
    VAR_28->cache = VAR_29;
    return VAR_27;
   }
  }
 }


 if ((VAR_28->status & 0xf) == 1 &&
  VAR_28->cache >= 0 && VAR_28->cache <= VAR_7) {
  VAR_29 = VAR_28->cache;
  VAR_28->status &= ~0xf;
  VAR_28->cache = 0;

  VAR_30 = VAR_6[2*VAR_29];
  if ((VAR_30 == 0x0254 || VAR_30 == 0x028C || VAR_30 == 0x0259 || VAR_30 == 0x025A)
   && VAR_27 == 0x0301) {
   VAR_29++;
  }
  if (VAR_27 == VAR_6[2*VAR_29+1]) {
   VAR_32 = VAR_5[VAR_29];
  } else {
   VAR_32 = VAR_4[VAR_29];

   if (VAR_28->to->no_encoding == VAR_15) {
    VAR_30 = (VAR_32 >> 8) & 0xff;
    VAR_31 = VAR_32 & 0xff;
    FUNC_1(VAR_30, VAR_31, VAR_32, VAR_33);
   } else if (VAR_28->to->no_encoding == VAR_14) {
    VAR_33 = (VAR_32 & 0xff) + 0x80;
    VAR_32 = ((VAR_32 >> 8) & 0xff) + 0x80;
   } else {
    if (VAR_28->status != 0x200) {
     FUNC_0((*VAR_28->output_function)(0x1b, VAR_28->data));
     FUNC_0((*VAR_28->output_function)(0x24, VAR_28->data));
     FUNC_0((*VAR_28->output_function)(0x28, VAR_28->data));
     FUNC_0((*VAR_28->output_function)(0x51, VAR_28->data));
    }
    VAR_28->status = 0x200;

    VAR_33 = VAR_32 & 0x7f;
    VAR_32 = (VAR_32 >> 8) & 0x7f;
   }

   FUNC_0((*VAR_28->output_function)(VAR_32, VAR_28->data));
   FUNC_0((*VAR_28->output_function)(VAR_33, VAR_28->data));
   goto retry;
  }
 }


 if (VAR_32 <= 0) {
  for (VAR_29=0; VAR_29 < VAR_25 ;VAR_29++) {
   if (VAR_27 >= VAR_26[VAR_29][0] && VAR_27 <= VAR_26[VAR_29][1]) {
    VAR_32 = VAR_24[VAR_29][VAR_27-VAR_26[VAR_29][0]];
    break;
   }
  }
 }


 if (VAR_32 <= 0 && VAR_27 >= VAR_17 && VAR_27 <= VAR_16) {
  VAR_29 = FUNC_2(VAR_27, VAR_19, VAR_20);
  if (VAR_29 >= 0) {
   VAR_32 = VAR_18[VAR_29] + VAR_27 - VAR_19[2*VAR_29];
  }
 }


 if (VAR_32 <= 0 && VAR_27 >= VAR_12 && VAR_27 <= VAR_11) {
  VAR_29 = FUNC_3(VAR_27 - 0x20000, VAR_8, VAR_10);
  if (VAR_29 >= 0) {
   VAR_32 = VAR_9[VAR_29];
  }
 }

 if (VAR_32 <= 0) {

  if (VAR_27 == 0xfe45) {
   VAR_32 = 0x233e;
  } else if (VAR_27 == 0xfe46) {
   VAR_32 = 0x233d;
  } else if (VAR_27 >= 0xf91d && VAR_27 <= 0xf9dc) {

   VAR_29 = FUNC_3(VAR_27, VAR_21, VAR_22);
   if (VAR_29 >= 0) {
    VAR_32 = VAR_23[VAR_29];
   }
  }
 }

 if (VAR_32 <= 0) {
  VAR_30 = VAR_27 & ~VAR_1;
  if (VAR_30 == VAR_0) {
   VAR_32 = VAR_27 & VAR_1;
  }
  if (VAR_27 == 0) {
   VAR_32 = 0;
  } else if (VAR_32 <= 0) {
   VAR_32 = -1;
  }
 } else if (VAR_32 >= 0x9980) {
  VAR_32 = -1;
 }

 if (VAR_32 >= 0) {
  if (VAR_32 < 0x80) {
   if (VAR_28->to->no_encoding == VAR_13 &&
    (VAR_28->status & 0xff00) != 0) {
    FUNC_0((*VAR_28->output_function)(0x1b, VAR_28->data));
    FUNC_0((*VAR_28->output_function)(0x28, VAR_28->data));
    FUNC_0((*VAR_28->output_function)(0x42, VAR_28->data));
   }
   VAR_28->status = 0;
   FUNC_0((*VAR_28->output_function)(VAR_32, VAR_28->data));
  } else if (VAR_32 < 0x100) {
   if (VAR_28->to->no_encoding == VAR_14) {
    FUNC_0((*VAR_28->output_function)(0x8e, VAR_28->data));
   }
   FUNC_0((*VAR_28->output_function)(VAR_32, VAR_28->data));
  } else if (VAR_32 < 0x7f00) {
   if (VAR_28->to->no_encoding == VAR_15) {
    VAR_30 = (VAR_32 >> 8) & 0xff;
    VAR_31 = VAR_32 & 0xff;
    FUNC_1(VAR_30, VAR_31, VAR_32, VAR_33);
   } else if (VAR_28->to->no_encoding == VAR_14) {
    VAR_33 = (VAR_32 & 0xff) + 0x80;
    VAR_32 = ((VAR_32 >> 8) & 0xff) + 0x80;
   } else {
    if ((VAR_28->status & 0xff00) != 0x200) {
     FUNC_0((*VAR_28->output_function)(0x1b, VAR_28->data));
     FUNC_0((*VAR_28->output_function)(0x24, VAR_28->data));
     FUNC_0((*VAR_28->output_function)(0x28, VAR_28->data));
     FUNC_0((*VAR_28->output_function)(0x51, VAR_28->data));
    }
    VAR_28->status = 0x200;
    VAR_33 = VAR_32 & 0xff;
    VAR_32 = (VAR_32 >> 8) & 0xff;
   }
   FUNC_0((*VAR_28->output_function)(VAR_32, VAR_28->data));
   FUNC_0((*VAR_28->output_function)(VAR_33, VAR_28->data));
  } else {
   if (VAR_28->to->no_encoding == VAR_15) {
    VAR_30 = (VAR_32 >> 8) & 0xff;
    VAR_31 = VAR_32 & 0xff;
    FUNC_1(VAR_30, VAR_31, VAR_32, VAR_33);
   } else {
    VAR_33 = VAR_32 & 0xff;
    VAR_29 = ((VAR_32 >> 8) & 0xff) - 0x7f;
    if (VAR_29 >= 0 && VAR_29 < VAR_3) {
     VAR_32 = VAR_2[VAR_29] - 1 + 0x21;
    }
    if (VAR_28->to->no_encoding == VAR_14) {
     VAR_33 |= 0x80;
     VAR_32 |= 0x80;
     FUNC_0((*VAR_28->output_function)(0x8f, VAR_28->data));
    } else {
     if ((VAR_28->status & 0xff00) != 0x200) {
      FUNC_0((*VAR_28->output_function)(0x1b, VAR_28->data));
      FUNC_0((*VAR_28->output_function)(0x24, VAR_28->data));
      FUNC_0((*VAR_28->output_function)(0x28, VAR_28->data));
      FUNC_0((*VAR_28->output_function)(0x50, VAR_28->data));
     }
     VAR_28->status = 0x200;
    }
   }

   FUNC_0((*VAR_28->output_function)(VAR_32, VAR_28->data));
   FUNC_0((*VAR_28->output_function)(VAR_33, VAR_28->data));
  }
 } else {
  FUNC_0(FUNC_4(VAR_27, VAR_28));
 }

 return VAR_27;
}
