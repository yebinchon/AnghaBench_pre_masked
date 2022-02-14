
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_8__ {int Number; } ;
struct TYPE_7__ {int dwNumberOfProcessors; } ;
typedef TYPE_1__ SYSTEM_INFO ;
typedef TYPE_2__ PROCESSOR_POWER_INFORMATION ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (int ,int ,int ,TYPE_2__*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    NTSTATUS VAR_4;
    PROCESSOR_POWER_INFORMATION* VAR_5;
    ULONG VAR_6;
    SYSTEM_INFO VAR_7;
    int VAR_8;

    FUNC_1(&VAR_7);
    VAR_6 = VAR_7.dwNumberOfProcessors * sizeof(PROCESSOR_POWER_INFORMATION);
    VAR_5 = FUNC_2(FUNC_0(), 0, VAR_6);
    if (VAR_7.dwNumberOfProcessors > 1)
    {
        for(VAR_8 = 0; VAR_8 < VAR_7.dwNumberOfProcessors; VAR_8++)
            VAR_5[VAR_8].Number = 0xDEADBEEF;



        VAR_4 = FUNC_5(VAR_0, 0, 0, VAR_5, VAR_6 - sizeof(PROCESSOR_POWER_INFORMATION));
        if (VAR_4 == VAR_3)
        {

            FUNC_4( (VAR_5[VAR_7.dwNumberOfProcessors - 2].Number != 0xDEADBEEF) &&
                (VAR_5[VAR_7.dwNumberOfProcessors - 1].Number == 0xDEADBEEF),
                "Expected all but the last record to be overwritten.\n");

            VAR_4 = FUNC_5(VAR_0, 0, 0, 0, VAR_6);
            FUNC_4( VAR_4 == VAR_3, "Expected STATUS_SUCCESS, got %08x\n", VAR_4);

            for(VAR_8 = 0; VAR_8 < VAR_7.dwNumberOfProcessors; VAR_8++)
                VAR_5[VAR_8].Number = 0xDEADBEEF;
            VAR_4 = FUNC_5(VAR_0, 0, 0, VAR_5, sizeof(PROCESSOR_POWER_INFORMATION) - 1);
            FUNC_4( VAR_4 == VAR_3, "Expected STATUS_SUCCESS, got %08x\n", VAR_4);
            for(VAR_8 = 0; VAR_8 < VAR_7.dwNumberOfProcessors; VAR_8++)
                if (VAR_5[VAR_8].Number != 0xDEADBEEF) break;
            FUNC_4( VAR_8 == VAR_7.dwNumberOfProcessors, "Expected untouched buffer\n");
        }
        else
        {

            FUNC_4( VAR_5[1].Number == 0xDEADBEEF, "Expected untouched buffer.\n");
            FUNC_4( VAR_4 == VAR_1, "Expected STATUS_BUFFER_TOO_SMALL, got %08x\n", VAR_4);

            VAR_4 = FUNC_5(VAR_0, 0, 0, 0, VAR_6);
            FUNC_4( VAR_4 == VAR_3 || VAR_4 == VAR_2, "Got %08x\n", VAR_4);

            VAR_4 = FUNC_5(VAR_0, 0, 0, VAR_5, 0);
            FUNC_4( VAR_4 == VAR_1 || VAR_4 == VAR_2, "Got %08x\n", VAR_4);
        }
    }
    else
    {
        FUNC_6("Test needs more than one processor.\n");
    }

    VAR_4 = FUNC_5(VAR_0, 0, 0, VAR_5, VAR_6);
    FUNC_4( VAR_4 == VAR_3, "Expected STATUS_SUCCESS, got %08x\n", VAR_4);

    FUNC_3(FUNC_0(), 0, VAR_5);
}
