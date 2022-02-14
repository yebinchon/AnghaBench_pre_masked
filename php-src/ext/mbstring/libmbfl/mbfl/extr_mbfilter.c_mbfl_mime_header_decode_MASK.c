
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct mime_header_decoder_data {int dummy; } ;
struct TYPE_8__ {size_t len; unsigned char* val; int const* encoding; int no_language; } ;
typedef TYPE_1__ mbfl_string ;
typedef int mbfl_encoding ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,struct mime_header_decoder_data*) ;
 int FUNC_2 (struct mime_header_decoder_data*) ;
 struct mime_header_decoder_data* FUNC_3 (int const*) ;
 TYPE_1__* FUNC_4 (struct mime_header_decoder_data*,TYPE_1__*) ;

mbfl_string *
FUNC_5(
    mbfl_string *VAR_0,
    mbfl_string *VAR_1,
    const mbfl_encoding *VAR_2)
{
 size_t VAR_3;
 unsigned char *VAR_4;
 struct mime_header_decoder_data *VAR_5;

 FUNC_0(VAR_1);
 VAR_1->no_language = VAR_0->no_language;
 VAR_1->encoding = VAR_2;

 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5 == ((void*)0)) {
  return ((void*)0);
 }


 VAR_3 = VAR_0->len;
 VAR_4 = VAR_0->val;
 while (VAR_3 > 0) {
  FUNC_1(*VAR_4++, VAR_5);
  VAR_3--;
 }

 VAR_1 = FUNC_4(VAR_5, VAR_1);
 FUNC_2(VAR_5);

 return VAR_1;
}
