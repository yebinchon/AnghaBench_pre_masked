
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IUnknown ;
typedef char const IRunningObjectTable ;
typedef int IMoniker ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (char const*,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,scalar_t__,...) ;
 scalar_t__ FUNC_4 (char const*,int ,int *,int *,scalar_t__*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,scalar_t__) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int,char*,scalar_t__) ;
 int FUNC_9 (scalar_t__,...) ;

__attribute__((used)) static void FUNC_10(void)
{
    HRESULT VAR_2;
    IMoniker *VAR_3 = ((void*)0);
    IRunningObjectTable *VAR_4 = ((void*)0);
    DWORD VAR_5, VAR_6;
    IUnknown *VAR_7 = ((void*)0);
    static const WCHAR VAR_8[] =
        {'\\', 'w','i','n','d','o','w','s','\\','s','y','s','t','e','m','\\','t','e','s','t','1','.','d','o','c',0};

    VAR_2 = FUNC_1(0, &VAR_4);
    FUNC_9(VAR_2, FUNC_1);

    VAR_2 = FUNC_0(VAR_8, &VAR_3);
    FUNC_9(VAR_2, FUNC_0);

    VAR_2 = FUNC_4(VAR_4, 0, (IUnknown *)&VAR_1, VAR_3, &VAR_5);
    FUNC_9(VAR_2, FUNC_4);

    VAR_2 = FUNC_4(VAR_4, 0, (IUnknown *)&VAR_1, VAR_3, &VAR_6);
    FUNC_8(VAR_2 == VAR_0, "IRunningObjectTable_Register should have returned MK_S_MONIKERALREADYREGISTERED instead of 0x%08x\n", VAR_2);

    FUNC_8(VAR_5 != VAR_6, "cookie returned for registering duplicate object shouldn't match cookie of original object (0x%x)\n", VAR_5);

    VAR_2 = FUNC_3(VAR_4, VAR_3, &VAR_7);
    FUNC_9(VAR_2, FUNC_3);
    FUNC_7(VAR_7);

    VAR_2 = FUNC_6(VAR_4, VAR_5);
    FUNC_9(VAR_2, FUNC_6);

    VAR_2 = FUNC_3(VAR_4, VAR_3, &VAR_7);
    FUNC_9(VAR_2, FUNC_3);
    FUNC_7(VAR_7);

    VAR_2 = FUNC_6(VAR_4, VAR_6);
    FUNC_9(VAR_2, FUNC_6);

    FUNC_2(VAR_3);

    FUNC_5(VAR_4);
}
