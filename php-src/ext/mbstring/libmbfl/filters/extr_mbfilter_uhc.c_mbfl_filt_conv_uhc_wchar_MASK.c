
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
 int* VAR_8 ;
 int VAR_9 ;

int
FUNC_6(int VAR_10, mbfl_convert_filter *VAR_11)
{
 int VAR_12, VAR_13 = 0, VAR_14 = 0;

 switch (VAR_11->status) {
 case 0:
  if (VAR_10 >= 0 && VAR_10 < 0x80) {
   FUNC_0((*VAR_11->output_function)(VAR_10, VAR_11->data));
  } else if (VAR_10 > 0x80 && VAR_10 < 0xff && VAR_10 != 0xc9) {
   VAR_11->status = 1;
   VAR_11->cache = VAR_10;
  } else {
   VAR_13 = VAR_10 & VAR_0;
   VAR_13 |= VAR_1;
   FUNC_0((*VAR_11->output_function)(VAR_13, VAR_11->data));
  }
  break;

 case 1:
  VAR_11->status = 0;
  VAR_12 = VAR_11->cache;

  if ( VAR_12 >= 0x81 && VAR_12 <= 0xa0){
   VAR_13 = (VAR_12 - 0x81)*190 + (VAR_10 - 0x41);
   if (VAR_13 >= 0 && VAR_13 < VAR_5) {
    VAR_14 = 1;
    VAR_13 = VAR_4[VAR_13];
   } else {
    VAR_13 = 0;
   }
  } else if ( VAR_12 >= 0xa1 && VAR_12 <= 0xc6){
   VAR_13 = (VAR_12 - 0xa1)*190 + (VAR_10 - 0x41);
   if (VAR_13 >= 0 && VAR_13 < VAR_7) {
    VAR_14 = 2;
    VAR_13 = VAR_6[VAR_13];
   } else {
    VAR_13 = 0;
   }
  } else if ( VAR_12 >= 0xc7 && VAR_12 <= 0xfe){
   VAR_13 = (VAR_12 - 0xc7)*94 + (VAR_10 - 0xa1);
   if (VAR_13 >= 0 && VAR_13 < VAR_9) {
    VAR_14 = 3;
    VAR_13 = VAR_8[VAR_13];
   } else {
    VAR_13 = 0;
   }
  }
  if (VAR_14 > 0){
   if (VAR_13 <= 0) {
    VAR_13 = (VAR_12 << 8) | VAR_10;
    VAR_13 &= VAR_2;
    VAR_13 |= VAR_3;
   }
   FUNC_0((*VAR_11->output_function)(VAR_13, VAR_11->data));
  } else {
   if ((VAR_10 >= 0 && VAR_10 < 0x21) || VAR_10 == 0x7f) {
    FUNC_0((*VAR_11->output_function)(VAR_10, VAR_11->data));
   } else {
    VAR_13 = (VAR_12 << 8) | VAR_10;
    VAR_13 &= VAR_0;
    VAR_13 |= VAR_1;
    FUNC_0((*VAR_11->output_function)(VAR_13, VAR_11->data));
   }
  }
  break;

 default:
  VAR_11->status = 0;
  break;
 }

 return VAR_10;
}
