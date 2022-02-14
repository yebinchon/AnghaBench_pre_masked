
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef char WCHAR ;
typedef int HRESULT ;
typedef int * HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (int) ;
 int VAR_9 ;
 int FUNC_7 (int,char*,...) ;
 int * FUNC_8 (int,char const*,int ) ;
 int FUNC_9 (int,char const*,int *,int *,void**,int*) ;
 int FUNC_10 (int,char const*,int *) ;
 int FUNC_11 (int,char const*,int *,int *,int*,int*) ;
 int FUNC_12 (int,char const*,int *,int ,int*,int) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    static const WCHAR VAR_10[] = { 'S','h','e','l','l',' ','F','o','l','d','e','r','s',0 };
    static const WCHAR VAR_11[] = { 'W','i','n','e','T','e','s','t',0 };

    DWORD *VAR_12, VAR_13, VAR_14;
    HKEY VAR_15;
    HRESULT VAR_16;


    FUNC_6(0xdeadbeef);
    VAR_15 = FUNC_8(VAR_5, VAR_10, VAR_2);
    if (VAR_15)
    {

        FUNC_3(VAR_15);

        VAR_15 = FUNC_8(VAR_7|VAR_4, ((void*)0), VAR_2);
        FUNC_7(VAR_15 != ((void*)0), "hkey = NULL\n");
        FUNC_3(VAR_15);
    }

    VAR_15 = FUNC_8(VAR_6|VAR_5, VAR_10, VAR_2);
    FUNC_7(VAR_15 != ((void*)0), "hkey = NULL\n");
    FUNC_3(VAR_15);

    VAR_15 = FUNC_8(VAR_7|VAR_5, VAR_10, VAR_2);
    FUNC_7(VAR_15 != ((void*)0), "hkey = NULL\n");
    FUNC_3(VAR_15);

    VAR_15 = FUNC_8(VAR_7, VAR_11, VAR_2);
    FUNC_7(VAR_15 == ((void*)0), "hkey != NULL\n");

    VAR_15 = FUNC_8(VAR_7, ((void*)0), VAR_2);
    FUNC_7(VAR_15 != ((void*)0), "Can't open key\n");
    FUNC_7(FUNC_5(FUNC_4(VAR_15, VAR_11)), "Can't delete key\n");
    FUNC_3(VAR_15);

    VAR_15 = FUNC_8(VAR_7, VAR_11, VAR_9);
    if (!VAR_15 && FUNC_0() == VAR_0)
    {
        FUNC_13("Not authorized to create keys\n");
        return;
    }
    FUNC_7(VAR_15 != ((void*)0), "Can't create key\n");
    FUNC_3(VAR_15);

    VAR_14 = sizeof(VAR_13);
    VAR_16 = FUNC_11(VAR_7, VAR_11, ((void*)0), ((void*)0), &VAR_13, &VAR_14);
    FUNC_7(VAR_16 == FUNC_1(VAR_1), "hres = %x\n", VAR_16);

    VAR_13 = 1234;
    VAR_16 = FUNC_12(VAR_7, VAR_11, ((void*)0), VAR_3, &VAR_13, sizeof(DWORD));
    FUNC_7(VAR_16 == VAR_8, "hres = %x\n", VAR_16);

    VAR_14 = 1;
    VAR_16 = FUNC_11(VAR_7, VAR_11, ((void*)0), ((void*)0), ((void*)0), &VAR_14);
    FUNC_7(VAR_16 == VAR_8, "hres = %x\n", VAR_16);
    FUNC_7(VAR_14 == sizeof(DWORD), "size = %d\n", VAR_14);

    VAR_13 = 0xdeadbeef;
    VAR_16 = FUNC_11(VAR_7, VAR_11, ((void*)0), ((void*)0), &VAR_13, &VAR_14);
    FUNC_7(VAR_16 == VAR_8, "hres = %x\n", VAR_16);
    FUNC_7(VAR_14 == sizeof(DWORD), "size = %d\n", VAR_14);
    FUNC_7(VAR_13 == 1234, "data = %d\n", VAR_13);

    VAR_16 = FUNC_9(VAR_7, VAR_11, ((void*)0), ((void*)0), (void**)&VAR_12, &VAR_14);
    FUNC_7(VAR_16 == VAR_8, "hres= %x\n", VAR_16);
    FUNC_7(VAR_14 == sizeof(DWORD), "size = %d\n", VAR_14);
    if (FUNC_5(VAR_16))
    {
        FUNC_7(*VAR_12 == 1234, "*alloc_data = %d\n", *VAR_12);
        FUNC_2(VAR_12);
    }

    VAR_16 = FUNC_10(VAR_7, VAR_11, ((void*)0));
    FUNC_7(VAR_16 == VAR_8, "hres = %x\n", VAR_16);

    VAR_16 = FUNC_10(VAR_7, VAR_11, ((void*)0));
    FUNC_7(VAR_16 == FUNC_1(VAR_1), "hres = %x\n", VAR_16);

    VAR_16 = FUNC_11(VAR_7, VAR_11, ((void*)0), ((void*)0), &VAR_13, &VAR_14);
    FUNC_7(VAR_16 == FUNC_1(VAR_1), "hres = %x\n", VAR_16);

    VAR_15 = FUNC_8(VAR_7, ((void*)0), VAR_2);
    FUNC_7(VAR_15 != ((void*)0), "Can't create key\n");
    FUNC_7(FUNC_5(FUNC_4(VAR_15, VAR_11)), "Can't delete key\n");
    FUNC_3(VAR_15);
}
