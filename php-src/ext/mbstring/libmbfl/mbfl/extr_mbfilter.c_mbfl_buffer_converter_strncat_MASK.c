
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* filter_function ) (int,TYPE_1__*) ;} ;
typedef TYPE_1__ mbfl_convert_filter ;
struct TYPE_7__ {TYPE_1__* filter1; } ;
typedef TYPE_2__ mbfl_buffer_converter ;


 int FUNC_0 (int,TYPE_1__*) ;

int
FUNC_1(mbfl_buffer_converter *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 mbfl_convert_filter *VAR_3;
 int (*VAR_4)(int VAR_5, mbfl_convert_filter *VAR_6);

 if (VAR_0 != ((void*)0) && VAR_1 != ((void*)0)) {
  VAR_3 = VAR_0->filter1;
  if (VAR_3 != ((void*)0)) {
   VAR_4 = VAR_3->filter_function;
   while (VAR_2 > 0) {
    if ((*VAR_4)(*VAR_1++, VAR_3) < 0) {
     break;
    }
    VAR_2--;
   }
  }
 }

 return VAR_2;
}
