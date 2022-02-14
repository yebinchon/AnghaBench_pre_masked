
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int *,int,char*,char const*,char const*,...) ;

__attribute__((used)) static void FUNC_4(FILE *VAR_0, int VAR_1, const type_t *VAR_2, const char *VAR_3, const char *VAR_4)
{
    if (FUNC_0(VAR_2))
    {
        FUNC_3(VAR_0, VAR_1, "MIDL_memset(&%s%s, 0, sizeof(%s%s));\n",
                   VAR_4, VAR_3, VAR_4, VAR_3);
        FUNC_3(VAR_0, VAR_1, "%s_p_%s = &%s%s;\n", VAR_4, VAR_3, VAR_4, VAR_3);
    }
    else if (FUNC_2(VAR_2) || FUNC_1(VAR_2))
        FUNC_3(VAR_0, VAR_1, "%s%s = 0;\n", VAR_4, VAR_3);
}
