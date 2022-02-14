
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bKeyDown; } ;
struct TYPE_7__ {TYPE_1__ KeyEvent; } ;
struct TYPE_8__ {scalar_t__ EventType; TYPE_2__ Event; } ;
typedef TYPE_3__* PINPUT_RECORD ;
typedef int INPUT_RECORD ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_3__*,int,int*) ;
 int VAR_4 ;
 int FUNC_7 (int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (int) ;

int FUNC_10(void)
{
    PINPUT_RECORD VAR_7 = ((void*)0);
    DWORD VAR_8 = 0;
    DWORD VAR_9 = 0;
    DWORD VAR_10 = 0;
    DWORD VAR_11 = 0;
    HANDLE VAR_12 = 0;
    DWORD VAR_13 = 0;


    if (!VAR_1)
    {
        FUNC_4(&VAR_0, 0x80000400);
        VAR_1 = VAR_5;
    }

    FUNC_0(&VAR_0);

    if (VAR_6)
    {
        FUNC_5(&VAR_0);
        return 1;
    }

    VAR_12 = FUNC_3(VAR_4);


    FUNC_1(VAR_12, &VAR_13);

    FUNC_7(VAR_12, VAR_13 & ~VAR_2);


    if (!FUNC_2(VAR_12, &VAR_9))
    {
        FUNC_5(&VAR_0);
        return 0;
    }

    if (!VAR_9)
    {
        FUNC_5(&VAR_0);
        return 0;
    }

    if (!(VAR_7 = (PINPUT_RECORD)FUNC_9(VAR_9 * sizeof(INPUT_RECORD))))
    {
        FUNC_5(&VAR_0);
        return 0;
    }

    if (!FUNC_6(VAR_12, VAR_7, VAR_9, &VAR_8))
    {
        FUNC_8(VAR_7);
        FUNC_5(&VAR_0);
        return 0;
    }

    for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
    {
        if (VAR_7[VAR_10].EventType == VAR_3 &&
            VAR_7[VAR_10].Event.KeyEvent.bKeyDown)
        {
            VAR_11 = 1;
            break;
        }
    }

    FUNC_8(VAR_7);


    FUNC_7(VAR_12, VAR_13);

    FUNC_5(&VAR_0);

    return VAR_11;
}
