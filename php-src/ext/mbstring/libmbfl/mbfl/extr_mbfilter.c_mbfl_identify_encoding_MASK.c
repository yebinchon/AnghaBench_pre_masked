
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t len; unsigned char* val; } ;
typedef TYPE_1__ mbfl_string ;
struct TYPE_8__ {int * encoding; scalar_t__ status; scalar_t__ flag; int (* filter_function ) (unsigned char,TYPE_2__*) ;} ;
typedef TYPE_2__ mbfl_identify_filter ;
typedef int mbfl_encoding ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int const*) ;
 int FUNC_4 (unsigned char,TYPE_2__*) ;

const mbfl_encoding *
FUNC_5(mbfl_string *VAR_0, const mbfl_encoding **VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 size_t VAR_7;
 unsigned char *VAR_8;
 mbfl_identify_filter *VAR_9, *VAR_10;
 const mbfl_encoding *VAR_11;


 VAR_9 = (mbfl_identify_filter *)FUNC_0(VAR_2, sizeof(mbfl_identify_filter));
 if (VAR_9 == ((void*)0)) {
  return ((void*)0);
 }

 VAR_5 = 0;
 if (VAR_1 != ((void*)0)) {
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
   if (!FUNC_3(&VAR_9[VAR_5], VAR_1[VAR_4])) {
    VAR_5++;
   }
  }
 }


 VAR_7 = VAR_0->len;
 VAR_8 = VAR_0->val;

 if (VAR_8 != ((void*)0)) {
  VAR_6 = 0;
  while (VAR_7 > 0) {
   for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
    VAR_10 = &VAR_9[VAR_4];
    if (!VAR_10->flag) {
     (*VAR_10->filter_function)(*VAR_8, VAR_10);
     if (VAR_10->flag) {
      VAR_6++;
     }
    }
   }
   if ((VAR_5 - 1) <= VAR_6 && !VAR_3) {
    break;
   }
   VAR_8++;
   VAR_7--;
  }
 }


 VAR_11 = ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_10 = &VAR_9[VAR_4];
  if (!VAR_10->flag) {
   if (VAR_3 && VAR_10->status) {
     continue;
    }
   VAR_11 = VAR_10->encoding;
   break;
  }
 }


 if (!VAR_11) {
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
   VAR_10 = &VAR_9[VAR_4];
   if (!VAR_10->flag && (!VAR_3 || !VAR_10->status)) {
    VAR_11 = VAR_10->encoding;
    break;
   }
  }
 }



 VAR_4 = VAR_5;
 while (--VAR_4 >= 0) {
  FUNC_2(&VAR_9[VAR_4]);
 }

 FUNC_1((void *)VAR_9);

 return VAR_11;
}
