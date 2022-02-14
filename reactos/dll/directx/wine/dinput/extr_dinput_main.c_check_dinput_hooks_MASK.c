
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {int dwCoopLevel; } ;
typedef int LPDIRECTINPUTDEVICE8W ;
typedef TYPE_1__ IDirectInputDeviceImpl ;
typedef int * HHOOK ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__,int,int ) ;
 int * FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_8 (int ) ;

void FUNC_9(LPDIRECTINPUTDEVICE8W VAR_9, BOOL VAR_10)
{
    static HHOOK VAR_11;
    static ULONG VAR_12;
    IDirectInputDeviceImpl *VAR_13 = FUNC_8(VAR_9);

    FUNC_1(&VAR_6);

    if (VAR_13->dwCoopLevel & VAR_1)
    {
        if (VAR_10)
            VAR_12++;
        else
            VAR_12--;
    }

    if (VAR_12 && !VAR_11)
        VAR_11 = FUNC_5( VAR_3, VAR_5,
                                              VAR_0, FUNC_2() );
    else if (!VAR_12 && VAR_11)
    {
        FUNC_6( VAR_11 );
        VAR_11 = ((void*)0);
    }

    if (VAR_7)
    {
        FUNC_7(VAR_7, VAR_2);
        FUNC_0(VAR_7);
        VAR_7 = ((void*)0);
    }

    FUNC_4( VAR_8, VAR_4+0x10, 1, 0 );

    FUNC_3(&VAR_6);
}
