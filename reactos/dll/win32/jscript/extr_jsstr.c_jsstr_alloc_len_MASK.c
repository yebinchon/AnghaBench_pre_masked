
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsstr_t ;
typedef int WCHAR ;


 int * FUNC_0 (unsigned int,int **) ;
 int FUNC_1 (int *,int const*,unsigned int) ;

jsstr_t *FUNC_2(const WCHAR *VAR_0, unsigned VAR_1)
{
    jsstr_t *VAR_2;
    WCHAR *VAR_3;

    VAR_2 = FUNC_0(VAR_1, &VAR_3);
    if(VAR_2)
        FUNC_1(VAR_3, VAR_0, VAR_1*sizeof(WCHAR));

    return VAR_2;
}
