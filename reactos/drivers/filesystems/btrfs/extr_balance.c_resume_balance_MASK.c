
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int paused; int event; int thread; } ;
struct TYPE_5__ {TYPE_1__ balance; scalar_t__ readonly; } ;
typedef TYPE_2__ device_extension ;
typedef int NTSTATUS ;
typedef int KPROCESSOR_MODE ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;

NTSTATUS FUNC_3(device_extension* VAR_5, KPROCESSOR_MODE VAR_6) {
    if (!FUNC_2(FUNC_1(VAR_0), VAR_6))
        return VAR_3;

    if (!VAR_5->balance.thread)
        return VAR_1;

    if (!VAR_5->balance.paused)
        return VAR_1;

    if (VAR_5->readonly)
        return VAR_2;

    VAR_5->balance.paused = 0;
    FUNC_0(&VAR_5->balance.event, 0, 0);

    return VAR_4;
}
