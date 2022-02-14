
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; scalar_t__ cache; int (* filter_function ) (char,TYPE_1__*) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (char,TYPE_1__*) ;

int FUNC_1(mbfl_convert_filter *VAR_0)
{

 (*VAR_0->filter_function)('\0', VAR_0);
 VAR_0->status &= ~0xffff;
 VAR_0->cache = 0;
 return 0;
}
