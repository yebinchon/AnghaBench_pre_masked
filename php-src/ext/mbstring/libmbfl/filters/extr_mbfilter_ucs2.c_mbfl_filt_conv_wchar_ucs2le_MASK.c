
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;

int FUNC_4(int VAR_1, mbfl_convert_filter *VAR_2)
{
 if (VAR_1 >= 0 && VAR_1 < VAR_0) {
  FUNC_0((*VAR_2->output_function)(VAR_1 & 0xff, VAR_2->data));
  FUNC_0((*VAR_2->output_function)((VAR_1 >> 8) & 0xff, VAR_2->data));
 } else {
  FUNC_0(FUNC_1(VAR_1, VAR_2));
 }

 return VAR_1;
}
