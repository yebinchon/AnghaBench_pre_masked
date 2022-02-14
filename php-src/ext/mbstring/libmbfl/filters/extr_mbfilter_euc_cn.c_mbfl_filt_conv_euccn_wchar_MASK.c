
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
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;

int
FUNC_6(int VAR_6, mbfl_convert_filter *VAR_7)
{
 int VAR_8, VAR_9;

 switch (VAR_7->status) {
 case 0:
  if (VAR_6 >= 0 && VAR_6 < 0x80) {
   FUNC_0((*VAR_7->output_function)(VAR_6, VAR_7->data));
  } else if (VAR_6 > 0xa0 && VAR_6 < 0xff) {
   VAR_7->status = 1;
   VAR_7->cache = VAR_6;
  } else {
   VAR_9 = VAR_6 & VAR_0;
   VAR_9 |= VAR_1;
   FUNC_0((*VAR_7->output_function)(VAR_9, VAR_7->data));
  }
  break;

 case 1:
  VAR_7->status = 0;
  VAR_8 = VAR_7->cache;
  if (VAR_8 > 0xa0 && VAR_8 < 0xff && VAR_6 > 0xa0 && VAR_6 < 0xff) {
   VAR_9 = (VAR_8 - 0x81)*192 + (VAR_6 - 0x40);
   if (VAR_9 >= 0 && VAR_9 < VAR_5) {
    VAR_9 = VAR_4[VAR_9];
   } else {
    VAR_9 = 0;
   }
   if (VAR_9 <= 0) {
    VAR_9 = (VAR_8 << 8) | VAR_6;
    VAR_9 &= VAR_3;
    VAR_9 |= VAR_2;
   }
   FUNC_0((*VAR_7->output_function)(VAR_9, VAR_7->data));
  } else if ((VAR_6 >= 0 && VAR_6 < 0x21) || VAR_6 == 0x7f) {
   FUNC_0((*VAR_7->output_function)(VAR_6, VAR_7->data));
  } else {
   VAR_9 = (VAR_8 << 8) | VAR_6;
   VAR_9 &= VAR_0;
   VAR_9 |= VAR_1;
   FUNC_0((*VAR_7->output_function)(VAR_9, VAR_7->data));
  }
  break;

 default:
  VAR_7->status = 0;
  break;
 }

 return VAR_6;
}
