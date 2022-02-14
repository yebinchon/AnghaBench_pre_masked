
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* buffer; size_t pos; } ;
typedef TYPE_1__ mbfl_memory_device ;
struct TYPE_7__ {scalar_t__ (* filter_function ) (int ,TYPE_2__*) ;} ;
typedef TYPE_2__ mbfl_convert_filter ;


 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;

int FUNC_1(mbfl_convert_filter *VAR_0, mbfl_memory_device *VAR_1)
{
 size_t VAR_2;
 unsigned char *VAR_3;

 VAR_3 = VAR_1->buffer;
 VAR_2 = VAR_1->pos;
 while (VAR_2 > 0) {
  if ((*VAR_0->filter_function)(*VAR_3++, VAR_0) < 0) {
   return -1;
  }
  VAR_2--;
 }

 return 0;
}
