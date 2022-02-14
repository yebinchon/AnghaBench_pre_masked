
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPSTR ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,int ,int *,int,int ,int,int *,int *) ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(LPSTR VAR_3, LPSTR VAR_4)
{
    WCHAR VAR_5[VAR_1];
    WCHAR VAR_6[VAR_1];
    GUID VAR_7;
    HRESULT VAR_8;
    int VAR_9;

    VAR_8 = FUNC_0(&VAR_7);
    FUNC_3(VAR_8 == VAR_2, "Expected S_OK, got %d\n", VAR_8);

    VAR_9 = FUNC_1(&VAR_7, VAR_5, VAR_1);
    FUNC_3(VAR_9 == 39, "Expected 39, got %d\n", VAR_8);

    FUNC_2(VAR_0, 0, VAR_5, VAR_9, VAR_3, VAR_1, ((void*)0), ((void*)0));
    if (VAR_4)
    {
        FUNC_4(VAR_5, VAR_6);
        FUNC_2(VAR_0, 0, VAR_6, -1, VAR_4, VAR_1, ((void*)0), ((void*)0));
    }
}
