
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int dwNumObjs; } ;
struct TYPE_7__ {TYPE_6__* wine_df; } ;
struct TYPE_9__ {TYPE_1__ data_format; } ;
struct TYPE_8__ {int dwOfs; int dwType; } ;
typedef TYPE_2__* LPDIOBJECTDATAFORMAT ;
typedef TYPE_3__ IDirectInputDeviceImpl ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_1 (TYPE_6__*,int) ;

__attribute__((used)) static DWORD FUNC_2(IDirectInputDeviceImpl* VAR_6, DWORD VAR_7)
{
    DWORD VAR_8 = (0x0000ff00 & VAR_7) >> 8;
    DWORD VAR_9 = 0x000000ff & VAR_7;
    DWORD VAR_10 = 0;
    BOOL VAR_11 = VAR_4;
    int VAR_12;

    for (VAR_12 = 0; VAR_12 < VAR_6->data_format.wine_df->dwNumObjs; VAR_12++)
    {
        LPDIOBJECTDATAFORMAT VAR_13 = FUNC_1(VAR_6->data_format.wine_df, VAR_12);

        if (VAR_13->dwOfs == VAR_9)
        {
            VAR_10 = FUNC_0(VAR_13->dwType);
            VAR_11 = VAR_5;
            break;
        }
    }

    if (!VAR_11) return 0;

    if (VAR_8 & VAR_0) VAR_8 = VAR_3;
    if (VAR_8 & VAR_1) VAR_8 = VAR_2;

    return VAR_8 | (0x0000ff00 & (VAR_10 << 8));
}
