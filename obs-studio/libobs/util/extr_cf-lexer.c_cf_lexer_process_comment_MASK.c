
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char const* array; size_t len; } ;
struct TYPE_4__ {int len; } ;
struct cf_token {int type; TYPE_2__ unmerged_str; TYPE_1__ str; } ;
struct TYPE_6__ {char* offset; } ;
struct cf_lexer {int unexpected_eof; TYPE_3__ base_lexer; int write_offset; } ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static bool FUNC_4(struct cf_lexer *VAR_1,
         struct cf_token *VAR_2)
{
 const char *VAR_3;

 if (!FUNC_0(VAR_2->unmerged_str.array))
  return 0;

 VAR_3 = VAR_1->base_lexer.offset;
 FUNC_1(&VAR_3);

 FUNC_3(VAR_1->write_offset++, " ");
 VAR_2->str.len = 1;

 if (*VAR_3 == '/') {
  while (*++VAR_3 && !FUNC_2(*VAR_3))
   FUNC_1(&VAR_3);

 } else if (*VAR_3 == '*') {
  bool VAR_4 = 0;
  VAR_1->unexpected_eof = 1;

  while (*++VAR_3) {
   FUNC_1(&VAR_3);

   if (VAR_4 && *VAR_3 == '/') {
    VAR_3++;
    VAR_1->unexpected_eof = 0;
    break;
   } else {
    VAR_4 = (*VAR_3 == '*');
   }
  }
 }

 VAR_2->unmerged_str.len +=
  (size_t)(VAR_3 - VAR_2->unmerged_str.array);
 VAR_2->type = VAR_0;
 VAR_1->base_lexer.offset = VAR_3;

 return 1;
}
