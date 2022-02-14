
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ threadId; int cs; scalar_t__ uTimer; int hwndSelf; scalar_t__ hStopEvent; scalar_t__ hThread; } ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ BOOL ;
typedef TYPE_1__ ANIMATE_INFO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (scalar_t__,int ) ;

__attribute__((used)) static BOOL FUNC_9(ANIMATE_INFO *VAR_4)
{
    BOOL VAR_5 = VAR_1;

    FUNC_2(&VAR_4->cs);


    if (VAR_4->hThread)
    {
        HANDLE VAR_6 = VAR_4->hThread;

        FUNC_7("stopping animation thread\n");
        VAR_4->hThread = 0;
        FUNC_6( VAR_4->hStopEvent );

        if (VAR_4->threadId != FUNC_3())
        {
            FUNC_5(&VAR_4->cs);
            FUNC_8( VAR_6, VAR_2 );
            FUNC_7("animation thread stopped\n");
            FUNC_2(&VAR_4->cs);
        }

        FUNC_1( VAR_6 );
        FUNC_1( VAR_4->hStopEvent );
        VAR_4->hStopEvent = 0;
        VAR_5 = VAR_3;
    }
    if (VAR_4->uTimer) {
 FUNC_4(VAR_4->hwndSelf, VAR_4->uTimer);
 VAR_4->uTimer = 0;
 VAR_5 = VAR_3;
    }

    FUNC_5(&VAR_4->cs);

    if (VAR_5)
        FUNC_0(VAR_4, VAR_0);

    return VAR_3;
}
