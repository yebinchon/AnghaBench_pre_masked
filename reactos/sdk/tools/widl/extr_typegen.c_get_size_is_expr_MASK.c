
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int type_t ;
struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ expr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 TYPE_1__* FUNC_2 (int const*) ;
 int * FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;

expr_t *FUNC_5(const type_t *VAR_1, const char *VAR_2)
{
    expr_t *VAR_3 = ((void*)0);

    for ( ; FUNC_1(VAR_1); VAR_1 = FUNC_3(VAR_1))
        if (FUNC_4(VAR_1) &&
            FUNC_2(VAR_1)->type != VAR_0)
        {
            if (!VAR_3)
                VAR_3 = FUNC_2(VAR_1);
            else
                FUNC_0("%s: multidimensional conformant"
                      " arrays not supported at the top level\n",
                      VAR_2);
        }

    return VAR_3;
}
