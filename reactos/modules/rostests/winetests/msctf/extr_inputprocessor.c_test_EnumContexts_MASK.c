
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int ITfDocumentMgr ;
typedef int ITfContext ;
typedef int IEnumTfContexts ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int **,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int,char*) ;

__attribute__((used)) static void FUNC_6(ITfDocumentMgr *VAR_3, ITfContext *VAR_4)
{
    HRESULT VAR_5;
    IEnumTfContexts* VAR_6;
    BOOL VAR_7 = VAR_0;

    VAR_5 = FUNC_3(VAR_3,&VAR_6);
    FUNC_5(FUNC_4(VAR_5),"EnumContexts failed\n");
    if (FUNC_4(VAR_5))
    {
        ULONG VAR_8;
        ITfContext *VAR_9;
        while (FUNC_0(VAR_6, 1, &VAR_9, &VAR_8) == VAR_1)
        {
            if (!VAR_4)
                VAR_7 = VAR_2;
            else if (VAR_4 == VAR_9)
                VAR_7 = VAR_2;
            FUNC_2(VAR_9);
        }
        FUNC_1(VAR_6);
    }
    if (VAR_4)
        FUNC_5(VAR_7,"Did not find proper ITfContext\n");
    else
        FUNC_5(!VAR_7,"Found an ITfContext we should should not have\n");
}
