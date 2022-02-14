
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MSG ;
typedef int IUnknown ;
typedef int IStream ;
typedef int IClassFactory ;
typedef int HRESULT ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,void**) ;
 int FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *,int *,int *,...) ;
 int * FUNC_3 (char*,int *,int ,int ,int ,int ,int ,int *,int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ,int ) ;
 int FUNC_7 (int *,int *,int *,void**) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 int * VAR_7 ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int (*) (int *,int *,int *,void**)) ;
 int FUNC_17 (int *,int *,int *,int ,int *) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_18(void)
{
    MSG VAR_9;
    IStream *VAR_10;
    HRESULT VAR_11;
    IClassFactory *VAR_12;
    DWORD VAR_13;
    HANDLE VAR_14;
    IUnknown *VAR_15;

    VAR_7 = FUNC_3("WineCOMTest", ((void*)0), 0, VAR_0, VAR_0, VAR_0, VAR_0, ((void*)0), ((void*)0), ((void*)0), 0);
    FUNC_13(VAR_7 != ((void*)0), "Window creation failed\n");

    VAR_11 = FUNC_2(((void*)0), &VAR_5, VAR_10);
    FUNC_16(VAR_11, FUNC_2);
    VAR_13 = FUNC_17(VAR_10, &VAR_1, (IUnknown*)&VAR_6, VAR_3, &VAR_14);

    FUNC_14();

    FUNC_10(VAR_10, VAR_8, VAR_4, ((void*)0));
    VAR_11 = FUNC_1(VAR_10, &VAR_1, (void **)&VAR_12);
    FUNC_16(VAR_11, FUNC_0);
    FUNC_9(VAR_10);

    FUNC_14();


    VAR_11 = FUNC_7(VAR_12, ((void*)0), &VAR_2, (void **)&VAR_15);
    FUNC_16(VAR_11, FUNC_7);

    FUNC_8(VAR_12);

    FUNC_15();

    FUNC_12(VAR_13, VAR_14);

    while (FUNC_6(&VAR_9, ((void*)0), 0, 0))
    {
        FUNC_11(&VAR_9);
        FUNC_5(&VAR_9);
    }
    FUNC_4(VAR_7);
}
