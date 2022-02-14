
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int* VAR_0 ;
 int FUNC_1 (int,int ) ;

int FUNC_2(int VAR_1, mbfl_convert_filter *VAR_2)
{
 int VAR_3;

 if (VAR_1 >= 0x80 && VAR_1 < 0xa0) {
  VAR_3 = VAR_0[VAR_1 - 0x80];
 } else {
  VAR_3 = VAR_1;
 }

 FUNC_0((*VAR_2->output_function)(VAR_3, VAR_2->data));

 return VAR_1;
}
