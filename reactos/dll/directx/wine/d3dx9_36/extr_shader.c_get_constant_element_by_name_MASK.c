
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t Elements; } ;
struct ctab_constant {struct ctab_constant* constants; TYPE_1__ desc; } ;
typedef size_t UINT ;


 int FUNC_0 (char*,char const) ;
 int FUNC_1 (char*,...) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 struct ctab_constant* FUNC_4 (int *,struct ctab_constant*,char const*) ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static struct ctab_constant *FUNC_6(struct ctab_constant *VAR_0, const char *VAR_1)
{
    const char *VAR_2;
    UINT VAR_3;

    FUNC_1("constant %p, name %s\n", VAR_0, FUNC_3(VAR_1));

    if (!VAR_1 || !*VAR_1) return ((void*)0);

    VAR_3 = FUNC_2(VAR_1);
    VAR_2 = FUNC_5(VAR_1, ']') + 1;

    if (VAR_0->desc.Elements > VAR_3)
    {
        struct ctab_constant *VAR_4 = VAR_0->constants ? &VAR_0->constants[VAR_3] : VAR_0;

        switch (*VAR_2++)
        {
            case '.':
                return FUNC_4(((void*)0), VAR_4, VAR_2);

            case '[':
                return FUNC_6(VAR_4, VAR_2);

            case '\0':
                FUNC_1("Returning parameter %p\n", VAR_4);
                return VAR_4;

            default:
                FUNC_0("Unhandled case \"%c\"\n", *--VAR_2);
                break;
        }
    }

    FUNC_1("Constant not found\n");
    return ((void*)0);
}
