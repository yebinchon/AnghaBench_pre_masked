
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IMultiLanguage2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,char*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(IMultiLanguage2 *VAR_3)
{
    UINT VAR_4;
    HRESULT VAR_5;

    for (VAR_4 = 0; VAR_4 < 0xffff; VAR_4++)
    {
        VAR_5 = FUNC_0(VAR_3, VAR_4);




        if (FUNC_1(VAR_4))
            FUNC_3(VAR_5 == VAR_2 ||
               FUNC_2(VAR_5 == VAR_1) ||
               FUNC_2(VAR_5 == VAR_0),
               "code page %u is valid but not installable 0x%08x\n", VAR_4, VAR_5);
    }
}
