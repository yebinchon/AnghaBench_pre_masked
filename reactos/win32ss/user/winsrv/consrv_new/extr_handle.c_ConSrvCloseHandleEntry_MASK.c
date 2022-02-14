
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_14__ {int ReadWaitQueue; } ;
struct TYPE_13__ {TYPE_3__* Object; } ;
struct TYPE_12__ {scalar_t__ Type; } ;
struct TYPE_10__ {scalar_t__ Flink; scalar_t__ Blink; } ;
struct TYPE_11__ {TYPE_1__ ListEntry; } ;
typedef int PVOID ;
typedef TYPE_2__* PCONSOLE_SCREEN_BUFFER ;
typedef TYPE_3__* PCONSOLE_IO_OBJECT ;
typedef TYPE_4__* PCONSOLE_IO_HANDLE ;
typedef TYPE_5__* PCONSOLE_INPUT_BUFFER ;


 scalar_t__ FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_4__*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static VOID
FUNC_8(PCONSOLE_IO_HANDLE VAR_4)
{
    PCONSOLE_IO_OBJECT VAR_5 = VAR_4->Object;
    if (VAR_5 != ((void*)0))
    {







        if (VAR_5->Type == VAR_1)
        {
            PCONSOLE_INPUT_BUFFER VAR_6 = (PCONSOLE_INPUT_BUFFER)VAR_5;
            FUNC_3(&VAR_6->ReadWaitQueue,
                          VAR_3,
                          ((void*)0),
                          (PVOID)VAR_4);
            if (!FUNC_6(&VAR_6->ReadWaitQueue))
            {
                FUNC_2(&VAR_6->ReadWaitQueue);
            }
        }


        if (FUNC_0(VAR_4, -1) == 0)
        {
            if (VAR_5->Type == VAR_2 || VAR_5->Type == VAR_0)
            {
                PCONSOLE_SCREEN_BUFFER VAR_7 = (PCONSOLE_SCREEN_BUFFER)VAR_5;



                if (VAR_7->ListEntry.Flink != VAR_7->ListEntry.Blink)
                    FUNC_1(VAR_7);
            }
            else if (VAR_5->Type == VAR_1)
            {
                FUNC_4("Closing the input buffer\n");
            }
            else
            {
                FUNC_5("Invalid object type %d\n", VAR_5->Type);
            }
        }






    }
    FUNC_7(VAR_4, sizeof(*VAR_4));
}
