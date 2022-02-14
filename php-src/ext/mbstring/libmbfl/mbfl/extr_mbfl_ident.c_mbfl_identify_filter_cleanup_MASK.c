
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* filter_dtor ) (TYPE_1__*) ;} ;
typedef TYPE_1__ mbfl_identify_filter ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(mbfl_identify_filter *VAR_0)
{
 (*VAR_0->filter_dtor)(VAR_0);
}
