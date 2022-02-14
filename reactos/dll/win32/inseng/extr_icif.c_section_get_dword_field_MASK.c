
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_value {int dummy; } ;
struct inf_section {int dummy; } ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 struct inf_value* FUNC_0 (struct inf_section*,char const*) ;
 int FUNC_1 (struct inf_value*,int,int *,int ) ;

__attribute__((used)) static BOOL FUNC_2(struct inf_section *VAR_1, const char *VAR_2, int VAR_3, DWORD *VAR_4, DWORD VAR_5)
{
    struct inf_value *VAR_6;

    VAR_6 = FUNC_0(VAR_1, VAR_2);
    if (!VAR_6)
    {
        *VAR_4 = VAR_5;
        return VAR_0;
    }

    return FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5);
}
