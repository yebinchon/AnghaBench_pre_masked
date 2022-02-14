
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cf_parser {TYPE_1__* cur_token; } ;
struct TYPE_2__ {int str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cf_parser*,char const*) ;
 int FUNC_1 (struct cf_parser*) ;
 int FUNC_2 (struct cf_parser*,char const*,char const*) ;
 int FUNC_3 (struct cf_parser*) ;
 scalar_t__ FUNC_4 (int *,char const*) ;

__attribute__((used)) static inline int FUNC_5(struct cf_parser *VAR_3, const char *VAR_4,
       const char *VAR_5, const char *VAR_6)
{
 if (!FUNC_3(VAR_3)) {
  FUNC_1(VAR_3);
  return VAR_1;
 } else if (FUNC_4(&VAR_3->cur_token->str, VAR_4) == 0) {
  return VAR_2;
 }

 if (VAR_5) {
  if (!FUNC_2(VAR_3, VAR_5, VAR_6))
   return VAR_1;
 }

 FUNC_0(VAR_3, VAR_4);
 return VAR_0;
}
