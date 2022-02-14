
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_reservation {int type; int regnum; } ;
typedef enum bwritershader_param_register_type { ____Placeholder_bwritershader_param_register_type } bwritershader_param_register_type ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 struct reg_reservation* FUNC_2 (int) ;
 int FUNC_3 (char const*,char*,int *) ;

__attribute__((used)) static struct reg_reservation *FUNC_4(const char *VAR_4)
{
    struct reg_reservation *VAR_5;
    enum bwritershader_param_register_type VAR_6;
    DWORD VAR_7 = 0;

    switch (VAR_4[0])
    {
        case 'c':
            VAR_6 = VAR_0;
            break;
        case 'i':
            VAR_6 = VAR_2;
            break;
        case 'b':
            VAR_6 = VAR_1;
            break;
        case 's':
            VAR_6 = VAR_3;
            break;
        default:
            FUNC_1("Unsupported register type.\n");
            return ((void*)0);
     }

    if (!FUNC_3(VAR_4 + 1, "%u", &VAR_7))
    {
        FUNC_1("Unsupported register reservation syntax.\n");
        return ((void*)0);
    }

    VAR_5 = FUNC_2(sizeof(*VAR_5));
    if (!VAR_5)
    {
        FUNC_0("Out of memory.\n");
        return ((void*)0);
    }
    VAR_5->type = VAR_6;
    VAR_5->regnum = VAR_7;
    return VAR_5;
}
