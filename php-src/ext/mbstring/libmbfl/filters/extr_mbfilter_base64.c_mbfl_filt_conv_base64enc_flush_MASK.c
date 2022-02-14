
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int cache; int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;

int FUNC_9(mbfl_convert_filter *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = VAR_2->status & 0xff;
 VAR_4 = VAR_2->cache;
 VAR_5 = (VAR_2->status & 0xff00) >> 8;
 VAR_2->status &= ~0xffff;
 VAR_2->cache = 0;

 if (VAR_3 >= 1) {
  if ((VAR_2->status & VAR_0) == 0) {
   if (VAR_5 > 72){
    FUNC_0((*VAR_2->output_function)(0x0d, VAR_2->data));
    FUNC_0((*VAR_2->output_function)(0x0a, VAR_2->data));
   }
  }
  FUNC_0((*VAR_2->output_function)(VAR_1[(VAR_4 >> 18) & 0x3f], VAR_2->data));
  FUNC_0((*VAR_2->output_function)(VAR_1[(VAR_4 >> 12) & 0x3f], VAR_2->data));
  if (VAR_3 == 1) {
   FUNC_0((*VAR_2->output_function)(0x3d, VAR_2->data));
   FUNC_0((*VAR_2->output_function)(0x3d, VAR_2->data));
  } else {
   FUNC_0((*VAR_2->output_function)(VAR_1[(VAR_4 >> 6) & 0x3f], VAR_2->data));
   FUNC_0((*VAR_2->output_function)(0x3d, VAR_2->data));
  }
 }
 return 0;
}
