
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_17__ ;


typedef int dps ;
typedef int data_format ;
typedef char WCHAR ;
struct TYPE_29__ {int dwSize; int dwObjSize; int dwNumObjs; scalar_t__ rgodf; int dwDataSize; int dwFlags; } ;
struct TYPE_28__ {unsigned int offset; unsigned int dwOfs; int uAppData; } ;
struct TYPE_20__ {int dwSize; int dwHeaderSize; void* dwHow; scalar_t__ dwObj; } ;
struct TYPE_27__ {scalar_t__ dwData; TYPE_17__ diph; } ;
struct TYPE_26__ {TYPE_17__ diph; int lMax; int lMin; } ;
struct TYPE_25__ {char* wsz; TYPE_17__ diph; } ;
struct TYPE_24__ {int num_actions; TYPE_8__* action_map; int guid; scalar_t__ acquired; } ;
struct TYPE_23__ {int dwObjSize; } ;
struct TYPE_22__ {int dwNumActions; int dwGenre; int dwCRC; scalar_t__ dwBufferSize; int lAxisMax; int lAxisMin; TYPE_1__* rgoAction; int dwDataSize; } ;
struct TYPE_21__ {int dwObjID; int dwSemantic; int uAppData; int guidInstance; } ;
typedef int LPDIRECTINPUTDEVICE8W ;
typedef scalar_t__ LPDIOBJECTDATAFORMAT ;
typedef TYPE_2__* LPDIACTIONFORMATW ;
typedef char* LPCWSTR ;
typedef TYPE_3__* LPCDIDATAFORMAT ;
typedef TYPE_4__ IDirectInputDeviceImpl ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_5__ DIPROPSTRING ;
typedef TYPE_6__ DIPROPRANGE ;
typedef int DIPROPHEADER ;
typedef TYPE_7__ DIPROPDWORD ;
typedef TYPE_8__ DIOBJECTDATAFORMAT ;
typedef TYPE_9__ DIDATAFORMAT ;
typedef int ActionMap ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int*) ;
 void* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,TYPE_8__*) ;
 int FUNC_7 (int ,TYPE_9__*) ;
 int FUNC_8 (int ,int ,TYPE_17__*) ;
 int VAR_14 ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int VAR_15 ;
 int FUNC_10 (char*,scalar_t__,int,int) ;
 scalar_t__ FUNC_11 (TYPE_3__*,int,int) ;
 TYPE_4__* FUNC_12 (int ) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (TYPE_8__*,scalar_t__,int ) ;
 int FUNC_15 (int ,TYPE_2__*,char*) ;
 int FUNC_16 (TYPE_4__*,int) ;

