
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* filter_dtor ) (TYPE_1__*) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(mbfl_convert_filter *VAR_0)
{
 if (VAR_0) {
  (*VAR_0->filter_dtor)(VAR_0);
  FUNC_0((void*)VAR_0);
 }
}
