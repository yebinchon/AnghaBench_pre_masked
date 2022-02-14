
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LPITEMIDLIST ;
typedef int LPCITEMIDLIST ;
typedef int IShellFolder ;
typedef int IContextMenu ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int *,int,int *,int *,int *,void**) ;
 scalar_t__ FUNC_6 (int *,int *,int *,char*,int *,int *,int ) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int ,int *,void**,int *) ;
 int FUNC_9 (int **) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (int,char*,scalar_t__) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int *,int ) ;

__attribute__((used)) static void FUNC_14(void)
{
    IShellFolder *VAR_6;
    IContextMenu *VAR_7;
    LPITEMIDLIST VAR_8;
    HRESULT VAR_9;
    WCHAR VAR_10[VAR_3];
    const WCHAR VAR_11[] =
        {'\\','t','e','s','t','d','i','r','\\','t','e','s','t','1','.','t','x','t',0};
    LPCITEMIDLIST VAR_12;
    IShellFolder *VAR_13;

    FUNC_2(VAR_3, VAR_10);
    if (!VAR_10[0])
    {
        FUNC_12("GetCurrentDirectoryW returned an empty string.\n");
        return;
    }
    FUNC_10(VAR_10, VAR_11);
    FUNC_9(&VAR_6);

    FUNC_1();

    VAR_9 = FUNC_6(VAR_6, ((void*)0), ((void*)0), VAR_10, ((void*)0), &VAR_8, 0);
    FUNC_11(VAR_9 == VAR_4, "Got 0x%08x\n", VAR_9);

    VAR_9 = FUNC_8(VAR_8, &VAR_2, (void **)&VAR_13, &VAR_12);
    FUNC_11(VAR_9 == VAR_4, "Failed to bind to folder, hr %#x.\n", VAR_9);


    VAR_9 = FUNC_5(VAR_13, ((void*)0), 1, &VAR_12, &VAR_1, ((void*)0), (void **)&VAR_7);
    FUNC_11(VAR_9 == VAR_4, "GetUIObjectOf() failed, hr %#x.\n", VAR_9);
    FUNC_13(VAR_7, VAR_0);
    FUNC_3(VAR_7);


    VAR_9 = FUNC_5(VAR_6, ((void*)0), 0, ((void*)0), &VAR_1, ((void*)0), (void **)&VAR_7);
    FUNC_11(VAR_9 == VAR_4, "GetUIObjectOf() failed, hr %#x.\n", VAR_9);
    FUNC_13(VAR_7, VAR_5);
    FUNC_3(VAR_7);

    FUNC_7(VAR_13);
    FUNC_4(VAR_8);

    FUNC_7(VAR_6);
    FUNC_0();
}
