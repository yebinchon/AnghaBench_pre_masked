
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
 int VAR_5 ;
 int FUNC_1 (int,int ) ;

int FUNC_2(int VAR_6, mbfl_convert_filter *VAR_7)
{
 int VAR_8;

 if (VAR_6 >= 0 && VAR_6 < VAR_5) {
  VAR_8 = VAR_6;
 } else if (VAR_6 >= VAR_5 && VAR_6 < 0x100) {
  VAR_8 = VAR_4[VAR_6 - VAR_5];
  if (VAR_8 <= 0) {
   VAR_8 = VAR_6;
   VAR_8 &= VAR_3;
   VAR_8 |= VAR_2;
  }
 } else {
  VAR_8 = VAR_6;
  VAR_8 &= VAR_0;
  VAR_8 |= VAR_1;
 }

 FUNC_0((*VAR_7->output_function)(VAR_8, VAR_7->data));

 return VAR_6;
}
