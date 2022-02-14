
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct mime_header_encoder_data {int* lwsp; size_t lwsplen; int firstindent; TYPE_2__* conv1_filter; } ;
struct TYPE_9__ {size_t len; unsigned char* val; int * encoding; int no_language; } ;
typedef TYPE_1__ mbfl_string ;
typedef int mbfl_encoding ;
struct TYPE_10__ {int (* filter_function ) (int ,TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct mime_header_encoder_data*) ;
 struct mime_header_encoder_data* FUNC_2 (int *,int const*,int const*) ;
 TYPE_1__* FUNC_3 (struct mime_header_encoder_data*,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;

mbfl_string *
FUNC_5(
    mbfl_string *VAR_1,
    mbfl_string *VAR_2,
    const mbfl_encoding *VAR_3,
    const mbfl_encoding *VAR_4,
    const char *VAR_5,
    int VAR_6)
{
 size_t VAR_7;
 unsigned char *VAR_8;
 struct mime_header_encoder_data *VAR_9;

 FUNC_0(VAR_2);
 VAR_2->no_language = VAR_1->no_language;
 VAR_2->encoding = &VAR_0;

 VAR_9 = FUNC_2(VAR_1->encoding, VAR_3, VAR_4);
 if (VAR_9 == ((void*)0)) {
  return ((void*)0);
 }

 if (VAR_5 != ((void*)0)) {
  VAR_7 = 0;
  while (*VAR_5 && VAR_7 < 8) {
   VAR_9->lwsp[VAR_7++] = *VAR_5++;
  }
  VAR_9->lwsp[VAR_7++] = 0x20;
  VAR_9->lwsp[VAR_7] = '\0';
  VAR_9->lwsplen = VAR_7;
 }
 if (VAR_6 > 0 && VAR_6 < 74) {
  VAR_9->firstindent = VAR_6;
 }

 VAR_7 = VAR_1->len;
 VAR_8 = VAR_1->val;
 while (VAR_7 > 0) {
  (*VAR_9->conv1_filter->filter_function)(*VAR_8++, VAR_9->conv1_filter);
  VAR_7--;
 }

 VAR_2 = FUNC_3(VAR_9, VAR_2);
 FUNC_1(VAR_9);

 return VAR_2;
}
