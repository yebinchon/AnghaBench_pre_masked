
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int TAGREF ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,int) ;

TAGREF FUNC_5(const char* VAR_2, const char* VAR_3)
{
    char VAR_4[100] = { 0 };
    WCHAR VAR_5[100] = { 0 };
    FUNC_4(VAR_4, VAR_2, VAR_3 - VAR_2);

    if (!VAR_1)
    {
        VAR_1 = FUNC_2(VAR_0, 0);
    }

    FUNC_0(VAR_5, VAR_4, FUNC_3(VAR_4));
    return FUNC_1(VAR_1, VAR_5);
}
