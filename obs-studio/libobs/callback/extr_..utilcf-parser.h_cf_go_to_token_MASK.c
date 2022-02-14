
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cf_parser {TYPE_1__* cur_token; } ;
struct TYPE_4__ {char* array; } ;
struct TYPE_3__ {TYPE_2__ str; } ;


 scalar_t__ FUNC_0 (struct cf_parser*) ;
 int FUNC_1 (struct cf_parser*,char,char) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char const*) ;

__attribute__((used)) static inline bool FUNC_3(struct cf_parser *VAR_0, const char *VAR_1,
      const char *VAR_2)
{
 while (FUNC_0(VAR_0)) {
  if (FUNC_2(&VAR_0->cur_token->str, VAR_1) == 0) {
   return 1;
  } else if (VAR_2 && FUNC_2(&VAR_0->cur_token->str, VAR_2) == 0) {
   return 1;
  } else if (*VAR_0->cur_token->str.array == '{') {
   if (!FUNC_1(VAR_0, '{', '}'))
    break;
  }
 }

 return 0;
}
