
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
 int* VAR_2 ;
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

int FUNC_11(int VAR_3, mbfl_convert_filter *VAR_4)
{
 int VAR_5, VAR_6;

 switch (VAR_4->status & 0xff) {
 case 0:
  VAR_4->cache = VAR_3;
  VAR_4->status++;
  break;
 default:
  VAR_5 = VAR_4->cache;
  VAR_4->cache = VAR_3;
  VAR_6 = (VAR_4->status & 0xff00) >> 8;

  if (VAR_5 == 0) {
   FUNC_0((*VAR_4->output_function)(VAR_5, VAR_4->data));
   VAR_4->status &= ~0xff00;
   break;
  }

  if ((VAR_4->status & VAR_1) == 0) {
   if (VAR_5 == 0x0a || (VAR_5 == 0x0d && VAR_3 != 0x0a)) {
    FUNC_0((*VAR_4->output_function)(0x0d, VAR_4->data));
    FUNC_0((*VAR_4->output_function)(0x0a, VAR_4->data));
    VAR_4->status &= ~0xff00;
    break;
   } else if (VAR_5 == 0x0d) {
    break;
   }
  }

  if ((VAR_4->status & VAR_1) == 0 && VAR_6 >= 72) {
   FUNC_0((*VAR_4->output_function)(0x3d, VAR_4->data));
   FUNC_0((*VAR_4->output_function)(0x0d, VAR_4->data));
   FUNC_0((*VAR_4->output_function)(0x0a, VAR_4->data));
   VAR_4->status &= ~0xff00;
  }

  if (VAR_5 <= 0 || VAR_5 >= 0x80 || VAR_5 == 0x3d
     || ((VAR_4->status & VAR_1) != 0 &&
         (VAR_2[VAR_5] & VAR_0) != 0)) {

   FUNC_0((*VAR_4->output_function)(0x3d, VAR_4->data));
   VAR_6 = (VAR_5 >> 4) & 0xf;
   if (VAR_6 < 10) {
    VAR_6 += 48;
   } else {
    VAR_6 += 55;
   }
   FUNC_0((*VAR_4->output_function)(VAR_6, VAR_4->data));
   VAR_6 = VAR_5 & 0xf;
   if (VAR_6 < 10) {
    VAR_6 += 48;
   } else {
    VAR_6 += 55;
   }
   FUNC_0((*VAR_4->output_function)(VAR_6, VAR_4->data));
   if ((VAR_4->status & VAR_1) == 0) {
    VAR_4->status += 0x300;
   }
  } else {
   FUNC_0((*VAR_4->output_function)(VAR_5, VAR_4->data));
   if ((VAR_4->status & VAR_1) == 0) {
    VAR_4->status += 0x100;
   }
  }
  break;
 }

 return VAR_3;
}
