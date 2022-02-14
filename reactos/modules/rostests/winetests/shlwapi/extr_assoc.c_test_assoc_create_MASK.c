
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int IQueryAssociations ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    HRESULT VAR_9;
    IQueryAssociations *VAR_10;

    if (!&FUNC_2)
    {
        FUNC_3("AssocCreate() is missing\n");
        return;
    }

    VAR_9 = FUNC_2(VAR_7, &VAR_7, ((void*)0));
    FUNC_1(VAR_9 == VAR_2, "Unexpected result : %08x\n", VAR_9);

    VAR_9 = FUNC_2(VAR_1, &VAR_7, (LPVOID*)&VAR_10);
    FUNC_1(VAR_9 == VAR_0 || VAR_9 == VAR_4 || VAR_9 == VAR_3
        , "Unexpected result : %08x\n", VAR_9);

    VAR_9 = FUNC_2(VAR_7, &VAR_5, (LPVOID*)&VAR_10);
    FUNC_1(VAR_9 == VAR_0 || VAR_9 == VAR_4 || VAR_9 == VAR_2
        , "Unexpected result : %08x\n", VAR_9);

    VAR_9 = FUNC_2(VAR_1, &VAR_5, (LPVOID*)&VAR_10);
    FUNC_1(VAR_9 == VAR_8 || VAR_9 == VAR_4
        , "Unexpected result : %08x\n", VAR_9);
    if(VAR_9 == VAR_8)
    {
        FUNC_0(VAR_10);
    }

    VAR_9 = FUNC_2(VAR_1, &VAR_6, (LPVOID*)&VAR_10);
    FUNC_1(VAR_9 == VAR_8 || VAR_9 == VAR_4
        , "Unexpected result : %08x\n", VAR_9);
    if(VAR_9 == VAR_8)
    {
        FUNC_0(VAR_10);
    }
}
