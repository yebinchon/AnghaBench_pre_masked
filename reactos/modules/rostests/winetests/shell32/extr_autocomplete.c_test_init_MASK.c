
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef scalar_t__ LONG_PTR ;
typedef int IUnknown ;
typedef int IAutoComplete ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static IAutoComplete *FUNC_7(void)
{
    HRESULT VAR_9;
    IAutoComplete *VAR_10, *VAR_11;
    IUnknown *VAR_12;
    LONG_PTR VAR_13;


    VAR_9 = FUNC_0(&VAR_2, ((void*)0), VAR_0,
                         &VAR_5, (LPVOID*)&VAR_10);
    if (VAR_9 == VAR_6)
    {
        FUNC_6("CLSID_AutoComplete is not registered\n");
        return ((void*)0);
    }
    FUNC_5(VAR_9 == VAR_7, "no IID_IAutoComplete (0x%08x)\n", VAR_9);


    VAR_9 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                        &VAR_4, (LPVOID*)&VAR_12);
    if (VAR_9 == VAR_6)
    {
        FUNC_6("CLSID_ACLMulti is not registered\n");
        FUNC_3(VAR_10);
        return ((void*)0);
    }
    FUNC_5(VAR_9 == VAR_7, "no IID_IACList (0x%08x)\n", VAR_9);

    VAR_13 = FUNC_1(VAR_8, VAR_3);
    FUNC_5(VAR_13 == 0, "Expected the edit control user data to be zero\n");


    VAR_9 = FUNC_2(VAR_10, VAR_8, VAR_12, ((void*)0), ((void*)0));
    FUNC_5(VAR_9 == VAR_7, "Init returned 0x%08x\n", VAR_9);

    VAR_13 = FUNC_1(VAR_8, VAR_3);
    FUNC_5(VAR_13 == 0, "Expected the edit control user data to be zero\n");


    VAR_9 = FUNC_0(&VAR_2, ((void*)0), VAR_0,
                         &VAR_5, (LPVOID*)&VAR_11);
    FUNC_5(VAR_9 == VAR_7, "no IID_IAutoComplete (0x%08x)\n", VAR_9);

    VAR_9 = FUNC_2(VAR_11, VAR_8, VAR_12, ((void*)0), ((void*)0));
    FUNC_5(VAR_9 == VAR_7, "Init returned 0x%08x\n", VAR_9);
    FUNC_3(VAR_11);

    FUNC_4(VAR_12);

    return VAR_10;
}
