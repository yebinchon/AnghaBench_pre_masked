
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IShellView ;
typedef int IShellFolderView ;
typedef int IShellFolder ;
typedef int IDataObject ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int *,void**) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,void**) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (int,char*,int) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void FUNC_15(void)
{
    IShellFolderView *VAR_6;
    IShellFolder *VAR_7;
    IShellView *VAR_8;
    IDataObject *VAR_9;
    UINT VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_11(&VAR_7);
    FUNC_13(VAR_11 == VAR_4, "got (0x%08x)\n", VAR_11);

    VAR_11 = FUNC_7(VAR_7, ((void*)0), &VAR_3, (void**)&VAR_8);
    FUNC_13(VAR_11 == VAR_4, "got (0x%08x)\n", VAR_11);

    VAR_11 = FUNC_9(VAR_8, &VAR_2, (void**)&VAR_6);
    if (VAR_11 != VAR_4)
    {
        FUNC_14("IShellView doesn't provide IShellFolderView on this platform\n");
        FUNC_10(VAR_8);
        FUNC_8(VAR_7);
        return;
    }


    VAR_9 = FUNC_0();
    VAR_11 = FUNC_2(VAR_6, VAR_9);
    FUNC_13(VAR_11 == VAR_1 || FUNC_12(VAR_11 == VAR_4) , "got (0x%08x)\n", VAR_11);
    FUNC_1(VAR_9);


    VAR_11 = FUNC_6(VAR_6, VAR_5);
    FUNC_13(VAR_11 == VAR_4, "got (0x%08x)\n", VAR_11);


    VAR_11 = FUNC_3(VAR_6, ((void*)0));
    FUNC_13(VAR_11 == VAR_4, "got (0x%08x)\n", VAR_11);
    VAR_10 = 0xdeadbeef;
    VAR_11 = FUNC_3(VAR_6, &VAR_10);
    FUNC_13(VAR_11 == VAR_4, "got (0x%08x)\n", VAR_11);
    FUNC_13(VAR_10 == 0xdeadbeef, "got %d\n", VAR_10);


    VAR_10 = 0xdeadbeef;
    VAR_11 = FUNC_5(VAR_6, ((void*)0), &VAR_10);
    FUNC_13(VAR_11 == VAR_4 || VAR_11 == VAR_0, "got (0x%08x)\n", VAR_11);
    if (VAR_11 == VAR_4) FUNC_13(VAR_10 == 0 || FUNC_12(VAR_10 == 0xdeadbeef) ,
                       "got %d\n", VAR_10);

    FUNC_4(VAR_6);

    FUNC_10(VAR_8);
    FUNC_8(VAR_7);
}
