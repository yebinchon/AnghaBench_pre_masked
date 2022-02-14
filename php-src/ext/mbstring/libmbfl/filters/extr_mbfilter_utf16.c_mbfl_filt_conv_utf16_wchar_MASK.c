
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

int FUNC_4(int VAR_4, mbfl_convert_filter *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = VAR_5->status & 0xff00;
 switch (VAR_5->status & 0x0f) {
 case 0:
  if (VAR_7) {
   VAR_6 = VAR_4 & 0xff;
  } else {
   VAR_6 = (VAR_4 & 0xff) << 8;
  }
  VAR_5->cache |= VAR_6;
  VAR_5->status++;
  break;
 default:
  if (VAR_7) {
   VAR_6 = (VAR_4 & 0xff) << 8;
  } else {
   VAR_6 = VAR_4 & 0xff;
  }
  VAR_6 |= VAR_5->cache & 0xffff;
  VAR_5->status &= ~0x0f;
  if (VAR_6 >= 0xd800 && VAR_6 < 0xdc00) {
   VAR_5->cache = ((VAR_6 & 0x3ff) << 16) + 0x400000;
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
   int VAR_8 = VAR_5->status & 0x10;
   VAR_5->cache = 0;
   VAR_5->status |= 0x10;
   if (!VAR_8) {
    if (VAR_6 == 0xfffe) {
     if (VAR_7) {
      VAR_5->status &= ~0x100;
     } else {
      VAR_5->status |= 0x100;
     }
     break;
    } else if (VAR_6 == 0xfeff) {
     break;
    }
   }
   FUNC_0((*VAR_5->output_function)(VAR_6, VAR_5->data));
  }
  break;
 }

 return VAR_4;
}
