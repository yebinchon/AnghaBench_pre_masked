
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IMoniker ;
typedef int IHlink ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (char const*,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *,int *,int *,int ,int *,int *,void**) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_4 ;
 int * FUNC_4 (int *,int *,char const*,int ) ;
 int FUNC_5 (int *,char const*,char const*) ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (int *,int,int *,char const*) ;
 int FUNC_8 (int *,int,char const*,char const*) ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static void FUNC_10(void)
{
    IHlink *VAR_5;
    IMoniker *VAR_6, *VAR_7;
    static const WCHAR VAR_8[] = {0};
    static const WCHAR VAR_9[] = {'w','o','r','d','s',0};
    static const WCHAR VAR_10[] = {'a',0};
    static const WCHAR VAR_11[] = {'b',0};
    HRESULT VAR_12;

    VAR_12 = FUNC_1(((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0), &VAR_3, (void**)&VAR_5);
    FUNC_6(VAR_12 == VAR_4, "HlinkCreateFromString failed: 0x%08x\n", VAR_12);
    FUNC_5(VAR_5, ((void*)0), ((void*)0));
    FUNC_4(VAR_5, ((void*)0), ((void*)0), VAR_0);


    FUNC_8(VAR_5, VAR_2 | VAR_1, VAR_10, VAR_9);
    FUNC_5(VAR_5, VAR_10, VAR_9);
    VAR_6 = FUNC_4(VAR_5, (IMoniker*)0xFFFFFFFF, VAR_9, VAR_0);
    FUNC_6(VAR_6 != ((void*)0), "Moniker from %s target should not be NULL\n", FUNC_9(VAR_10));
    if(VAR_6)
        FUNC_3(VAR_6);



    FUNC_8(VAR_5, VAR_2 | VAR_1, VAR_8, VAR_8);
    FUNC_5(VAR_5, ((void*)0), ((void*)0));
    FUNC_4(VAR_5, ((void*)0), ((void*)0), VAR_0);



    VAR_12 = FUNC_0(VAR_11, &VAR_7);
    FUNC_6(VAR_12 == VAR_4, "CreateFileMoniker failed: 0x%08x\n", VAR_12);

    FUNC_7(VAR_5, VAR_2 | VAR_1, VAR_7, VAR_9);
    FUNC_5(VAR_5, VAR_11, VAR_9);
    FUNC_4(VAR_5, VAR_7, VAR_9, VAR_0);

    FUNC_3(VAR_7);

    FUNC_2(VAR_5);
}
