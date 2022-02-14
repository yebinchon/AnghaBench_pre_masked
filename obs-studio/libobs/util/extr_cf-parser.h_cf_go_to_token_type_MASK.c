
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cf_parser {TYPE_1__* cur_token; } ;
typedef enum cf_token_type { ____Placeholder_cf_token_type } cf_token_type ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct cf_parser *VAR_1,
           enum cf_token_type VAR_2)
{
 while (VAR_1->cur_token->type != VAR_0 && VAR_1->cur_token->type != VAR_2)
  VAR_1->cur_token++;

 return VAR_1->cur_token->type != VAR_0;
}
