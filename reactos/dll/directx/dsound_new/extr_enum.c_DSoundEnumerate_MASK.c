
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int* szPname; } ;
typedef TYPE_1__ WAVEOUTCAPSW ;
typedef TYPE_1__ WAVEINCAPSW ;
typedef int ULONG ;
typedef int UINT_PTR ;
struct TYPE_10__ {scalar_t__* MappedId; struct TYPE_10__* lpNext; int * DeviceGuid; } ;
typedef int LPVOID ;
typedef TYPE_3__* LPFILTERINFO ;
typedef int * LPDSENUMCALLBACKW ;
typedef int * LPDSENUMCALLBACKA ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int *,int *,int ,int*,char*,int ) ;
 int FUNC_3 (TYPE_3__**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int *) ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ,TYPE_1__*,int) ;
 int FUNC_7 (int ,TYPE_1__*,int) ;

HRESULT
FUNC_8(
    LPDSENUMCALLBACKA VAR_8,
    LPDSENUMCALLBACKW VAR_9,
    LPVOID VAR_10,
    BOOL VAR_11)
{
    ULONG VAR_12;
    BOOL VAR_13;
    LPFILTERINFO VAR_14;
    WAVEOUTCAPSW VAR_15;
    WAVEINCAPSW VAR_16;

    if (!VAR_6)
    {
        FUNC_3(&VAR_6);
    }

    if (VAR_8 == ((void*)0) && VAR_9 == ((void*)0))
    {
        FUNC_1("No callback\n");
        return VAR_0;
    }

    if (VAR_11)
    {

        VAR_12 = VAR_3;
    }
    else
    {

        VAR_12 = VAR_4;
    }

    if (VAR_6)
    {

        VAR_13 = FUNC_2(VAR_8, VAR_9, ((void*)0), VAR_12, ((void*)0), L"", VAR_10);
        if (!VAR_13)
        {

            return VAR_1;
        }


        VAR_14 = VAR_6;

        do
        {
            if (VAR_11 && !FUNC_4(&VAR_14->DeviceGuid[1], &VAR_2))
            {
                FUNC_5(&VAR_15, sizeof(WAVEOUTCAPSW));


                FUNC_0(VAR_14->MappedId[1] != VAR_7);


                FUNC_7((UINT_PTR)VAR_14->MappedId[1], &VAR_15, sizeof(WAVEOUTCAPSW));
                VAR_15.szPname[VAR_5-1] = L'\0';

                VAR_13 = FUNC_2(VAR_8, VAR_9, &VAR_14->DeviceGuid[1], 0, VAR_15.szPname, L"" , VAR_10);
                if (!VAR_13)
                {

                    return VAR_1;
                }
            }
            else if (!VAR_11 && !FUNC_4(&VAR_14->DeviceGuid[0], &VAR_2))
            {
                FUNC_5(&VAR_16, sizeof(WAVEINCAPSW));


                FUNC_0(VAR_14->MappedId[1] != VAR_7);


                FUNC_6((UINT_PTR)VAR_14->MappedId[0], &VAR_16, sizeof(WAVEINCAPSW));
                VAR_16.szPname[VAR_5-1] = L'\0';

                VAR_13 = FUNC_2(VAR_8, VAR_9, &VAR_14->DeviceGuid[0], 0, VAR_16.szPname, L"" , VAR_10);
                if (!VAR_13)
                {

                    return VAR_1;
                }
            }


            VAR_14 = VAR_14->lpNext;
        }while(VAR_14);
    }
    return VAR_1;
}
