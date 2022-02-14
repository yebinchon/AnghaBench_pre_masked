
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_value {int dummy; } ;
struct inf_section {int dummy; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char const*) ;
 struct inf_value* FUNC_1 (struct inf_section*,char const*) ;
 char* FUNC_2 (struct inf_value*) ;

__attribute__((used)) static BOOL FUNC_3(struct inf_section *VAR_2, const char *VAR_3, char **VAR_4, const char *VAR_5)
{
    struct inf_value *VAR_6;

    VAR_6 = FUNC_1(VAR_2, VAR_3);
    if (!VAR_6) return FUNC_0(VAR_4, VAR_5);

    *VAR_4 = FUNC_2(VAR_6);
    if (!*VAR_4) return VAR_0;

    return VAR_1;
}
