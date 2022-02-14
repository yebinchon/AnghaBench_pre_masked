
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned char* val; size_t len; } ;
typedef TYPE_1__ mbfl_string ;
struct TYPE_8__ {scalar_t__ flag; int (* filter_function ) (unsigned char,TYPE_2__*) ;} ;
typedef TYPE_2__ mbfl_identify_filter ;
struct TYPE_9__ {int filter_list_size; TYPE_2__** filter_list; } ;
typedef TYPE_3__ mbfl_encoding_detector ;


 int FUNC_0 (unsigned char,TYPE_2__*) ;

int
FUNC_1(mbfl_encoding_detector *VAR_0, mbfl_string *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_0 != ((void*)0) && VAR_1 != ((void*)0) && VAR_1->val != ((void*)0)) {
  int VAR_3 = VAR_0->filter_list_size;
  size_t VAR_4 = VAR_1->len;
  unsigned char *VAR_5 = VAR_1->val;
  int VAR_6 = 0;
  while (VAR_4 > 0) {
   int VAR_7;
   for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
    mbfl_identify_filter *VAR_8 = VAR_0->filter_list[VAR_7];
    if (!VAR_8->flag) {
     (*VAR_8->filter_function)(*VAR_5, VAR_8);
     if (VAR_8->flag) {
      VAR_6++;
     }
    }
   }
   if ((VAR_3 - 1) <= VAR_6) {
    VAR_2 = 1;
    break;
   }
   VAR_5++;
   VAR_4--;
  }
 }

 return VAR_2;
}
