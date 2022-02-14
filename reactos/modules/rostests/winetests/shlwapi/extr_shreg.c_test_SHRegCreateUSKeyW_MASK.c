
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ LONG ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ,int *,int *,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    static const WCHAR VAR_3[] = {'s','u','b','k','e','y',0};
    LONG VAR_4;

    if (!&FUNC_1)
    {
        FUNC_2("SHRegCreateUSKeyW not available\n");
        return;
    }

    VAR_4 = FUNC_1(VAR_3, VAR_1, ((void*)0), ((void*)0), VAR_2);
    FUNC_0(VAR_4 == VAR_0, "got %d\n", VAR_4);
}