HRESULT FUNC_17(LPDIRECTINPUTDEVICE8W VAR_16, LPDIACTIONFORMATW VAR_17, LPCWSTR VAR_18, DWORD VAR_19, LPCDIDATAFORMAT VAR_20)
{
    IDirectInputDeviceImpl *VAR_21 = FUNC_12(VAR_16);
    DIDATAFORMAT VAR_22;
    DIOBJECTDATAFORMAT *VAR_23 = ((void*)0);
    DIPROPDWORD VAR_24;
    DIPROPRANGE VAR_25;
    DIPROPSTRING VAR_26;
    WCHAR VAR_27[VAR_15];
    DWORD VAR_28 = VAR_15;
    DWORD VAR_29 = 0;
    int VAR_30, VAR_31 = 0, VAR_32 = 0;
    unsigned int VAR_33 = 0;

    if (VAR_21->acquired) return VAR_7;

    VAR_22.dwSize = sizeof(VAR_22);
    VAR_22.dwObjSize = sizeof(DIOBJECTDATAFORMAT);
    VAR_22.dwFlags = VAR_4;
    VAR_22.dwDataSize = VAR_17->dwDataSize;


    for (VAR_30=0; VAR_30 < VAR_17->dwNumActions; VAR_30++)
    {
        VAR_29 ^= (VAR_17->rgoAction[VAR_30].dwObjID << VAR_30 * 2) | (VAR_17->rgoAction[VAR_30].dwObjID >> (sizeof(VAR_17->dwCRC) * 8 - VAR_30 * 2));
        VAR_29 ^= (VAR_17->rgoAction[VAR_30].dwSemantic << (VAR_30 * 2 + 5)) | (VAR_17->rgoAction[VAR_30].dwSemantic >> (sizeof(VAR_17->dwCRC) * 8 - (VAR_30 * 2 + 5)));
    }


    for (VAR_30=0; VAR_30 < VAR_17->dwNumActions; VAR_30++)
    {
        if (FUNC_9(&VAR_21->guid, &VAR_17->rgoAction[VAR_30].guidInstance) ||
                (FUNC_9(&VAR_14, &VAR_17->rgoAction[VAR_30].guidInstance) &&
                  ((VAR_17->rgoAction[VAR_30].dwSemantic & VAR_17->dwGenre) == VAR_17->dwGenre ||
                   (VAR_17->rgoAction[VAR_30].dwSemantic & 0xff000000) == 0xff000000 ) ))
        {
            VAR_32++;
        }
    }


    if (VAR_32 == 0 && VAR_17->dwCRC == VAR_29 && !(VAR_19 & VAR_5)) return VAR_12;


    VAR_17->dwCRC = VAR_29;

    VAR_21->num_actions = VAR_32;


    VAR_23 = FUNC_5(FUNC_3(), 0, sizeof(DIOBJECTDATAFORMAT)*VAR_32);
    VAR_22.rgodf = (LPDIOBJECTDATAFORMAT)VAR_23;
    VAR_22.dwNumObjs = VAR_32;

    FUNC_6(FUNC_3(), 0, VAR_21->action_map);
    VAR_21->action_map = FUNC_5(FUNC_3(), 0, sizeof(ActionMap)*VAR_32);

    for (VAR_30 = 0; VAR_30 < VAR_17->dwNumActions; VAR_30++)
    {
        if (FUNC_9(&VAR_21->guid, &VAR_17->rgoAction[VAR_30].guidInstance))
        {
            DWORD VAR_34 = FUNC_1(VAR_17->rgoAction[VAR_30].dwObjID);
            DWORD VAR_35 = FUNC_2(VAR_17->rgoAction[VAR_30].dwObjID);
            LPDIOBJECTDATAFORMAT VAR_36;

            if (VAR_35 == VAR_2) VAR_35 = VAR_1;
            if (VAR_35 == VAR_3) VAR_35 = VAR_0;

            VAR_36 = FUNC_11(VAR_20, VAR_34, VAR_35);

            FUNC_14(&VAR_23[VAR_31], VAR_36, VAR_20->dwObjSize);

            VAR_21->action_map[VAR_31].uAppData = VAR_17->rgoAction[VAR_30].uAppData;
            VAR_21->action_map[VAR_31].offset = VAR_33;
            VAR_23[VAR_31].dwOfs = VAR_33;
            VAR_33 += (VAR_35 & VAR_1) ? 1 : 4;

            VAR_31++;
        }
        else if ((VAR_17->rgoAction[VAR_30].dwSemantic & VAR_17->dwGenre) == VAR_17->dwGenre ||
                 (VAR_17->rgoAction[VAR_30].dwSemantic & 0xff000000) == 0xff000000 )
        {
            DWORD VAR_37 = FUNC_16(VAR_21, VAR_17->rgoAction[VAR_30].dwSemantic);
            DWORD VAR_38 = FUNC_2(VAR_37);
            DWORD VAR_39 = FUNC_1(VAR_37);
            LPDIOBJECTDATAFORMAT VAR_40;

            if (VAR_38 == VAR_2) VAR_38 = VAR_1;
            else if (VAR_38 == VAR_3) VAR_38 = VAR_0;

            VAR_40 = FUNC_11(VAR_20, VAR_39, VAR_38);
            FUNC_10("obj %p, inst 0x%08x, type 0x%08x\n", VAR_40, VAR_39, VAR_38);
            if(VAR_40)
            {
                FUNC_14(&VAR_23[VAR_31], VAR_40, VAR_20->dwObjSize);

                VAR_21->action_map[VAR_31].uAppData = VAR_17->rgoAction[VAR_30].uAppData;
                VAR_21->action_map[VAR_31].offset = VAR_33;
                VAR_23[VAR_31].dwOfs = VAR_33;
                VAR_33 += (VAR_38 & VAR_1) ? 1 : 4;

                VAR_31++;
            }
        }
    }

    if (VAR_31 == 0)
    {
        FUNC_6(FUNC_3(), 0, VAR_23);
        return VAR_12;
    }
    VAR_22.dwNumObjs = VAR_31;

    FUNC_7(VAR_16, &VAR_22);

    FUNC_6(FUNC_3(), 0, VAR_23);


    VAR_25.diph.dwSize = sizeof(DIPROPRANGE);
    VAR_25.lMin = VAR_17->lAxisMin;
    VAR_25.lMax = VAR_17->lAxisMax;
    VAR_25.diph.dwHeaderSize = sizeof(DIPROPHEADER);
    VAR_25.diph.dwHow = VAR_8;
    FUNC_8(VAR_16, VAR_10, &VAR_25.diph);

    if (VAR_17->dwBufferSize > 0)
    {
        VAR_24.diph.dwSize = sizeof(DIPROPDWORD);
        VAR_24.dwData = VAR_17->dwBufferSize;
        VAR_24.diph.dwHeaderSize = sizeof(DIPROPHEADER);
        VAR_24.diph.dwHow = VAR_8;
        FUNC_8(VAR_16, VAR_9, &VAR_24.diph);
    }


    if (VAR_18 == ((void*)0))
        FUNC_4(VAR_27, &VAR_28);
    else
        FUNC_13(VAR_27, VAR_18, VAR_15);

    VAR_26.diph.dwSize = sizeof(VAR_26);
    VAR_26.diph.dwHeaderSize = sizeof(DIPROPHEADER);
    VAR_26.diph.dwObj = 0;
    VAR_26.diph.dwHow = VAR_8;
    if (VAR_19 & VAR_6)
        VAR_26.wsz[0] = '\0';
    else
        FUNC_13(VAR_26.wsz, VAR_27, FUNC_0(VAR_26.wsz));
    FUNC_8(VAR_16, VAR_11, &VAR_26.diph);


    FUNC_15(VAR_16, VAR_17, VAR_27);

    return VAR_13;
}
