
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int * value_name; } ;
typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct parser*,int ) ;
 int FUNC_5 (int *,int **) ;

__attribute__((used)) static WCHAR *FUNC_6(struct parser *VAR_2, WCHAR *VAR_3)
{
    WCHAR *VAR_4 = VAR_3, *VAR_5;

    if (VAR_2->value_name)
    {
        FUNC_0(VAR_2->value_name);
        VAR_2->value_name = ((void*)0);
    }

    if (!FUNC_5(VAR_4, &VAR_5))
        goto invalid;


    VAR_2->value_name = FUNC_1((FUNC_3(VAR_4) + 1) * sizeof(WCHAR));
    FUNC_2(VAR_2->value_name, VAR_4);

    FUNC_4(VAR_2, VAR_0);
    return VAR_5;

invalid:
    FUNC_4(VAR_2, VAR_1);
    return VAR_4;
}
