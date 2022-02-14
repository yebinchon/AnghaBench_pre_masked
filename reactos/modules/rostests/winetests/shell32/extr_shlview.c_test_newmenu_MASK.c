
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,void**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    IUnknown *VAR_9, *VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_7, (void **)&VAR_9);
    FUNC_3(VAR_11 == VAR_8, "Failed to create NewMenu object, hr %#x.\n", VAR_11);
    if (VAR_11 != VAR_8)
    {
        FUNC_4("NewMenu is not supported.\n");
        return;
    }

    VAR_11 = FUNC_1(VAR_9, &VAR_6, (void **)&VAR_10);
    FUNC_3(VAR_11 == VAR_8, "Failed to get IShellExtInit, hr %#x.\n", VAR_11);
    FUNC_2(VAR_10);

    VAR_11 = FUNC_1(VAR_9, &VAR_2, (void **)&VAR_10);
    FUNC_3(VAR_11 == VAR_8, "Failed to get IContextMenu, hr %#x.\n", VAR_11);
    FUNC_2(VAR_10);

    VAR_11 = FUNC_1(VAR_9, &VAR_3, (void **)&VAR_10);
    FUNC_3(VAR_11 == VAR_8, "Failed to get IContextMenu2, hr %#x.\n", VAR_11);
    FUNC_2(VAR_10);

    VAR_11 = FUNC_1(VAR_9, &VAR_4, (void **)&VAR_10);
    FUNC_3(VAR_11 == VAR_8, "Failed to get IContextMenu3, hr %#x.\n", VAR_11);
    FUNC_2(VAR_10);

    VAR_11 = FUNC_1(VAR_9, &VAR_5, (void **)&VAR_10);
    FUNC_3(VAR_11 == VAR_8, "Failed to get IObjectWithSite, hr %#x.\n", VAR_11);
    FUNC_2(VAR_10);

    FUNC_2(VAR_9);
}
