
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* filter_function ) (int,TYPE_1__*) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (int,TYPE_1__*) ;

int FUNC_1(int VAR_0, void* VAR_1)
{
 mbfl_convert_filter *VAR_2 = (mbfl_convert_filter*)VAR_1;
 return (*VAR_2->filter_function)(VAR_0, VAR_2);
}
