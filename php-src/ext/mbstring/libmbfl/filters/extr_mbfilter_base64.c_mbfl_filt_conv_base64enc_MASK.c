
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

int FUNC_7(int VAR_2, mbfl_convert_filter *VAR_3)
{
 int VAR_4;

 VAR_4 = (VAR_3->status & 0xff);
 if (VAR_4 == 0) {
  VAR_3->status++;
  VAR_3->cache = (VAR_2 & 0xff) << 16;
 } else if (VAR_4 == 1) {
  VAR_3->status++;
  VAR_3->cache |= (VAR_2 & 0xff) << 8;
 } else {
  VAR_3->status &= ~0xff;
  if ((VAR_3->status & VAR_0) == 0) {
   VAR_4 = (VAR_3->status & 0xff00) >> 8;
   if (VAR_4 > 72) {
    FUNC_0((*VAR_3->output_function)(0x0d, VAR_3->data));
    FUNC_0((*VAR_3->output_function)(0x0a, VAR_3->data));
    VAR_3->status &= ~0xff00;
   }
   VAR_3->status += 0x400;
  }
  VAR_4 = VAR_3->cache | (VAR_2 & 0xff);
  FUNC_0((*VAR_3->output_function)(VAR_1[(VAR_4 >> 18) & 0x3f], VAR_3->data));
  FUNC_0((*VAR_3->output_function)(VAR_1[(VAR_4 >> 12) & 0x3f], VAR_3->data));
  FUNC_0((*VAR_3->output_function)(VAR_1[(VAR_4 >> 6) & 0x3f], VAR_3->data));
  FUNC_0((*VAR_3->output_function)(VAR_1[VAR_4 & 0x3f], VAR_3->data));
 }

 return VAR_2;
}
