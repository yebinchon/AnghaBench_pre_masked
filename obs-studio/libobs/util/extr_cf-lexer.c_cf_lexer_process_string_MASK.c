
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* array; } ;
struct cf_token {TYPE_1__ unmerged_str; } ;
struct cf_lexer {int dummy; } ;


 int FUNC_0 (struct cf_lexer*,struct cf_token*,char,int) ;
 scalar_t__ FUNC_1 (struct cf_lexer*) ;

__attribute__((used)) static bool FUNC_2(struct cf_lexer *VAR_0,
        struct cf_token *VAR_1)
{
 char VAR_2 = *VAR_1->unmerged_str.array;

 if (VAR_2 == '<' && FUNC_1(VAR_0)) {
  FUNC_0(VAR_0, VAR_1, '>', 0);
  return 1;

 } else if (VAR_2 == '"' || VAR_2 == '\'') {
  FUNC_0(VAR_0, VAR_1, VAR_2,
         !FUNC_1(VAR_0));
  return 1;
 }

 return 0;
}
