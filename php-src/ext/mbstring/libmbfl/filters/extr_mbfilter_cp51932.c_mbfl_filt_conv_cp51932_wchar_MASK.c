
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
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int* VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;

int
FUNC_9(int VAR_12, mbfl_convert_filter *VAR_13)
{
 int VAR_14, VAR_15, VAR_16;

 switch (VAR_13->status) {
 case 0:
  if (VAR_12 >= 0 && VAR_12 < 0x80) {
   FUNC_0((*VAR_13->output_function)(VAR_12, VAR_13->data));
  } else if (VAR_12 > 0xa0 && VAR_12 < 0xff) {
   VAR_13->status = 1;
   VAR_13->cache = VAR_12;
  } else if (VAR_12 == 0x8e) {
   VAR_13->status = 2;
  } else {
   VAR_16 = VAR_12 & VAR_0;
   VAR_16 |= VAR_1;
   FUNC_0((*VAR_13->output_function)(VAR_16, VAR_13->data));
  }
  break;

 case 1:
  VAR_13->status = 0;
  VAR_14 = VAR_13->cache;
  if (VAR_12 > 0xa0 && VAR_12 < 0xff) {
   VAR_16 = 0;
   VAR_15 = (VAR_14 - 0xa1)*94 + VAR_12 - 0xa1;
   if (VAR_15 <= 137) {
    if (VAR_15 == 31) {
     VAR_16 = 0xff3c;
    } else if (VAR_15 == 32) {
     VAR_16 = 0xff5e;
    } else if (VAR_15 == 33) {
     VAR_16 = 0x2225;
    } else if (VAR_15 == 60) {
     VAR_16 = 0xff0d;
    } else if (VAR_15 == 80) {
     VAR_16 = 0xffe0;
    } else if (VAR_15 == 81) {
     VAR_16 = 0xffe1;
    } else if (VAR_15 == 137) {
     VAR_16 = 0xffe2;
    }
   }
   if (VAR_16 == 0) {
    if (VAR_15 >= VAR_6 && VAR_15 < VAR_5) {
     VAR_16 = VAR_4[VAR_15 - VAR_6];
    } else if (VAR_15 >= 0 && VAR_15 < VAR_11) {
     VAR_16 = VAR_10[VAR_15];
    } else if (VAR_15 >= VAR_9 && VAR_15 < VAR_8) {
     VAR_16 = VAR_7[VAR_15 - VAR_9];
    }
   }
   if (VAR_16 <= 0) {
    VAR_16 = ((VAR_14 & 0x7f) << 8) | (VAR_12 & 0x7f);
    VAR_16 &= VAR_2;
    VAR_16 |= VAR_3;
   }
   FUNC_0((*VAR_13->output_function)(VAR_16, VAR_13->data));
  } else if ((VAR_12 >= 0 && VAR_12 < 0x21) || VAR_12 == 0x7f) {
   FUNC_0((*VAR_13->output_function)(VAR_12, VAR_13->data));
  } else {
   VAR_16 = (VAR_14 << 8) | VAR_12;
   VAR_16 &= VAR_0;
   VAR_16 |= VAR_1;
   FUNC_0((*VAR_13->output_function)(VAR_16, VAR_13->data));
  }
  break;

 case 2:
  VAR_13->status = 0;
  if (VAR_12 > 0xa0 && VAR_12 < 0xe0) {
   VAR_16 = 0xfec0 + VAR_12;
   FUNC_0((*VAR_13->output_function)(VAR_16, VAR_13->data));
  } else if ((VAR_12 >= 0 && VAR_12 < 0x21) || VAR_12 == 0x7f) {
   FUNC_0((*VAR_13->output_function)(VAR_12, VAR_13->data));
  } else {
   VAR_16 = 0x8e00 | VAR_12;
   VAR_16 &= VAR_0;
   VAR_16 |= VAR_1;
   FUNC_0((*VAR_13->output_function)(VAR_16, VAR_13->data));
  }
  break;

 default:
  VAR_13->status = 0;
  break;
 }

 return VAR_12;
}
