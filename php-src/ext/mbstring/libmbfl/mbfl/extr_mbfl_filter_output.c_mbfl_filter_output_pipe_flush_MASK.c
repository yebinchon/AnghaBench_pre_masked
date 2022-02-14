
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* filter_flush ) (TYPE_1__*) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(void *VAR_0)
{
 mbfl_convert_filter *VAR_1 = (mbfl_convert_filter*)VAR_0;
 if (VAR_1->filter_flush != ((void*)0)) {
  return (*VAR_1->filter_flush)(VAR_1);
 }

 return 0;
}
