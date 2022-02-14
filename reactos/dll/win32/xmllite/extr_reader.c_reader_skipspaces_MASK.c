
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlreader ;
typedef int WCHAR ;
typedef int UINT ;


 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(xmlreader *VAR_0)
{
    const WCHAR *VAR_1 = FUNC_2(VAR_0);
    UINT VAR_2 = FUNC_1(VAR_0);

    while (FUNC_0(*VAR_1))
    {
        FUNC_3(VAR_0, 1);
        VAR_1 = FUNC_2(VAR_0);
    }

    return FUNC_1(VAR_0) - VAR_2;
}
