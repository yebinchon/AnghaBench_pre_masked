
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
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int* VAR_14 ;
 int VAR_15 ;
 int* VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int,int ) ;
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

int
FUNC_18(int VAR_18, mbfl_convert_filter *VAR_19)
{
 int VAR_20, VAR_21, VAR_22;

retry:
 switch (VAR_19->status & 0xf) {





 case 0:
  if (VAR_18 == 0x1b) {
   VAR_19->status += 2;
  } else if (VAR_18 == 0x0e) {
   VAR_19->status = 0x20;
  } else if (VAR_18 == 0x0f) {
   VAR_19->status = 0;
  } else if (VAR_19->status == 0x10 && VAR_18 == 0x5c) {
   FUNC_0((*VAR_19->output_function)(0xa5, VAR_19->data));
  } else if (VAR_19->status == 0x10 && VAR_18 == 0x7e) {
   FUNC_0((*VAR_19->output_function)(0x203e, VAR_19->data));
  } else if (VAR_19->status == 0x20 && VAR_18 > 0x20 && VAR_18 < 0x60) {
   FUNC_0((*VAR_19->output_function)(0xff40 + VAR_18, VAR_19->data));
  } else if ((VAR_19->status == 0x80 || VAR_19->status == 0x90) && VAR_18 > 0x20 && VAR_18 < 0x93) {
   VAR_19->cache = VAR_18;
   VAR_19->status += 1;
  } else if (VAR_18 >= 0 && VAR_18 < 0x80) {
   FUNC_0((*VAR_19->output_function)(VAR_18, VAR_19->data));
  } else if (VAR_18 > 0xa0 && VAR_18 < 0xe0) {
   FUNC_0((*VAR_19->output_function)(0xfec0 + VAR_18, VAR_19->data));
  } else {
   VAR_22 = VAR_18 & VAR_0;
   VAR_22 |= VAR_1;
   FUNC_0((*VAR_19->output_function)(VAR_22, VAR_19->data));
  }
  break;



 case 1:
  VAR_19->status &= ~0xf;
  VAR_20 = VAR_19->cache;
  if (VAR_18 > 0x20 && VAR_18 < 0x7f) {
   VAR_21 = (VAR_20 - 0x21)*94 + VAR_18 - 0x21;
   if (VAR_19->status == 0x80) {
    if (VAR_21 >= 0 && VAR_21 < VAR_15) {
     VAR_22 = VAR_14[VAR_21];
    } else if (VAR_21 >= VAR_7 && VAR_21 < VAR_6) {
     VAR_22 = VAR_5[VAR_21 - VAR_7];
    } else if (VAR_21 >= VAR_10 && VAR_21 < VAR_9) {
     VAR_22 = VAR_8[VAR_21 - VAR_10];
    } else if (VAR_21 >= VAR_13 && VAR_21 < VAR_12) {
     VAR_22 = VAR_11[VAR_21 - VAR_13];
    } else if (VAR_21 >= 94 * 94 && VAR_21 < 114 * 94) {

     VAR_22 = VAR_21 - 94*94 + 0xe000;
    } else {
     VAR_22 = 0;
    }
    if (VAR_22 <= 0) {
     VAR_22 = (VAR_20 << 8) | VAR_18;
     VAR_22 &= VAR_4;
     VAR_22 |= VAR_2;
    }
   } else {
    if (VAR_21 >= 0 && VAR_21 < VAR_17) {
     VAR_22 = VAR_16[VAR_21];
    } else {
     VAR_22 = 0;
    }
    if (VAR_22 <= 0) {
     VAR_22 = (VAR_20 << 8) | VAR_18;
     VAR_22 &= VAR_4;
     VAR_22 |= VAR_3;
    }
   }
   FUNC_0((*VAR_19->output_function)(VAR_22, VAR_19->data));
  } else if (VAR_18 == 0x1b) {
   VAR_19->status += 2;
  } else if ((VAR_18 >= 0 && VAR_18 < 0x21) || VAR_18 == 0x7f) {
   FUNC_0((*VAR_19->output_function)(VAR_18, VAR_19->data));
  } else {
   VAR_22 = (VAR_20 << 8) | VAR_18;
   VAR_22 &= VAR_0;
   VAR_22 |= VAR_1;
   FUNC_0((*VAR_19->output_function)(VAR_22, VAR_19->data));
  }
  break;







 case 2:
  if (VAR_18 == 0x24) {
   VAR_19->status++;
  } else if (VAR_18 == 0x28) {
   VAR_19->status += 3;
  } else {
   VAR_19->status &= ~0xf;
   FUNC_0((*VAR_19->output_function)(0x1b, VAR_19->data));
   goto retry;
  }
  break;







 case 3:
  if (VAR_18 == 0x40 || VAR_18 == 0x42) {
   VAR_19->status = 0x80;
  } else if (VAR_18 == 0x28) {
   VAR_19->status++;
  } else {
   VAR_19->status &= ~0xf;
   FUNC_0((*VAR_19->output_function)(0x1b, VAR_19->data));
   FUNC_0((*VAR_19->output_function)(0x24, VAR_19->data));
   goto retry;
  }
  break;







 case 4:
  if (VAR_18 == 0x40 || VAR_18 == 0x42) {
   VAR_19->status = 0x80;
  } else if (VAR_18 == 0x44) {
   VAR_19->status = 0x90;
  } else {
   VAR_19->status &= ~0xf;
   FUNC_0((*VAR_19->output_function)(0x1b, VAR_19->data));
   FUNC_0((*VAR_19->output_function)(0x24, VAR_19->data));
   FUNC_0((*VAR_19->output_function)(0x28, VAR_19->data));
   goto retry;
  }
  break;







 case 5:
  if (VAR_18 == 0x42 || VAR_18 == 0x48) {
   VAR_19->status = 0;
  } else if (VAR_18 == 0x4a) {
   VAR_19->status = 0x10;
  } else if (VAR_18 == 0x49) {
   VAR_19->status = 0x20;
  } else {
   VAR_19->status &= ~0xf;
   FUNC_0((*VAR_19->output_function)(0x1b, VAR_19->data));
   FUNC_0((*VAR_19->output_function)(0x28, VAR_19->data));
   goto retry;
  }
  break;

 default:
  VAR_19->status = 0;
  break;
 }

 return VAR_18;
}
