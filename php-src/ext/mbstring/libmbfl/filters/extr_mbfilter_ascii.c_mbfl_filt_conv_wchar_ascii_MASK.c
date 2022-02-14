
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; int (* output_function ) (int,int ) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,int ) ;

int FUNC_3(int VAR_0, mbfl_convert_filter *VAR_1)
{
 if (VAR_0 >= 0 && VAR_0 < 0x80) {
  FUNC_0((*VAR_1->output_function)(VAR_0, VAR_1->data));
 } else {
  FUNC_0(FUNC_1(VAR_0, VAR_1));
 }

 return VAR_0;
}
