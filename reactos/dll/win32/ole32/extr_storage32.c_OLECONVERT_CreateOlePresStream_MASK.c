
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pOlePresStreamHeaderEmpty ;
typedef int pOlePresStreamHeader ;
typedef int WCHAR ;
struct TYPE_3__ {int* byUnknown1; int dwExtentX; int dwExtentY; int dwSize; int* pData; } ;
typedef int OlePres ;
typedef TYPE_1__ OLECONVERT_ISTORAGE_OLEPRES ;
typedef int METAFILEPICT16 ;
typedef int LPSTORAGE ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int ,int const*,int,int ,int ,int **) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_5(LPSTORAGE VAR_4, DWORD VAR_5, DWORD VAR_6 , BYTE *VAR_7, DWORD VAR_8)
{
    HRESULT VAR_9;
    IStream *VAR_10;
    static const WCHAR VAR_11[] = {2, 'O', 'l', 'e', 'P', 'r', 'e', 's', '0', '0', '0', 0};
    static const BYTE VAR_12[] =
    {
        0xFF, 0xFF, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00
    };

    static const BYTE VAR_13[] =
    {
        0x00, 0x00, 0x00, 0x00,
        0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00
    };


    VAR_9 = FUNC_0(VAR_4, VAR_11,
        VAR_0 | VAR_2 | VAR_1, 0, 0, &VAR_10 );

    if(VAR_9 == VAR_3)
    {
        DWORD VAR_14;
        OLECONVERT_ISTORAGE_OLEPRES VAR_15;

        FUNC_4(&VAR_15, 0, sizeof(VAR_15));

        if(VAR_8 > 0)
        {
            FUNC_3(VAR_15.byUnknown1, VAR_12, sizeof(VAR_12));
            VAR_14 = sizeof(VAR_12);
        }
        else
        {
            FUNC_3(VAR_15.byUnknown1, VAR_13, sizeof(VAR_13));
            VAR_14 = sizeof(VAR_13);
        }

        VAR_15.dwExtentX = VAR_5;
        VAR_15.dwExtentY = -VAR_6;


        if(VAR_8 > sizeof(METAFILEPICT16))
        {
            VAR_15.dwSize = VAR_8 - sizeof(METAFILEPICT16);
            VAR_15.pData = &(VAR_7[8]);
        }

        VAR_9 = FUNC_2(VAR_10, VAR_15.byUnknown1, VAR_14, ((void*)0));
        VAR_9 = FUNC_2(VAR_10, &(VAR_15.dwExtentX), sizeof(VAR_15.dwExtentX), ((void*)0));
        VAR_9 = FUNC_2(VAR_10, &(VAR_15.dwExtentY), sizeof(VAR_15.dwExtentY), ((void*)0));
        VAR_9 = FUNC_2(VAR_10, &(VAR_15.dwSize), sizeof(VAR_15.dwSize), ((void*)0));
        if(VAR_15.dwSize > 0)
        {
            VAR_9 = FUNC_2(VAR_10, VAR_15.pData, VAR_15.dwSize, ((void*)0));
        }
        FUNC_1(VAR_10);
    }
}
