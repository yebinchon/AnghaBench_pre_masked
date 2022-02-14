
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int filter_list_size; int * filter_list; } ;
typedef TYPE_1__ mbfl_encoding_detector ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(mbfl_encoding_detector *VAR_0)
{
 int VAR_1;

 if (VAR_0 != ((void*)0)) {
  if (VAR_0->filter_list != ((void*)0)) {
   VAR_1 = VAR_0->filter_list_size;
   while (VAR_1 > 0) {
    VAR_1--;
    FUNC_1(VAR_0->filter_list[VAR_1]);
   }
   FUNC_0((void *)VAR_0->filter_list);
  }
  FUNC_0((void *)VAR_0);
 }
}
