
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; struct cf_token* array; } ;
struct macro_param {TYPE_1__ tokens; } ;
struct cf_token {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(const struct macro_param *VAR_3)
{
 struct cf_token *VAR_4 = VAR_3->tokens.array;
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->tokens.num; VAR_5++)
  if (VAR_4[VAR_5].type != VAR_1 &&
      VAR_4[VAR_5].type != VAR_2 &&
      VAR_4[VAR_5].type != VAR_0)
   return 0;

 return 1;
}
