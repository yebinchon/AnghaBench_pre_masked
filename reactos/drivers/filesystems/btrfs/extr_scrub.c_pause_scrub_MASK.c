
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ QuadPart; } ;
struct TYPE_8__ {int QuadPart; } ;
struct TYPE_10__ {int paused; TYPE_2__ resume_time; TYPE_1__ duration; int event; int thread; } ;
struct TYPE_11__ {TYPE_3__ scrub; } ;
typedef TYPE_4__ device_extension ;
struct TYPE_12__ {scalar_t__ QuadPart; } ;
typedef int NTSTATUS ;
typedef TYPE_5__ LARGE_INTEGER ;
typedef int KPROCESSOR_MODE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;

NTSTATUS FUNC_4(device_extension* VAR_4, KPROCESSOR_MODE VAR_5) {
    LARGE_INTEGER VAR_6;

    if (!FUNC_3(FUNC_2(VAR_0), VAR_5))
        return VAR_2;

    if (!VAR_4->scrub.thread)
        return VAR_1;

    if (VAR_4->scrub.paused)
        return VAR_1;

    VAR_4->scrub.paused = 1;
    FUNC_0(&VAR_4->scrub.event);

    FUNC_1(&VAR_6);
    VAR_4->scrub.duration.QuadPart += VAR_6.QuadPart - VAR_4->scrub.resume_time.QuadPart;

    return VAR_3;
}
