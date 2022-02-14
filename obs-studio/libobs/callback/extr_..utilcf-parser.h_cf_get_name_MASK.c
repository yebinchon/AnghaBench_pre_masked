
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cf_parser {TYPE_2__* cur_token; } ;
struct TYPE_3__ {int len; int array; } ;
struct TYPE_4__ {TYPE_1__ str; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct cf_parser*,int ,char const*,char const*) ;

__attribute__((used)) static inline int FUNC_2(struct cf_parser *VAR_2, char **VAR_3, const char *VAR_4,
         const char *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_0, VAR_4, VAR_5);
 if (VAR_6 != VAR_1)
  return VAR_6;

 *VAR_3 = FUNC_0(VAR_2->cur_token->str.array, VAR_2->cur_token->str.len);
 return VAR_1;
}
