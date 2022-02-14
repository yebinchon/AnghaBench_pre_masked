
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IMoniker ;
typedef int IHlink ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char const*,int *,int *,int ,int *,int *,void*) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 int * FUNC_3 (int *,int *,char const*,int ) ;
 int FUNC_4 (int *,char const*,char const*) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int *,int ,char const*,int *) ;

__attribute__((used)) static void FUNC_7(void)
{
    IHlink *VAR_4;
    IMoniker *VAR_5;
    const WCHAR VAR_6[] = {'a','f','i','l','e','#','a','n','a','n','c','h','o','r',0};
    const WCHAR VAR_7[] = {'a','f','i','l','e','#','a','n','a','n','c','h','o','r','#','a','n','o','t','h','e','r',0};
    const WCHAR VAR_8[] = {'#','a','n','a','n','c','h','o','r',0};
    const WCHAR VAR_9[] = {'a','f','i','l','e',0};
    const WCHAR VAR_10[] = {'a','n','a','n','c','h','o','r',0};
    const WCHAR VAR_11[] = {'a','n','a','n','c','h','o','r','#','a','n','o','t','h','e','r',0};
    const WCHAR VAR_12[] = {'t','e','s','t','l','o','c',0};
    HRESULT VAR_13;


    VAR_13 = FUNC_0(VAR_6, ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0), &VAR_2, (void*)&VAR_4);
    FUNC_5(VAR_13 == VAR_3, "HlinkCreateFromString failed: 0x%08x\n", VAR_13);
    FUNC_5(VAR_4 != ((void*)0), "Didn't get an hlink\n");

    if(VAR_4){
        FUNC_4(VAR_4, VAR_9, VAR_10);
        VAR_5 = FUNC_3(VAR_4, (IMoniker*)0xFFFFFFFF, VAR_10, VAR_0);
        FUNC_5(VAR_5 != ((void*)0), "Found moniker should not be NULL\n");
        if(VAR_5)
            FUNC_2(VAR_5);

        FUNC_6(VAR_4, VAR_1, VAR_6, ((void*)0));
        FUNC_4(VAR_4, VAR_6, VAR_10);

        FUNC_1(VAR_4);
    }


    VAR_13 = FUNC_0(VAR_7, ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0), &VAR_2, (void*)&VAR_4);
    FUNC_5(VAR_13 == VAR_3, "HlinkCreateFromString failed: 0x%08x\n", VAR_13);
    FUNC_5(VAR_4 != ((void*)0), "Didn't get an hlink\n");

    if(VAR_4){
        FUNC_4(VAR_4, VAR_9, VAR_11);
        VAR_5 = FUNC_3(VAR_4, (IMoniker*)0xFFFFFFFF, VAR_11, VAR_0);
        FUNC_5(VAR_5 != ((void*)0), "Found moniker should not be NULL\n");
        if(VAR_5)
            FUNC_2(VAR_5);

        FUNC_1(VAR_4);
    }


    VAR_13 = FUNC_0(VAR_6, VAR_12, ((void*)0), ((void*)0), 0, ((void*)0), &VAR_2, (void*)&VAR_4);
    FUNC_5(VAR_13 == VAR_3, "HlinkCreateFromString failed: 0x%08x\n", VAR_13);
    FUNC_5(VAR_4 != ((void*)0), "Didn't get an hlink\n");

    if(VAR_4){
        FUNC_4(VAR_4, VAR_9, VAR_12);
        VAR_5 = FUNC_3(VAR_4, (IMoniker*)0xFFFFFFFF, VAR_12, VAR_0);
        FUNC_5(VAR_5 != ((void*)0), "Found moniker should not be NULL\n");
        if(VAR_5)
            FUNC_2(VAR_5);

        FUNC_1(VAR_4);
    }


    VAR_13 = FUNC_0(VAR_8, ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0), &VAR_2, (void*)&VAR_4);
    FUNC_5(VAR_13 == VAR_3, "HlinkCreateFromString failed: 0x%08x\n", VAR_13);
    FUNC_5(VAR_4 != ((void*)0), "Didn't get an hlink\n");

    if(VAR_4){
        FUNC_4(VAR_4, ((void*)0), VAR_10);
        VAR_5 = FUNC_3(VAR_4, (IMoniker*)0xFFFFFFFF, VAR_10, VAR_0);
        FUNC_5(VAR_5 == ((void*)0), "Found moniker should be NULL\n");
        if(VAR_5)
            FUNC_2(VAR_5);

        FUNC_1(VAR_4);
    }
}
