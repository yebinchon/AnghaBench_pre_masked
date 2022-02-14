
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ LONG ;
typedef int * HUSKEY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*,int ,int *,int **,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    static const WCHAR VAR_5[] = {'S','o','f','t','w','a','r','e',0};
    LONG VAR_6;
    HUSKEY VAR_7;

    if (!&FUNC_2 || !&FUNC_1)
    {
        FUNC_3("SHRegOpenUSKeyW or SHRegCloseUSKey not available\n");
        return;
    }

    VAR_6 = FUNC_1(((void*)0));
    FUNC_0(VAR_6 == VAR_0, "got %d\n", VAR_6);

    VAR_6 = FUNC_2(VAR_5, VAR_3, ((void*)0), &VAR_7, VAR_2);
    FUNC_0(VAR_6 == VAR_1, "got %d\n", VAR_6);

    VAR_6 = FUNC_1(VAR_7);
    FUNC_0(VAR_6 == VAR_1, "got %d\n", VAR_6);


    VAR_6 = FUNC_2(VAR_5, VAR_4, ((void*)0), &VAR_7, VAR_2);
    FUNC_0(VAR_6 == VAR_1, "got %d\n", VAR_6);

    VAR_6 = FUNC_1(VAR_7);
    FUNC_0(VAR_6 == VAR_1, "got %d\n", VAR_6);
}
