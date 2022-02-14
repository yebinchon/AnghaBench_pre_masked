
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG ;
typedef int IUnknown ;
typedef int IAutoComplete ;
typedef int * HWND ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 int * FUNC_1 (int ,char*,char*,int ,int,int,int,int,int ,int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int *,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int) ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    HRESULT VAR_13;
    IAutoComplete *VAR_14;
    IUnknown *VAR_15;
    HWND VAR_16;


    VAR_13 = FUNC_0(&VAR_2, ((void*)0), VAR_0,
                         &VAR_7, (void **)&VAR_14);
    if (VAR_13 == VAR_8)
    {
        FUNC_9("CLSID_AutoComplete is not registered\n");
        return;
    }
    FUNC_8(VAR_13 == VAR_9, "no IID_IAutoComplete (0x%08x)\n", VAR_13);


    VAR_13 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                        &VAR_6, (void **)&VAR_15);
    if (VAR_13 == VAR_8)
    {
        FUNC_9("CLSID_ACLMulti is not registered\n");
        FUNC_4(VAR_14);
        return;
    }
    FUNC_8(VAR_13 == VAR_9, "no IID_IACList (0x%08x)\n", VAR_13);

    VAR_16 = FUNC_1(0, "EDIT", "Some text", 0, 10, 10, 300, 300,
                       VAR_11, ((void*)0), VAR_12, ((void*)0));
    FUNC_8(VAR_16 != ((void*)0), "Can't create edit control\n");


    VAR_13 = FUNC_3(VAR_14, ((void*)0), VAR_15, ((void*)0), ((void*)0));
    FUNC_8(VAR_13 == VAR_4 ||
       FUNC_7(VAR_13 == VAR_9),
       "Init returned 0x%08x\n", VAR_13);
    if (VAR_13 == VAR_4)
    {
        LONG VAR_17;

        FUNC_5(VAR_15);
        VAR_17 = FUNC_6(VAR_15);
        FUNC_8(VAR_17 == 1, "Expected AutoComplete source refcount to be 1, got %d\n", VAR_17);
    }

if (0)
{




    VAR_13 = FUNC_3(VAR_14, (HWND)0xdeadbeef, VAR_15, ((void*)0), ((void*)0));
    FUNC_8(VAR_13 == VAR_9, "Init returned 0x%08x\n", VAR_13);


    VAR_13 = FUNC_3(VAR_14, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_8(VAR_13 == VAR_4, "Init returned 0x%08x\n", VAR_13);

    VAR_13 = FUNC_3(VAR_14, VAR_16, ((void*)0), ((void*)0), ((void*)0));
    FUNC_8(VAR_13 == VAR_4, "Init returned 0x%08x\n", VAR_13);
}


    VAR_13 = FUNC_3(VAR_14, VAR_16, VAR_15, ((void*)0), ((void*)0));
    FUNC_8(VAR_13 == VAR_9, "Init returned 0x%08x\n", VAR_13);


    VAR_13 = FUNC_3(VAR_14, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_8(VAR_13 == VAR_4 ||
       VAR_13 == VAR_3,
       "Init returned 0x%08x\n", VAR_13);

    VAR_13 = FUNC_3(VAR_14, ((void*)0), VAR_15, ((void*)0), ((void*)0));
    FUNC_8(VAR_13 == VAR_4 ||
       VAR_13 == VAR_3,
       "Init returned 0x%08x\n", VAR_13);

    VAR_13 = FUNC_3(VAR_14, VAR_16, ((void*)0), ((void*)0), ((void*)0));
    FUNC_8(VAR_13 == VAR_4 ||
       VAR_13 == VAR_3,
       "Init returned 0x%08x\n", VAR_13);


    VAR_13 = FUNC_3(VAR_14, VAR_16, VAR_15, ((void*)0), ((void*)0));
    FUNC_8(VAR_13 == VAR_3, "Init returned 0x%08x\n", VAR_13);


    VAR_13 = FUNC_3(VAR_14, VAR_10, VAR_15, ((void*)0), ((void*)0));
    FUNC_8(VAR_13 == VAR_3, "Init returned 0x%08x\n", VAR_13);

    FUNC_2(VAR_16);



    VAR_13 = FUNC_3(VAR_14, VAR_10, VAR_15, ((void*)0), ((void*)0));
    FUNC_8(VAR_13 == VAR_5 ||
       VAR_13 == VAR_3,
       "Init returned 0x%08x\n", VAR_13);

    FUNC_6(VAR_15);
    FUNC_4(VAR_14);
}
