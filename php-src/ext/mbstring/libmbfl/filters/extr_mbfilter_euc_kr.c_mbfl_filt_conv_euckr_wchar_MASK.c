
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
 int* VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;

int
FUNC_6(int VAR_8, mbfl_convert_filter *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;

 switch (VAR_9->status) {
 case 0:
  if (VAR_8 >= 0 && VAR_8 < 0x80) {
   FUNC_0((*VAR_9->output_function)(VAR_8, VAR_9->data));
  } else if (VAR_8 > 0xa0 && VAR_8 < 0xff && VAR_8 != 0xc9) {
   VAR_9->status = 1;
   VAR_9->cache = VAR_8;
  } else {
   VAR_11 = VAR_8 & VAR_0;
   VAR_11 |= VAR_1;
   FUNC_0((*VAR_9->output_function)(VAR_11, VAR_9->data));
  }
  break;

 case 1:
  VAR_9->status = 0;
  VAR_10 = VAR_9->cache;
  VAR_12 = 0;
  if (VAR_10 >= 0xa1 && VAR_10 <= 0xc6) {
   VAR_12 = 1;
  } else if (VAR_10 >= 0xc7 && VAR_10 <= 0xfe && VAR_10 != 0xc9) {
   VAR_12 = 2;
  }
  if (VAR_12 > 0 && VAR_8 >= 0xa1 && VAR_8 <= 0xfe) {
   if (VAR_12 == 1){
    VAR_11 = (VAR_10 - 0xa1)*190 + (VAR_8 - 0x41);
    if (VAR_11 >= 0 && VAR_11 < VAR_5) {
     VAR_11 = VAR_4[VAR_11];
    } else {
     VAR_11 = 0;
    }
   } else {
    VAR_11 = (VAR_10 - 0xc7)*94 + (VAR_8 - 0xa1);
    if (VAR_11 >= 0 && VAR_11 < VAR_7) {
     VAR_11 = VAR_6[VAR_11];
    } else {
     VAR_11 = 0;
    }
   }

   if (VAR_11 <= 0) {
    VAR_11 = (VAR_10 << 8) | VAR_8;
    VAR_11 &= VAR_3;
    VAR_11 |= VAR_2;
   }
   FUNC_0((*VAR_9->output_function)(VAR_11, VAR_9->data));
  } else if ((VAR_8 >= 0 && VAR_8 < 0x21) || VAR_8 == 0x7f) {
   FUNC_0((*VAR_9->output_function)(VAR_8, VAR_9->data));
  } else {
   VAR_11 = (VAR_10 << 8) | VAR_8;
   VAR_11 &= VAR_0;
   VAR_11 |= VAR_1;
   FUNC_0((*VAR_9->output_function)(VAR_11, VAR_9->data));
  }
  break;

 default:
  VAR_9->status = 0;
  break;
 }

 return VAR_8;
}
