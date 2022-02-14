
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int cache; int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;

int FUNC_3(int VAR_0, mbfl_convert_filter *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = VAR_1->status & 0xff00;
 switch (VAR_1->status & 0xff) {
 case 0:
  if (VAR_3) {
   VAR_2 = VAR_0 & 0xff;
  } else {
   VAR_2 = (VAR_0 & 0xff) << 24;
  }
  VAR_1->cache = VAR_2;
  VAR_1->status++;
  break;
 case 1:
  if (VAR_3) {
   VAR_2 = (VAR_0 & 0xff) << 8;
  } else {
   VAR_2 = (VAR_0 & 0xff) << 16;
  }
  VAR_1->cache |= VAR_2;
  VAR_1->status++;
  break;
 case 2:
  if (VAR_3) {
   VAR_2 = (VAR_0 & 0xff) << 16;
  } else {
   VAR_2 = (VAR_0 & 0xff) << 8;
  }
  VAR_1->cache |= VAR_2;
  VAR_1->status++;
  break;
 default:
  if (VAR_3) {
   VAR_2 = (VAR_0 & 0xff) << 24;
  } else {
   VAR_2 = VAR_0 & 0xff;
  }
  VAR_2 |= VAR_1->cache;
  if ((VAR_2 & 0xffff) == 0 && ((VAR_2 >> 16) & 0xffff) == 0xfffe) {
   if (VAR_3) {
    VAR_1->status = 0;
   } else {
    VAR_1->status = 0x100;
   }
   FUNC_0((*VAR_1->output_function)(0xfeff, VAR_1->data));
  } else {
   VAR_1->status &= ~0xff;
   FUNC_0((*VAR_1->output_function)(VAR_2, VAR_1->data));
  }
  break;
 }

 return VAR_0;
}
