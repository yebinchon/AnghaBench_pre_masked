
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IShellLinkW ;
typedef int IShellLinkA ;
typedef int IPropertyStoreCache ;
typedef int IPropertyStore ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,void**) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int,char*,scalar_t__) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    IShellLinkA *VAR_8;
    IShellLinkW *VAR_9;
    IPropertyStore *VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                         &VAR_5, (void**)&VAR_8);
    FUNC_7(VAR_11 == VAR_7, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_3(VAR_8, &VAR_6, (void**)&VAR_9);
    FUNC_7(VAR_11 == VAR_7, "got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_3(VAR_8, &VAR_3, (void**)&VAR_10);
    if (VAR_11 == VAR_7) {
        IPropertyStoreCache *VAR_12;

        FUNC_2(VAR_10);

        VAR_11 = FUNC_5(VAR_9, &VAR_3, (void**)&VAR_10);
        FUNC_7(VAR_11 == VAR_7, "got 0x%08x\n", VAR_11);

        VAR_11 = FUNC_1(VAR_10, &VAR_4, (void**)&VAR_12);
        FUNC_7(VAR_11 == VAR_2, "got 0x%08x\n", VAR_11);

        FUNC_2(VAR_10);
    }
    else
        FUNC_8("IShellLink doesn't support IPropertyStore.\n");

    FUNC_4(VAR_8);
    FUNC_6(VAR_9);
}
