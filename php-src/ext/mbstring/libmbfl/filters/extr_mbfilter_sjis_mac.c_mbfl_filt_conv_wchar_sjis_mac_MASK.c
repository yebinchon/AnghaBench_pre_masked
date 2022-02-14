
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; int cache; int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int,int,int) ;
 int** VAR_4 ;
 int FUNC_2 (int,TYPE_1__*) ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
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
 int** VAR_21 ;
 int** VAR_22 ;
 int VAR_23 ;
 int** VAR_24 ;
 int VAR_25 ;
 int** VAR_26 ;
 int VAR_27 ;

int
FUNC_15(int VAR_28, mbfl_convert_filter *VAR_29)
{
 int VAR_30;
 int VAR_31, VAR_32, VAR_33, VAR_34, VAR_35;

 VAR_33 = 0;
 VAR_34 = 0;






 switch (VAR_29->status) {

 case 1:
  VAR_31 = VAR_29->cache;
  VAR_29->cache = 0;
  VAR_29->status = 0;

  VAR_33 = 0;
  VAR_34 = 0;

  if (VAR_28 == 0xf87a) {
   for (VAR_30=0;VAR_30<4;VAR_30++) {
    if (VAR_31 == VAR_7[VAR_30+34+3+3]) {
     VAR_33 = VAR_6[VAR_30+34+3+3];
     break;
    }
   }
   if (VAR_33 <= 0) {
    VAR_34 = VAR_31;
   }
  } else if (VAR_28 == 0x20dd) {
   for (VAR_30=0;VAR_30<3;VAR_30++) {
    if (VAR_31 == VAR_7[VAR_30+34+3]) {
     VAR_33 = VAR_6[VAR_30+34+3];
     break;
    }
   }
   if (VAR_33 <= 0) {
    VAR_34 = VAR_31;
   }
  } else if (VAR_28 == 0xf87f) {
   for (VAR_30=0;VAR_30<3;VAR_30++) {
    if (VAR_31 == VAR_7[VAR_30+34]) {
     VAR_33 = VAR_6[VAR_30+34];
     break;
    }
   }
   if (VAR_33 <= 0) {
    VAR_34 = VAR_31; VAR_33 = -1;
   }
  } else if (VAR_28 == 0xf87e) {
   for (VAR_30=0;VAR_30<34;VAR_30++) {
    if (VAR_31 == VAR_7[VAR_30]) {
     VAR_33 = VAR_6[VAR_30];
     break;
    }
   }
   if (VAR_33 <= 0) {
    VAR_34 = VAR_31; VAR_33 = -1;
   }
  } else {
   VAR_34 = VAR_31;
   VAR_33 = VAR_28;
  }

  if (VAR_34 > 0) {
   for (VAR_30=0;VAR_30<VAR_8;VAR_30++) {
    if (VAR_31 == VAR_7[VAR_30]) {
     VAR_33 = VAR_5[VAR_30];
     break;
    }
   }
  }

  if (VAR_33 >= 0) {
   if (VAR_33 < 0x100) {
    FUNC_0((*VAR_29->output_function)(VAR_33, VAR_29->data));
   } else {
    FUNC_0((*VAR_29->output_function)((VAR_33 >> 8) & 0xff, VAR_29->data));
    FUNC_0((*VAR_29->output_function)(VAR_33 & 0xff, VAR_29->data));
   }
  } else {
   FUNC_0(FUNC_2(VAR_28, VAR_29));
  }

  if (VAR_34 <= 0 || VAR_33 == -1) {
   break;
  }

 case 0:

  if (VAR_28 >= VAR_11 && VAR_28 < VAR_10) {
   VAR_33 = VAR_9[VAR_28 - VAR_11];
   if (VAR_28 == 0x5c) {
    VAR_33 = 0x80;
   } else if (VAR_28 == 0xa9) {
    VAR_33 = 0xfd;
   }
  } else if (VAR_28 >= VAR_14 && VAR_28 < VAR_13) {
   VAR_33 = VAR_12[VAR_28 - VAR_14];
   if (VAR_28 == 0x2122) {
    VAR_33 = 0xfe;
   } else if (VAR_28 == 0x2014) {
    VAR_33 = 0x213d;
   } else if (VAR_28 == 0x2116) {
    VAR_33 = 0x2c1d;
   }
  } else if (VAR_28 >= VAR_17 && VAR_28 < VAR_16) {
   VAR_33 = VAR_15[VAR_28 - VAR_17];
  } else if (VAR_28 >= VAR_20 && VAR_28 < VAR_19) {
   VAR_33 = VAR_18[VAR_28 - VAR_20];
  }

  if (VAR_28 >= 0x2000) {
   for (VAR_30=0;VAR_30<VAR_8;VAR_30++) {
    if (VAR_28 == VAR_7[VAR_30]) {
     VAR_29->status = 1;
     VAR_29->cache = VAR_28;
     return VAR_28;
    }
   }

   if (VAR_28 == 0xf860 || VAR_28 == 0xf861 || VAR_28 == 0xf862) {
    VAR_29->status = 2;
    VAR_29->cache = VAR_28;
    return VAR_28;
   }
  }

  if (VAR_33 <= 0) {
   VAR_31 = VAR_28 & ~VAR_2;
   if (VAR_31 == VAR_3) {
    VAR_33 = VAR_28 & VAR_2;
    VAR_34 = 1;
   } else if (VAR_31 == VAR_0) {
    VAR_33 = VAR_28 & VAR_2;
   } else if (VAR_31 == VAR_1) {
    VAR_33 = VAR_28 & VAR_2;
    VAR_33 |= 0x8080;
   } else if (VAR_28 == 0xa0) {
    VAR_33 = 0x00a0;
   } else if (VAR_28 == 0xa5) {
    VAR_33 = 0x216f;
   } else if (VAR_28 == 0xff3c) {
    VAR_33 = 0x2140;
   }
  }

  if (VAR_33 <= 0) {
   for (VAR_30=0; VAR_30<VAR_25; VAR_30++) {
    if (VAR_28 >= VAR_24[VAR_30][0] && VAR_28 <= VAR_24[VAR_30][1]) {
     VAR_33 = VAR_28 - VAR_24[VAR_30][0] + VAR_24[VAR_30][2];
     break;
    }
   }

   if (VAR_33 <= 0) {
    for (VAR_30=0; VAR_30<VAR_23; VAR_30++) {
     if (VAR_28 >= VAR_22[VAR_30][0] && VAR_28 <= VAR_22[VAR_30][1]) {
      VAR_33 = VAR_21[VAR_30][VAR_28-VAR_22[VAR_30][0]];
      break;
     }
    }
   }

   if (VAR_33 <= 0) {
    for (VAR_30=0; VAR_30<VAR_27 ; VAR_30++) {
     if ( VAR_28 == VAR_26[VAR_30][0]) {
      VAR_33 = VAR_26[VAR_30][1] & 0xffff;
      break;
     }
    }
   }

   if (VAR_33 > 0) {
    VAR_31 = VAR_33/94+0x21;
    VAR_32 = VAR_33-94*(VAR_31-0x21)+0x21;
    VAR_33 = (VAR_31 << 8) | VAR_32;
    VAR_34 = 1;
   }
  }

  if ((VAR_33 <= 0) || (VAR_33 >= 0x8080 && VAR_34 == 0)) {
   VAR_33 = -1;
   VAR_31 = 0;

   if (VAR_28 == 0) {
    VAR_33 = 0;
   } else if (VAR_33 <= 0) {
    VAR_33 = -1;
   }
  }

  if (VAR_33 >= 0) {
   if (VAR_33 < 0x100) {
    FUNC_0((*VAR_29->output_function)(VAR_33, VAR_29->data));
   } else {
    VAR_31 = (VAR_33 >> 8) & 0xff;
    VAR_32 = VAR_33 & 0xff;
    FUNC_1(VAR_31, VAR_32, VAR_33, VAR_34);
    FUNC_0((*VAR_29->output_function)(VAR_33, VAR_29->data));
    FUNC_0((*VAR_29->output_function)(VAR_34, VAR_29->data));
   }
  } else {
   FUNC_0(FUNC_2(VAR_28, VAR_29));
  }
  break;


 case 2:
  VAR_31 = VAR_29->cache;
  VAR_29->cache = 0;
  VAR_29->status = 0;
  if (VAR_31 == 0xf860) {
   for (VAR_30=0; VAR_30<5; VAR_30++) {
    if (VAR_28 == VAR_4[VAR_30][2]) {
     VAR_29->cache = VAR_28 | 0x10000;
     VAR_29->status = 3;
     break;
    }
   }
  } else if (VAR_31 == 0xf861) {
   for (VAR_30=0; VAR_30<3; VAR_30++) {
    if (VAR_28 == VAR_4[VAR_30+5][2]) {
     VAR_29->cache = VAR_28 | 0x20000;
     VAR_29->status = 3;
     break;
    }
   }
  } else if (VAR_31 == 0xf862) {
   for (VAR_30=0; VAR_30<4; VAR_30++) {
    if (VAR_28 == VAR_4[VAR_30+5+3][2]) {
     VAR_29->cache = VAR_28 | 0x40000;
     VAR_29->status = 3;
     break;
    }
   }
  }

  if (VAR_29->status == 0) {
   FUNC_0(FUNC_2(VAR_31, VAR_29));
   FUNC_0(FUNC_2(VAR_28, VAR_29));
  }

  break;

 case 3:
  VAR_33 = 0;
  VAR_31 = VAR_29->cache & 0xffff;
  VAR_35 = (VAR_29->cache & 0xf0000) >> 16;

  VAR_29->cache = 0;
  VAR_29->status = 0;

  if (VAR_35 == 0x1) {
   for (VAR_30=0; VAR_30<5; VAR_30++) {
    if (VAR_31 == VAR_4[VAR_30][2] && VAR_28 == VAR_4[VAR_30][3]) {
     VAR_33 = VAR_4[VAR_30][0];
     break;
    }
   }

   if (VAR_33 > 0) {
    VAR_31 = VAR_33/94+0x21;
    VAR_32 = VAR_33-94*(VAR_31-0x21)+0x21;
    FUNC_1(VAR_31, VAR_32, VAR_33, VAR_34);
    FUNC_0((*VAR_29->output_function)(VAR_33, VAR_29->data));
    FUNC_0((*VAR_29->output_function)(VAR_34, VAR_29->data));
   }

   if (VAR_33 <= 0) {
    FUNC_0(FUNC_2(0xf860, VAR_29));
    FUNC_0(FUNC_2(VAR_31, VAR_29));
    FUNC_0(FUNC_2(VAR_28, VAR_29));
   }

  } else if (VAR_35 == 0x2) {
   for (VAR_30=0; VAR_30<3; VAR_30++) {
    if (VAR_31 == VAR_4[VAR_30+5][2] && VAR_28 == VAR_4[VAR_30+5][3]) {
     VAR_29->cache = VAR_28 | 0x20000;
     VAR_29->status = 4;
     break;
    }
   }
  } else if (VAR_35 == 0x4) {
   for (VAR_30=0; VAR_30<4; VAR_30++) {
    if (VAR_31 == VAR_4[VAR_30+8][2] && VAR_28 == VAR_4[VAR_30+8][3]) {
     VAR_29->cache = VAR_28 | 0x40000;
     VAR_29->status = 4;
     break;
    }
   }
  }
  break;

 case 4:
  VAR_33 = 0;
  VAR_31 = VAR_29->cache & 0xffff;
  VAR_35 = (VAR_29->cache & 0xf0000) >> 16;

  VAR_29->cache = 0;
  VAR_29->status = 0;

  if (VAR_35 == 0x2) {
   for (VAR_30=0; VAR_30<3; VAR_30++) {
    if (VAR_31 == VAR_4[VAR_30+5][3] && VAR_28 == VAR_4[VAR_30+5][4]) {
     VAR_33 = VAR_4[VAR_30+5][0];
     break;
    }
   }

   if (VAR_33 > 0) {
    VAR_31 = VAR_33/94+0x21;
    VAR_32 = VAR_33-94*(VAR_31-0x21)+0x21;
    FUNC_1(VAR_31, VAR_32, VAR_33, VAR_34);
    FUNC_0((*VAR_29->output_function)(VAR_33, VAR_29->data));
    FUNC_0((*VAR_29->output_function)(VAR_34, VAR_29->data));
   }

   if (VAR_33 <= 0) {
    FUNC_0(FUNC_2(0xf861, VAR_29));
    for (VAR_30=0; VAR_30<3; VAR_30++) {
     if (VAR_31 == VAR_4[VAR_30+5][3]) {
      FUNC_0(FUNC_2(VAR_4[VAR_30+5][2], VAR_29));
      break;
     }
    }
    FUNC_0(FUNC_2(VAR_31, VAR_29));
    FUNC_0(FUNC_2(VAR_28, VAR_29));
   }
  } else if (VAR_35 == 0x4) {
   for (VAR_30=0; VAR_30<4; VAR_30++) {
    if (VAR_31 == VAR_4[VAR_30+8][3] && VAR_28 == VAR_4[VAR_30+8][4]) {
     VAR_29->cache = VAR_28 | 0x40000;
     VAR_29->status = 5;
     break;
    }
   }
  }
  break;

 case 5:
  VAR_33 = 0;
  VAR_31 = VAR_29->cache & 0xffff;
  VAR_35 = (VAR_29->cache & 0xf0000) >> 16;

  VAR_29->cache = 0;
  VAR_29->status = 0;

  if (VAR_35 == 0x4) {
   for (VAR_30=0; VAR_30<4; VAR_30++) {
    if (VAR_31 == VAR_4[VAR_30+8][4] && VAR_28 == VAR_4[VAR_30+8][5]) {
     VAR_33 = VAR_4[VAR_30+8][0];
     break;
    }
   }

   if (VAR_33 > 0) {
    VAR_31 = VAR_33/94+0x21;
    VAR_32 = VAR_33-94*(VAR_31-0x21)+0x21;
    FUNC_1(VAR_31, VAR_32, VAR_33, VAR_34);
    FUNC_0((*VAR_29->output_function)(VAR_33, VAR_29->data));
    FUNC_0((*VAR_29->output_function)(VAR_34, VAR_29->data));
   }

   if (VAR_33 <= 0) {
    FUNC_0(FUNC_2(0xf862, VAR_29));
    for (VAR_30=0; VAR_30<4; VAR_30++) {
     if (VAR_31 == VAR_4[VAR_30+8][4]) {
      FUNC_0(FUNC_2( VAR_4[VAR_30+8][2], VAR_29));
      FUNC_0(FUNC_2( VAR_4[VAR_30+8][3], VAR_29));
      break;
     }
    }
    FUNC_0(FUNC_2(VAR_31, VAR_29));
    FUNC_0(FUNC_2(VAR_28, VAR_29));
   }
  }
  break;

 default:
  VAR_29->status = 0;
  break;
 }
 return VAR_28;
}
