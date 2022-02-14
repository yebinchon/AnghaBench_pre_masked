
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int stopping; int paused; scalar_t__ thread; int event; int error; } ;
struct TYPE_6__ {scalar_t__ thread; } ;
struct TYPE_8__ {TYPE_2__ scrub; scalar_t__ readonly; TYPE_1__ balance; scalar_t__ locked; } ;
typedef TYPE_3__ device_extension ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int KPROCESSOR_MODE ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int *,int ,int *,int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__*,int ,int *,int *,int *,int ,TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 int VAR_7 ;

NTSTATUS FUNC_8(device_extension* VAR_8, KPROCESSOR_MODE VAR_9) {
    NTSTATUS VAR_10;
    OBJECT_ATTRIBUTES VAR_11;

    if (!FUNC_6(FUNC_5(VAR_2), VAR_9))
        return VAR_5;

    if (VAR_8->locked) {
        FUNC_7("cannot start scrub while locked\n");
        return VAR_3;
    }

    if (VAR_8->balance.thread) {
        FUNC_7("cannot start scrub while balance running\n");
        return VAR_3;
    }

    if (VAR_8->scrub.thread) {
        FUNC_7("scrub already running\n");
        return VAR_3;
    }

    if (VAR_8->readonly)
        return VAR_4;

    VAR_8->scrub.stopping = 0;
    VAR_8->scrub.paused = 0;
    VAR_8->scrub.error = VAR_6;
    FUNC_2(&VAR_8->scrub.event, VAR_0, !VAR_8->scrub.paused);

    FUNC_1(&VAR_11, ((void*)0), VAR_1, ((void*)0), ((void*)0));

    VAR_10 = FUNC_4(&VAR_8->scrub.thread, 0, &VAR_11, ((void*)0), ((void*)0), VAR_7, VAR_8);
    if (!FUNC_3(VAR_10)) {
        FUNC_0("PsCreateSystemThread returned %08x\n", VAR_10);
        return VAR_10;
    }

    return VAR_6;
}
