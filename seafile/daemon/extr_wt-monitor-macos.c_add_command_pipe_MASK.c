
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * member_4; int * member_3; int * member_2; TYPE_1__* member_1; int member_0; } ;
struct TYPE_5__ {int * cmd_pipe; } ;
typedef TYPE_1__ SeafWTMonitor ;
typedef int CFRunLoopSourceRef ;
typedef int * CFFileDescriptorRef ;
typedef TYPE_2__ CFFileDescriptorContext ;


 int * FUNC_0 (int *,int ,int,int ,TYPE_2__*) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_6 (SeafWTMonitor *VAR_4)
{
    CFFileDescriptorContext VAR_5 = {0, VAR_4, ((void*)0), ((void*)0), ((void*)0)};
    CFFileDescriptorRef VAR_6 = FUNC_0(((void*)0),
                                                       VAR_4->cmd_pipe[0], 1,
                                                       VAR_0, &VAR_5);
    if (VAR_6 == ((void*)0)) {
        return -1;
    }

    FUNC_2(VAR_6, VAR_2);
    CFRunLoopSourceRef VAR_7 = FUNC_1(VAR_1, VAR_6, 0);
    FUNC_4 (FUNC_5(), VAR_7, VAR_3);
    FUNC_3(VAR_7);
    return 0;
}
