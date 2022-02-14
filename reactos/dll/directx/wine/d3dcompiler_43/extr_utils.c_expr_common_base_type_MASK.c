
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum hlsl_base_type { ____Placeholder_hlsl_base_type } hlsl_base_type ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (char*) ;







__attribute__((used)) static enum hlsl_base_type FUNC_2(enum hlsl_base_type VAR_0, enum hlsl_base_type VAR_1)
{
    static const enum hlsl_base_type VAR_2[] =
    {
        133,
        129,
        128,
        130,
        131,
        132,
    };
    int VAR_3 = -1, VAR_4 = -1, VAR_5;

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); ++VAR_5)
    {

        if (VAR_0 == VAR_2[VAR_5])
            VAR_3 = VAR_0 == 130 ? VAR_5 + 1 : VAR_5;
        if (VAR_1 == VAR_2[VAR_5])
            VAR_4 = VAR_1 == 130 ? VAR_5 + 1 : VAR_5;

        if (VAR_3 != -1 && VAR_4 != -1)
            break;
    }
    if (VAR_3 == -1 || VAR_4 == -1)
    {
        FUNC_1("Unexpected base type.\n");
        return 131;
    }
    return VAR_3 >= VAR_4 ? VAR_0 : VAR_1;
}
