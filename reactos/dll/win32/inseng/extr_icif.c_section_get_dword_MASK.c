
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_value {int dummy; } ;
struct inf_section {int dummy; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 struct inf_value* FUNC_2 (struct inf_section*,char const*) ;
 char* FUNC_3 (struct inf_value*) ;

__attribute__((used)) static BOOL FUNC_4(struct inf_section *VAR_2, const char *VAR_3, DWORD *VAR_4, DWORD VAR_5)
{
    struct inf_value *VAR_6;
    char *VAR_7;

    VAR_6 = FUNC_2(VAR_2, VAR_3);
    if (!VAR_6)
    {
        *VAR_4 = VAR_5;
        return VAR_1;
    }

    VAR_7 = FUNC_3(VAR_6);
    if (!VAR_7) return VAR_0;

    *VAR_4 = FUNC_0(VAR_7);
    FUNC_1(VAR_7);

    return VAR_1;
}
