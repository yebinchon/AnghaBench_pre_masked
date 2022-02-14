
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cf_parser {TYPE_1__* cur_token; } ;
typedef enum cf_token_type { ____Placeholder_cf_token_type } cf_token_type ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cf_parser*,char const*) ;
 int FUNC_1 (struct cf_parser*,char const*,int *) ;

__attribute__((used)) static inline int FUNC_2(struct cf_parser *VAR_3, enum cf_token_type VAR_4,
       const char *VAR_5,
       const char *VAR_6)
{
 if (VAR_3->cur_token->type != VAR_4) {
  FUNC_0(VAR_3, VAR_5);
  if (VAR_6) {
   if (!FUNC_1(VAR_3, VAR_6, ((void*)0)))
    return VAR_1;
  }
  return VAR_0;
 }

 return VAR_2;
}
