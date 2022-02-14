
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 (int,int ) ;

int FUNC_2(int VAR_5, mbfl_convert_filter *VAR_6)
{
 int VAR_7;

 if (VAR_5 >= 0 && VAR_5 < 0xa0) {
  VAR_7 = VAR_5;
 } else if (VAR_5 >= 0xa0 && VAR_5 < 0x100) {
  VAR_7 = VAR_4[VAR_5 - 0xa0];
  if (VAR_7 <= 0) {
   VAR_7 = VAR_5;
   VAR_7 &= VAR_3;
   VAR_7 |= VAR_2;
  }
 } else {
  VAR_7 = VAR_5;
  VAR_7 &= VAR_0;
  VAR_7 |= VAR_1;
 }

 FUNC_0((*VAR_6->output_function)(VAR_7, VAR_6->data));

 return VAR_5;
}
