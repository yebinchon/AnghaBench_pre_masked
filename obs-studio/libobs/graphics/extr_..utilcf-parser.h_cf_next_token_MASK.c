
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cf_parser {TYPE_1__* cur_token; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline bool FUNC_0(struct cf_parser *VAR_3)
{
 if (VAR_3->cur_token->type != VAR_2 &&
     VAR_3->cur_token->type != VAR_0 &&
     VAR_3->cur_token->type != VAR_1)
  VAR_3->cur_token++;

 while (VAR_3->cur_token->type == VAR_2 ||
        VAR_3->cur_token->type == VAR_0)
  VAR_3->cur_token++;

 return VAR_3->cur_token->type != VAR_1;
}
