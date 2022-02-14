
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int overlap ;
struct TYPE_5__ {int hEvent; } ;
typedef int PBYTE ;
typedef TYPE_1__ OVERLAPPED ;
typedef int MMRESULT ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int *,int ,int ,int ,int *,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,TYPE_1__*,int *,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;

MMRESULT
FUNC_10(
    HANDLE VAR_6,
    DWORD VAR_7,
    PBYTE VAR_8,
    DWORD VAR_9)
{
    OVERLAPPED VAR_10;
    DWORD VAR_11;
    BOOL VAR_12;
    DWORD VAR_13;

    FUNC_2("GetDeviceData\n");

    FUNC_9(&VAR_10, 0, sizeof(VAR_10));

    VAR_10.hEvent = FUNC_1(((void*)0), VAR_1, VAR_1, ((void*)0));

    if ( ! VAR_10.hEvent )
        return VAR_3;

    VAR_12 = FUNC_3(VAR_6,
                              VAR_7,
                              ((void*)0),
                              0,
                              VAR_8,
                              VAR_9,
                              &VAR_11,
                              &VAR_10);

    if ( ! VAR_12 )
    {
        if ( FUNC_5() == VAR_0 )
        {
            if ( ! FUNC_6(VAR_6, &VAR_10, &VAR_13, VAR_4) )
            {
                FUNC_0(VAR_10.hEvent);
                return FUNC_4(FUNC_5());
            }
        }
        else
        {
            FUNC_0(VAR_10.hEvent);
            return FUNC_4(FUNC_5());
        }
    }

    while ( VAR_4 )
    {
        FUNC_7(VAR_10.hEvent);

        if ( FUNC_8(VAR_10.hEvent, 0, VAR_4) != VAR_5 )
        {
            break;
        }
    }

    FUNC_0(VAR_10.hEvent);

    return VAR_2;
}
