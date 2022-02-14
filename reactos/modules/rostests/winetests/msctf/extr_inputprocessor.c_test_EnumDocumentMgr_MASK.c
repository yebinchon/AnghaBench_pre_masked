
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int ITfThreadMgr ;
typedef int ITfDocumentMgr ;
typedef int IEnumTfDocumentMgrs ;
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

__attribute__((used)) static void FUNC_6(ITfThreadMgr *VAR_3, ITfDocumentMgr *VAR_4, ITfDocumentMgr *VAR_5)
{
    HRESULT VAR_6;
    IEnumTfDocumentMgrs* VAR_7;
    BOOL VAR_8 = VAR_0;
    BOOL VAR_9 = VAR_2;

    VAR_6 = FUNC_3(VAR_3,&VAR_7);
    FUNC_5(FUNC_4(VAR_6),"EnumDocumentMgrs failed\n");
    if (FUNC_4(VAR_6))
    {
        ULONG VAR_10;
        ITfDocumentMgr *VAR_11;
        while (FUNC_0(VAR_7, 1, &VAR_11, &VAR_10) == VAR_1)
        {
            if (!VAR_4)
                VAR_8 = VAR_2;
            else if (VAR_4 == VAR_11)
                VAR_8 = VAR_2;
            if (VAR_5 && VAR_11 == VAR_5)
                VAR_9 = VAR_0;
            FUNC_2(VAR_11);
        }
        FUNC_1(VAR_7);
    }
    if (VAR_4)
        FUNC_5(VAR_8,"Did not find proper ITfDocumentMgr\n");
    else
        FUNC_5(!VAR_8,"Found an ITfDocumentMgr we should should not have\n");
    if (VAR_5)
        FUNC_5(VAR_9,"Found an ITfDocumentMgr we believe should be absent\n");
}
