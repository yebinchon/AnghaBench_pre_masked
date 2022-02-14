
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IFolder ;
typedef int * HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (char*,int) ;
 int * FUNC_1 (int ,int *,int **) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int * VAR_5 ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (int,char*,int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static void FUNC_7(void)
{
    static const WCHAR VAR_7[] = {'d','u','m','m','y',0};
    WCHAR VAR_8[VAR_4];
    IFolder *VAR_9;
    HRESULT VAR_10;
    BSTR VAR_11;

    VAR_9 = (void*)0xdeadbeef;
    VAR_10 = FUNC_1(VAR_6, ((void*)0), &VAR_9);
    FUNC_5(VAR_10 == VAR_2, "got 0x%08x\n", VAR_10);
    FUNC_5(VAR_9 == ((void*)0), "got %p\n", VAR_9);

    VAR_10 = FUNC_1(VAR_6, ((void*)0), ((void*)0));
    FUNC_5(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);


    VAR_11 = FUNC_3(VAR_7);

    VAR_10 = FUNC_1(VAR_6, VAR_11, ((void*)0));
    FUNC_5(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);

    VAR_9 = (void*)0xdeadbeef;
    VAR_10 = FUNC_1(VAR_6, VAR_11, &VAR_9);
    FUNC_5(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);
    FUNC_5(VAR_9 == ((void*)0), "got %p\n", VAR_9);
    FUNC_4(VAR_11);

    FUNC_0(VAR_8, VAR_4);
    VAR_11 = FUNC_3(VAR_8);
    VAR_10 = FUNC_1(VAR_6, VAR_11, &VAR_9);
    FUNC_5(VAR_10 == VAR_5, "got 0x%08x\n", VAR_10);
    FUNC_4(VAR_11);
    FUNC_6(VAR_9, &VAR_0);
    FUNC_2(VAR_9);
}
