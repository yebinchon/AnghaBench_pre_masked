
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strref {char const* array; int len; } ;
struct cf_preprocessor {int dummy; } ;


 int FUNC_0 (struct cf_preprocessor*,struct strref*) ;
 int FUNC_1 (char const*) ;

void FUNC_2(struct cf_preprocessor *VAR_0,
    const char *VAR_1)
{
 struct strref VAR_2;
 VAR_2.array = VAR_1;
 VAR_2.len = FUNC_1(VAR_1);
 FUNC_0(VAR_0, &VAR_2);
}
