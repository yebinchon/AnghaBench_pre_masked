
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int paused; int stopping; int event; int status; int thread; } ;
struct TYPE_5__ {TYPE_1__ balance; } ;
typedef TYPE_2__ device_extension ;
typedef int NTSTATUS ;
typedef int KPROCESSOR_MODE ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;

NTSTATUS FUNC_3(device_extension* VAR_4, KPROCESSOR_MODE VAR_5) {
    if (!FUNC_2(FUNC_1(VAR_0), VAR_5))
        return VAR_2;

    if (!VAR_4->balance.thread)
        return VAR_1;

    VAR_4->balance.paused = 0;
    VAR_4->balance.stopping = 1;
    VAR_4->balance.status = VAR_3;
    FUNC_0(&VAR_4->balance.event, 0, 0);

    return VAR_3;
}
