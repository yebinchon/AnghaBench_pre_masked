
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int dwTypeID; int* pData; int dwDataLength; scalar_t__ dwMetaFileHeight; scalar_t__ dwMetaFileWidth; void* dwOleID; } ;
typedef TYPE_1__ OLECONVERT_OLESTREAM_DATA ;
typedef int LPSTORAGE ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 () ;
 int* FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int const*,int *,int,int ,int **) ;
 int FUNC_3 (int *,int*,int,int *) ;
 int FUNC_4 (int *) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_5(LPSTORAGE VAR_4, OLECONVERT_OLESTREAM_DATA *VAR_5)
{

    HRESULT VAR_6;
    IStream *VAR_7;
    static const WCHAR VAR_8[] = {1, 'O', 'l', 'e', '1', '0', 'N', 'a', 't', 'i', 'v', 'e', 0};


    VAR_5[0].dwOleID = VAR_0;
    VAR_5[0].dwTypeID = 2;
    VAR_5[1].dwOleID = VAR_0;
    VAR_5[1].dwTypeID = 0;
    VAR_5[0].dwMetaFileWidth = 0;
    VAR_5[0].dwMetaFileHeight = 0;
    VAR_5[0].pData = ((void*)0);
    VAR_5[1].pData = ((void*)0);


    VAR_6 = FUNC_2(VAR_4, VAR_8, ((void*)0),
        VAR_1 | VAR_2, 0, &VAR_7 );
    if(VAR_6 == VAR_3)
    {


        FUNC_3(VAR_7, &(VAR_5->dwDataLength), sizeof(VAR_5->dwDataLength), ((void*)0));
        if(VAR_5->dwDataLength > 0)
        {
            VAR_5->pData = FUNC_1(FUNC_0(),0,VAR_5->dwDataLength);
            FUNC_3(VAR_7, VAR_5->pData, VAR_5->dwDataLength, ((void*)0));
        }
        FUNC_4(VAR_7);
    }

}
