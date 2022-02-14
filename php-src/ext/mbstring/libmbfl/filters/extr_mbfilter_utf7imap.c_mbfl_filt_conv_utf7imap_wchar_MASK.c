
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

int FUNC_15(int VAR_4, mbfl_convert_filter *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = -1;
 if (VAR_5->status != 0) {
  if (VAR_4 >= 0x41 && VAR_4 <= 0x5a) {
   VAR_7 = VAR_4 - 65;
  } else if (VAR_4 >= 0x61 && VAR_4 <= 0x7a) {
   VAR_7 = VAR_4 - 71;
  } else if (VAR_4 >= 0x30 && VAR_4 <= 0x39) {
   VAR_7 = VAR_4 + 4;
  } else if (VAR_4 == 0x2b) {
   VAR_7 = 62;
  } else if (VAR_4 == 0x2c) {
   VAR_7 = 63;
  }
  if (VAR_7 < 0 || VAR_7 > 63) {
   if (VAR_4 == 0x2d) {
    if (VAR_5->status == 1) {
     FUNC_0((*VAR_5->output_function)(0x26, VAR_5->data));
    }
   } else if (VAR_4 >= 0 && VAR_4 < 0x80) {
    FUNC_0((*VAR_5->output_function)(VAR_4, VAR_5->data));
   } else {
    VAR_6 = VAR_4 & VAR_0;
    VAR_6 |= VAR_1;
    FUNC_0((*VAR_5->output_function)(VAR_6, VAR_5->data));
   }
   VAR_5->cache = 0;
   VAR_5->status = 0;
   return VAR_4;
  }
 }

 switch (VAR_5->status) {

 case 0:
  if (VAR_4 == 0x26) {
   VAR_5->status++;
  } else if (VAR_4 >= 0 && VAR_4 < 0x80) {
   FUNC_0((*VAR_5->output_function)(VAR_4, VAR_5->data));
  } else {
   VAR_6 = VAR_4 & VAR_0;
   VAR_6 |= VAR_1;
   FUNC_0((*VAR_5->output_function)(VAR_6, VAR_5->data));
  }
  break;


 case 1:
 case 2:
  VAR_5->cache |= VAR_7 << 10;
  VAR_5->status = 3;
  break;
 case 3:
  VAR_5->cache |= VAR_7 << 4;
  VAR_5->status = 4;
  break;
 case 4:
  VAR_6 = ((VAR_7 >> 2) & 0xf) | (VAR_5->cache & 0xffff);
  VAR_7 = (VAR_7 & 0x3) << 14;
  VAR_5->status = 5;
  if (VAR_6 >= 0xd800 && VAR_6 < 0xdc00) {
   VAR_6 = (((VAR_6 & 0x3ff) << 16) + 0x400000) | VAR_7;
   VAR_5->cache = VAR_6;
  } else if (VAR_6 >= 0xdc00 && VAR_6 < 0xe000) {
   VAR_6 &= 0x3ff;
   VAR_6 |= (VAR_5->cache & 0xfff0000) >> 6;
   VAR_5->cache = VAR_7;
   if (VAR_6 >= VAR_3 && VAR_6 < VAR_2) {
    FUNC_0((*VAR_5->output_function)(VAR_6, VAR_5->data));
   } else {
    VAR_6 &= VAR_0;
    VAR_6 |= VAR_1;
    FUNC_0((*VAR_5->output_function)(VAR_6, VAR_5->data));
   }
  } else {
   VAR_5->cache = VAR_7;
   FUNC_0((*VAR_5->output_function)(VAR_6, VAR_5->data));
  }
  break;

 case 5:
  VAR_5->cache |= VAR_7 << 8;
  VAR_5->status = 6;
  break;
 case 6:
  VAR_5->cache |= VAR_7 << 2;
  VAR_5->status = 7;
  break;
 case 7:
  VAR_6 = ((VAR_7 >> 4) & 0x3) | (VAR_5->cache & 0xffff);
  VAR_7 = (VAR_7 & 0xf) << 12;
  VAR_5->status = 8;
  if (VAR_6 >= 0xd800 && VAR_6 < 0xdc00) {
   VAR_6 = (((VAR_6 & 0x3ff) << 16) + 0x400000) | VAR_7;
   VAR_5->cache = VAR_6;
  } else if (VAR_6 >= 0xdc00 && VAR_6 < 0xe000) {
   VAR_6 &= 0x3ff;
   VAR_6 |= (VAR_5->cache & 0xfff0000) >> 6;
   VAR_5->cache = VAR_7;
   if (VAR_6 >= VAR_3 && VAR_6 < VAR_2) {
    FUNC_0((*VAR_5->output_function)(VAR_6, VAR_5->data));
   } else {
    VAR_6 &= VAR_0;
    VAR_6 |= VAR_1;
    FUNC_0((*VAR_5->output_function)(VAR_6, VAR_5->data));
   }
  } else {
   VAR_5->cache = VAR_7;
   FUNC_0((*VAR_5->output_function)(VAR_6, VAR_5->data));
  }
  break;

 case 8:
  VAR_5->cache |= VAR_7 << 6;
  VAR_5->status = 9;
  break;
 case 9:
  VAR_6 = VAR_7 | (VAR_5->cache & 0xffff);
  VAR_5->status = 2;
  if (VAR_6 >= 0xd800 && VAR_6 < 0xdc00) {
   VAR_6 = (((VAR_6 & 0x3ff) << 16) + 0x400000);
   VAR_5->cache = VAR_6;
  } else if (VAR_6 >= 0xdc00 && VAR_6 < 0xe000) {
   VAR_6 &= 0x3ff;
   VAR_6 |= (VAR_5->cache & 0xfff0000) >> 6;
   VAR_5->cache = 0;
   if (VAR_6 >= VAR_3 && VAR_6 < VAR_2) {
    FUNC_0((*VAR_5->output_function)(VAR_6, VAR_5->data));
   } else {
    VAR_6 &= VAR_0;
    VAR_6 |= VAR_1;
    FUNC_0((*VAR_5->output_function)(VAR_6, VAR_5->data));
   }
  } else {
   VAR_5->cache = 0;
   FUNC_0((*VAR_5->output_function)(VAR_6, VAR_5->data));
  }
  break;

 default:
  VAR_5->status = 0;
  break;
 }

 return VAR_4;
}
