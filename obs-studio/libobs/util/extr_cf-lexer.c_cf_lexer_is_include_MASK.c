
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* array; } ;
struct cf_token {TYPE_2__ str; } ;
struct TYPE_3__ {size_t num; struct cf_token* array; } ;
struct cf_lexer {TYPE_1__ tokens; } ;


 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*) ;

__attribute__((used)) static bool FUNC_3(struct cf_lexer *VAR_0)
{
 bool VAR_1 = 0;
 bool VAR_2 = 0;
 size_t VAR_3;

 for (VAR_3 = VAR_0->tokens.num; VAR_3 > 0; VAR_3--) {
  struct cf_token *VAR_4 = VAR_0->tokens.array + (VAR_3 - 1);

  if (FUNC_1(*VAR_4->str.array))
   continue;

  if (!VAR_1) {
   if (FUNC_2(&VAR_4->str, "include") != 0 &&
       FUNC_2(&VAR_4->str, "import") != 0)
    break;

   VAR_1 = 1;

  } else if (!VAR_2) {
   if (*VAR_4->str.array != '#')
    break;

   VAR_2 = 1;

  } else {
   return FUNC_0(*VAR_4->str.array);
  }
 }


 return VAR_2 && VAR_1;
}
