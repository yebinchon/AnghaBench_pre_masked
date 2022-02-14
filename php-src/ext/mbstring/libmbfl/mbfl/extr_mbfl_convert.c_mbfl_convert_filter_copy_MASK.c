
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* filter_copy ) (TYPE_1__*,TYPE_1__*) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

void
FUNC_1(
    mbfl_convert_filter *VAR_0,
    mbfl_convert_filter *VAR_1)
{
 if (VAR_0->filter_copy != ((void*)0)) {
  VAR_0->filter_copy(VAR_0, VAR_1);
  return;
 }

 *VAR_1 = *VAR_0;
}
