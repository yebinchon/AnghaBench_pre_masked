
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IHlink ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char**) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    IHlink *VAR_6;
    WCHAR *VAR_7;
    HRESULT VAR_8;

    static const WCHAR VAR_9[] = {'t','e','s','t',0};

    VAR_8 = FUNC_0(&VAR_2, ((void*)0), VAR_1|VAR_0,
            &VAR_3, (void**)&VAR_6);
    FUNC_6(VAR_8 == VAR_5, "CoCreateInstance failed: %08x\n", VAR_8);

    VAR_7 = (void*)0xdeadbeef;
    VAR_8 = FUNC_2(VAR_6, &VAR_7);
    FUNC_6(VAR_8 == VAR_4, "GetTargetFrameName failed: %08x\n", VAR_8);
    FUNC_6(!VAR_7, "str = %s\n", FUNC_7(VAR_7));

    VAR_8 = FUNC_4(VAR_6, VAR_9);
    FUNC_6(VAR_8 == VAR_5, "SetTargetFrameName failed: %08x\n", VAR_8);

    VAR_7 = (void*)0xdeadbeef;
    VAR_8 = FUNC_2(VAR_6, &VAR_7);
    FUNC_6(VAR_8 == VAR_5, "GetTargetFrameName failed: %08x\n", VAR_8);
    FUNC_6(!FUNC_5(VAR_7, VAR_9), "str = %s\n", FUNC_7(VAR_7));
    FUNC_1(VAR_7);

    VAR_8 = FUNC_4(VAR_6, ((void*)0));
    FUNC_6(VAR_8 == VAR_5, "SetTargetFrameName failed: %08x\n", VAR_8);

    VAR_7 = (void*)0xdeadbeef;
    VAR_8 = FUNC_2(VAR_6, &VAR_7);
    FUNC_6(VAR_8 == VAR_4, "GetTargetFrameName failed: %08x\n", VAR_8);
    FUNC_6(!VAR_7, "str = %s\n", FUNC_7(VAR_7));

    FUNC_3(VAR_6);
}
