
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

int FUNC_3(int VAR_3, mbfl_convert_filter *VAR_4)
{
 int VAR_5;

 if (VAR_4->status == 0) {
  VAR_4->status = 1;
  VAR_5 = (VAR_3 & 0xff) << 24;
  VAR_4->cache = VAR_5;
 } else if (VAR_4->status == 1) {
  VAR_4->status = 2;
  VAR_5 = (VAR_3 & 0xff) << 16;
  VAR_4->cache |= VAR_5;
 } else if (VAR_4->status == 2) {
  VAR_4->status = 3;
  VAR_5 = (VAR_3 & 0xff) << 8;
  VAR_4->cache |= VAR_5;
 } else {
  VAR_4->status = 0;
  VAR_5 = (VAR_3 & 0xff) | VAR_4->cache;
  if (VAR_5 < VAR_2 && (VAR_5 < 0xd800 || VAR_5 > 0xdfff)) {
   FUNC_0((*VAR_4->output_function)(VAR_5, VAR_4->data));
  } else {
   VAR_5 = (VAR_5 & VAR_0) | VAR_1;
   FUNC_0((*VAR_4->output_function)(VAR_5, VAR_4->data));
  }
 }
 return VAR_3;
}
