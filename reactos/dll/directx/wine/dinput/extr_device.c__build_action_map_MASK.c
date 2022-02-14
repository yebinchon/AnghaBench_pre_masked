
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_12__ {int guid; } ;
struct TYPE_11__ {int dwNumActions; int dwCRC; TYPE_1__* rgoAction; } ;
struct TYPE_10__ {int dwObjID; int dwSemantic; int dwHow; int guidInstance; } ;
typedef int LPDIRECTINPUTDEVICE8W ;
typedef int * LPDIOBJECTDATAFORMAT ;
typedef TYPE_2__* LPDIACTIONFORMATW ;
typedef int * LPCWSTR ;
typedef int LPCDIDATAFORMAT ;
typedef TYPE_3__ IDirectInputDeviceImpl ;
typedef int HRESULT ;
typedef int GUID ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (int ,TYPE_2__*,int *,scalar_t__) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int * FUNC_4 (int ,scalar_t__,scalar_t__) ;
 TYPE_3__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_2__*,int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_3__*,scalar_t__) ;

HRESULT FUNC_10(LPDIRECTINPUTDEVICE8W VAR_13, LPDIACTIONFORMATW VAR_14, LPCWSTR VAR_15, DWORD VAR_16, DWORD VAR_17, LPCDIDATAFORMAT VAR_18)
{
    IDirectInputDeviceImpl *VAR_19 = FUNC_5(VAR_13);
    WCHAR VAR_20[VAR_11];
    DWORD VAR_21 = VAR_11;
    int VAR_22;
    BOOL VAR_23 = VAR_10, VAR_24 = VAR_10;


    if (!(VAR_16 & VAR_2))
    {

        if (VAR_15 == ((void*)0))
            FUNC_2(VAR_20, &VAR_21);
        else
            FUNC_7(VAR_20, VAR_15, VAR_11);

        VAR_23 = FUNC_6(VAR_19, VAR_14, VAR_20);
    }

    if (VAR_23) {

        for (VAR_22=0; VAR_22 < VAR_14->dwNumActions; VAR_22++)
        {
            VAR_14->dwCRC ^= (VAR_14->rgoAction[VAR_22].dwObjID << VAR_22 * 2) | (VAR_14->rgoAction[VAR_22].dwObjID >> (sizeof(VAR_14->dwCRC) * 8 - VAR_22 * 2));
            VAR_14->dwCRC ^= (VAR_14->rgoAction[VAR_22].dwSemantic << (VAR_22 * 2 + 5)) | (VAR_14->rgoAction[VAR_22].dwSemantic >> (sizeof(VAR_14->dwCRC) * 8 - (VAR_22 * 2 + 5)));
        }
        return VAR_9;
    }

    for (VAR_22=0; VAR_22 < VAR_14->dwNumActions; VAR_22++)
    {
        if ((VAR_14->rgoAction[VAR_22].dwSemantic & VAR_17) == VAR_17)
        {
            DWORD VAR_25 = FUNC_9(VAR_19, VAR_14->rgoAction[VAR_22].dwSemantic);
            DWORD VAR_26 = FUNC_1(VAR_25);
            DWORD VAR_27 = FUNC_0(VAR_25);

            LPDIOBJECTDATAFORMAT VAR_28;

            if (VAR_26 == VAR_6) VAR_26 = VAR_5;
            if (VAR_26 == VAR_7) VAR_26 = VAR_4;


            VAR_28 = FUNC_4(VAR_18, VAR_27, VAR_26);

            if (VAR_28 != ((void*)0))
            {
                VAR_14->rgoAction[VAR_22].dwObjID = VAR_25;
                VAR_14->rgoAction[VAR_22].guidInstance = VAR_19->guid;
                VAR_14->rgoAction[VAR_22].dwHow = VAR_0;
                VAR_24 = VAR_12;
            }
        }
        else if (!(VAR_16 & VAR_3))
        {

            FUNC_8(&VAR_14->rgoAction[VAR_22].guidInstance, 0, sizeof(GUID));
            VAR_14->rgoAction[VAR_22].dwHow = VAR_1;
        }
    }


    VAR_14->dwCRC = 0;
    for (VAR_22=0; VAR_22 < VAR_14->dwNumActions; VAR_22++)
    {
        VAR_14->dwCRC ^= (VAR_14->rgoAction[VAR_22].dwObjID << VAR_22 * 2) | (VAR_14->rgoAction[VAR_22].dwObjID >> (sizeof(VAR_14->dwCRC) * 8 - VAR_22 * 2));
        VAR_14->dwCRC ^= (VAR_14->rgoAction[VAR_22].dwSemantic << (VAR_22 * 2 + 5)) | (VAR_14->rgoAction[VAR_22].dwSemantic >> (sizeof(VAR_14->dwCRC) * 8 - (VAR_22 * 2 + 5)));
    }

    if (!VAR_24) return VAR_8;

    return FUNC_3(VAR_13, VAR_14, VAR_15, VAR_16);
}
