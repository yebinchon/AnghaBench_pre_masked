
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* ready_event; void* go_event; int handle; } ;
struct TYPE_8__ {scalar_t__ device_type; TYPE_1__ thread; } ;
typedef TYPE_2__ SessionInfo ;
typedef scalar_t__ MMRESULT ;
typedef TYPE_2__* LPTASKCALLBACK ;
typedef int DWORD_PTR ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (void*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *,int ) ;

MMRESULT
FUNC_6(SessionInfo* VAR_6)
{
    LPTASKCALLBACK VAR_7;
    MMRESULT VAR_8;

    FUNC_0(VAR_6);



    VAR_6->thread.ready_event = FUNC_2(((void*)0), VAR_0, VAR_0, ((void*)0));

    if ( ! VAR_6->thread.ready_event )
    {
        FUNC_3("Couldn't create thread_ready event\n");
        return VAR_3;
    }



    VAR_6->thread.go_event = FUNC_2(((void*)0), VAR_0, VAR_0, ((void*)0));

    if ( ! VAR_6->thread.go_event )
    {
        FUNC_3("Couldn't create thread_go event\n");
        FUNC_1(VAR_6->thread.ready_event);
        return VAR_3;
    }


    VAR_7 = ( VAR_6->device_type == VAR_4 )
           ? (LPTASKCALLBACK) VAR_5 : ((void*)0);

    FUNC_0(VAR_7);



    VAR_8 = FUNC_5(VAR_7,
                          &VAR_6->thread.handle,
                          (DWORD_PTR)VAR_6);

    if ( VAR_8 != VAR_2 )
    {
        FUNC_3("Task creation failed\n");
        FUNC_1(VAR_6->thread.ready_event);
        FUNC_1(VAR_6->thread.go_event);
        return VAR_8;
    }



    FUNC_4(VAR_6->thread.ready_event, VAR_1);

    return VAR_2;
}
