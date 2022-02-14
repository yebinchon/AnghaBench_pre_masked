
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {size_t element_count; struct d3dx_parameter* members; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef size_t UINT ;


 int FUNC_0 (char*,char const) ;
 int FUNC_1 (char*,...) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 struct d3dx_parameter* FUNC_4 (struct d3dx9_base_effect*,struct d3dx_parameter*,char const*) ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static struct d3dx_parameter *FUNC_6(struct d3dx9_base_effect *VAR_0,
        struct d3dx_parameter *VAR_1, const char *VAR_2)
{
    UINT VAR_3;
    struct d3dx_parameter *VAR_4;
    const char *VAR_5;

    FUNC_1("parameter %p, name %s\n", VAR_1, FUNC_3(VAR_2));

    if (!VAR_2 || !*VAR_2) return ((void*)0);

    VAR_3 = FUNC_2(VAR_2);
    VAR_5 = FUNC_5(VAR_2, ']') + 1;


    if ((VAR_5 - VAR_2) > 1 && VAR_1->element_count > VAR_3)
    {
        VAR_4 = &VAR_1->members[VAR_3];

        switch (*VAR_5++)
        {
            case '.':
                return FUNC_4(VAR_0, VAR_4, VAR_5);

            case '\0':
                FUNC_1("Returning parameter %p\n", VAR_4);
                return VAR_4;

            default:
                FUNC_0("Unhandled case \"%c\"\n", *--VAR_5);
                break;
        }
    }

    FUNC_1("Parameter not found\n");
    return ((void*)0);
}
