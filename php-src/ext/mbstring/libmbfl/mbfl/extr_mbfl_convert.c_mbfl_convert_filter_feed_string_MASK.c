
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* filter_function ) (int ,TYPE_1__*) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;

int
FUNC_1(mbfl_convert_filter *VAR_0, const unsigned char *VAR_1, size_t VAR_2) {
 while (VAR_2 > 0) {
  if ((*VAR_0->filter_function)(*VAR_1++, VAR_0) < 0) {
   return -1;
  }
  VAR_2--;
 }
 return 0;
}
