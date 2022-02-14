
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ function; int ready_event; int result; int go_event; } ;
struct TYPE_7__ {TYPE_1__ thread; } ;
typedef TYPE_2__ SessionInfo ;
typedef int MMRESULT ;
typedef scalar_t__ LPVOID ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;

DWORD
FUNC_8(LPVOID VAR_7)
{
    MMRESULT VAR_8 = VAR_3;
    SessionInfo* VAR_9 = (SessionInfo*) VAR_7;
    BOOL VAR_10 = VAR_1;


    FUNC_6(FUNC_1(), VAR_4);

    FUNC_0("Wave processing thread setting ready state\n");

    FUNC_5(VAR_9->thread.ready_event);

    while ( ! VAR_10 )
    {

        while ( FUNC_7(VAR_9->thread.go_event,
                                      VAR_2,
                                      VAR_5) == VAR_6 )
        {

            FUNC_4(VAR_9);
        }

        FUNC_0("Wave processing thread woken up\n");


        VAR_10 = (VAR_9->thread.function == VAR_0);


        FUNC_0("Processing thread request\n");
        VAR_8 = FUNC_3(VAR_9);


        VAR_9->thread.result = VAR_8;


        FUNC_0("Performing wave I/O\n");
        FUNC_2(VAR_9);


        FUNC_0("Wave processing thread sleeping\n");
        FUNC_5(VAR_9->thread.ready_event);
    }

    return 0;
}
