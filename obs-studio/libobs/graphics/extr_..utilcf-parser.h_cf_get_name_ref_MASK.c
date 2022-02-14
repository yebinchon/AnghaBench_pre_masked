
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strref {int dummy; } ;
struct cf_parser {TYPE_1__* cur_token; } ;
struct TYPE_2__ {int str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cf_parser*,int ,char const*,char const*) ;
 int FUNC_1 (struct strref*,int *) ;

__attribute__((used)) static inline int FUNC_2(struct cf_parser *VAR_2, struct strref *VAR_3,
      const char *VAR_4, const char *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_0, VAR_4, VAR_5);
 if (VAR_6 != VAR_1)
  return VAR_6;

 FUNC_1(VAR_3, &VAR_2->cur_token->str);
 return VAR_1;
}
