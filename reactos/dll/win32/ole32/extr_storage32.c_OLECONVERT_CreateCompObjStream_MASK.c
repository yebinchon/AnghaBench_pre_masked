
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pCompObjUnknown2 ;
typedef int pCompObjUnknown1 ;
typedef int WCHAR ;
struct TYPE_3__ {int* byUnknown1; int* byUnknown2; int dwOleTypeNameLength; int* strOleTypeName; int dwProgIDNameLength; int* strProgIDName; int dwCLSIDNameLength; int* strCLSIDName; int clsid; } ;
typedef TYPE_1__ OLECONVERT_ISTORAGE_COMPOBJ ;
typedef int LPSTORAGE ;
typedef char* LPCSTR ;
typedef scalar_t__ LONG ;
typedef int IStream ;
typedef int IStorageCompObj ;
typedef scalar_t__ HRESULT ;
typedef int HKEY ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int*,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int const*,int,int ,int ,int **) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int*,int,int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int*,int,int*,int) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *,char*,scalar_t__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int*,int const*,int) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_10 (int ,int*,int ,int *) ;
 int FUNC_11 (int*,char*) ;
 void* FUNC_12 (char*) ;

HRESULT FUNC_13(LPSTORAGE VAR_8, LPCSTR VAR_9)
{
    IStream *VAR_10;
    HRESULT VAR_11, VAR_12 = VAR_7;
    OLECONVERT_ISTORAGE_COMPOBJ VAR_13;
    static const WCHAR VAR_14[] = {1,'C', 'o', 'm', 'p', 'O', 'b', 'j', 0};
    WCHAR VAR_15[VAR_4];

    static const BYTE VAR_16[] = {0x01, 0x00, 0xFE, 0xFF, 0x03, 0x0A, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF};
    static const BYTE VAR_17[] = {0xF4, 0x39, 0xB2, 0x71};


    FUNC_9(&VAR_13, 0, sizeof(VAR_13));
    FUNC_8(VAR_13.byUnknown1, VAR_16, sizeof(VAR_16));
    FUNC_8(VAR_13.byUnknown2, VAR_17, sizeof(VAR_17));



    VAR_11 = FUNC_1(VAR_8, VAR_14,
        VAR_6 | VAR_5, 0, 0, &VAR_10 );
    if(VAR_11 == VAR_7)
    {

        VAR_13.dwOleTypeNameLength = FUNC_12(VAR_9)+1;
        FUNC_11(VAR_13.strOleTypeName, VAR_9);



        VAR_13.dwProgIDNameLength = FUNC_12(VAR_9)+1;
        FUNC_11(VAR_13.strProgIDName, VAR_9);


        FUNC_4( VAR_0, 0, VAR_13.strProgIDName, -1,
                             VAR_15, VAR_4 );
        VAR_12 = FUNC_0(VAR_15, &(VAR_13.clsid));

        if(VAR_12 == VAR_7)
        {
            HKEY VAR_18;
            LONG VAR_19;

            VAR_19 = FUNC_10(VAR_2, VAR_15, VAR_3, &VAR_18);
            if(VAR_19 == VAR_1)
            {
                char VAR_20[VAR_4];
                VAR_13.dwCLSIDNameLength = VAR_4;
                VAR_19 = FUNC_6(VAR_18, ((void*)0), VAR_20, (LONG*) &(VAR_13.dwCLSIDNameLength));
                if(VAR_19 == VAR_1)
                {
                    FUNC_11(VAR_13.strCLSIDName, VAR_20);
                }
                FUNC_5(VAR_18);
            }
        }


        VAR_12 = FUNC_3(VAR_10, VAR_13.byUnknown1, sizeof(VAR_13.byUnknown1), ((void*)0));

        FUNC_7(VAR_10,&(VAR_13.clsid));

        VAR_12 = FUNC_3(VAR_10, &(VAR_13.dwCLSIDNameLength), sizeof(VAR_13.dwCLSIDNameLength), ((void*)0));
        if(VAR_13.dwCLSIDNameLength > 0)
        {
            VAR_12 = FUNC_3(VAR_10, VAR_13.strCLSIDName, VAR_13.dwCLSIDNameLength, ((void*)0));
        }
        VAR_12 = FUNC_3(VAR_10, &(VAR_13.dwOleTypeNameLength) , sizeof(VAR_13.dwOleTypeNameLength), ((void*)0));
        if(VAR_13.dwOleTypeNameLength > 0)
        {
            VAR_12 = FUNC_3(VAR_10, VAR_13.strOleTypeName , VAR_13.dwOleTypeNameLength, ((void*)0));
        }
        VAR_12 = FUNC_3(VAR_10, &(VAR_13.dwProgIDNameLength) , sizeof(VAR_13.dwProgIDNameLength), ((void*)0));
        if(VAR_13.dwProgIDNameLength > 0)
        {
            VAR_12 = FUNC_3(VAR_10, VAR_13.strProgIDName , VAR_13.dwProgIDNameLength, ((void*)0));
        }
        VAR_12 = FUNC_3(VAR_10, VAR_13.byUnknown2 , sizeof(VAR_13.byUnknown2), ((void*)0));
        FUNC_2(VAR_10);
    }
    return VAR_12;
}
