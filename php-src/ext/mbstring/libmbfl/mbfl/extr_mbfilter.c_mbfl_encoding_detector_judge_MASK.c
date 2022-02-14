
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * encoding; int flag; int status; } ;
typedef TYPE_1__ mbfl_identify_filter ;
struct TYPE_5__ {int filter_list_size; TYPE_1__** filter_list; int strict; } ;
typedef TYPE_2__ mbfl_encoding_detector ;
typedef int mbfl_encoding ;



const mbfl_encoding *FUNC_0(mbfl_encoding_detector *VAR_0)
{
 mbfl_identify_filter *VAR_1;
 const mbfl_encoding *VAR_2 = ((void*)0);
 int VAR_3;


 if (VAR_0 != ((void*)0)) {
  VAR_3 = VAR_0->filter_list_size - 1;
  while (VAR_3 >= 0) {
   VAR_1 = VAR_0->filter_list[VAR_3];
   if (!VAR_1->flag) {
    if (!VAR_0->strict || !VAR_1->status) {
     VAR_2 = VAR_1->encoding;
    }
   }
   VAR_3--;
  }


  if (!VAR_2) {
   VAR_3 = VAR_0->filter_list_size - 1;
   while (VAR_3 >= 0) {
    VAR_1 = VAR_0->filter_list[VAR_3];
    if (!VAR_1->flag) {
     VAR_2 = VAR_1->encoding;
    }
    VAR_3--;
    }
  }
 }

 return VAR_2;
}
