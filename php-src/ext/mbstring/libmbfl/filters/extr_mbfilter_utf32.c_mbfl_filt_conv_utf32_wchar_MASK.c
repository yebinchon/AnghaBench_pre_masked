
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
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;

int FUNC_4(int VAR_3, mbfl_convert_filter *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = VAR_4->status & 0xff00;
 switch (VAR_4->status & 0xff) {
 case 0:
  if (VAR_6) {
   VAR_5 = VAR_3 & 0xff;
  } else {
   VAR_5 = (unsigned) (VAR_3 & 0xff) << 24;
  }
  VAR_4->cache = VAR_5;
  VAR_4->status++;
  break;
 case 1:
  if (VAR_6) {
   VAR_5 = (VAR_3 & 0xff) << 8;
  } else {
   VAR_5 = (VAR_3 & 0xff) << 16;
  }
  VAR_4->cache |= VAR_5;
  VAR_4->status++;
  break;
 case 2:
  if (VAR_6) {
   VAR_5 = (VAR_3 & 0xff) << 16;
  } else {
   VAR_5 = (VAR_3 & 0xff) << 8;
  }
  VAR_4->cache |= VAR_5;
  VAR_4->status++;
  break;
 default:
  if (VAR_6) {
   VAR_5 = (VAR_3 & 0xff) << 24;
  } else {
   VAR_5 = VAR_3 & 0xff;
  }
  VAR_5 |= VAR_4->cache;
  if ((VAR_5 & 0xffff) == 0 && ((VAR_5 >> 16) & 0xffff) == 0xfffe) {
   if (VAR_6) {
    VAR_4->status = 0;
   } else {
    VAR_4->status = 0x100;
   }
   FUNC_0((*VAR_4->output_function)(0xfeff, VAR_4->data));
  } else {
   VAR_4->status &= ~0xff;
   if (VAR_5 < VAR_2 && (VAR_5 < 0xd800 || VAR_5 > 0xdfff)) {
    FUNC_0((*VAR_4->output_function)(VAR_5, VAR_4->data));
   } else {
    VAR_5 = (VAR_5 & VAR_0) | VAR_1;
    FUNC_0((*VAR_4->output_function)(VAR_5, VAR_4->data));
   }
  }
  break;
 }

 return VAR_3;
}
