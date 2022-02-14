
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char const* array; scalar_t__ len; } ;
struct TYPE_4__ {int len; } ;
struct cf_token {int type; TYPE_3__ unmerged_str; TYPE_1__ str; } ;
struct TYPE_5__ {char* offset; } ;
struct cf_lexer {TYPE_2__ base_lexer; scalar_t__* write_offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct cf_lexer*,TYPE_3__*) ;
 int FUNC_1 (char const**) ;
 scalar_t__ FUNC_2 (char const) ;

__attribute__((used)) static void FUNC_3(struct cf_lexer *VAR_1,
     struct cf_token *VAR_2, char VAR_3,
     bool VAR_4)
{
 const char *VAR_5 = VAR_1->base_lexer.offset;
 bool VAR_6 = 0;

 VAR_2->unmerged_str.len++;
 VAR_2->str.len++;
 FUNC_0(VAR_1, &VAR_2->unmerged_str);

 while (*VAR_5) {
  FUNC_1(&VAR_5);
  if (*VAR_5 == VAR_3) {
   if (!VAR_6) {
    *VAR_1->write_offset++ = *VAR_5;
    VAR_2->str.len++;
    VAR_5++;
    break;
   }
  } else if (FUNC_2(*VAR_5)) {
   break;
  }

  *VAR_1->write_offset++ = *VAR_5;
  VAR_2->str.len++;

  VAR_6 = (VAR_4 && *VAR_5 == '\\');
  VAR_5++;
 }

 *VAR_1->write_offset = 0;
 VAR_2->unmerged_str.len +=
  (size_t)(VAR_5 - VAR_2->unmerged_str.array);
 VAR_2->type = VAR_0;
 VAR_1->base_lexer.offset = VAR_5;
}
