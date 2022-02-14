
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static BOOL FUNC_2(LPCWSTR VAR_1, LPCWSTR VAR_2)
{
    BOOL VAR_3;
    if (VAR_1[0] == '.')
    {

        if (FUNC_1(VAR_2) > FUNC_1(VAR_1))
            VAR_3 = !FUNC_0(VAR_2 + FUNC_1(VAR_2) - FUNC_1(VAR_1),
             VAR_1);
        else
        {

            VAR_3 = VAR_0;
        }
    }
    else
        VAR_3 = !FUNC_0(VAR_2, VAR_1);
     return VAR_3;
}
