
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Entry; int HwInitData; } ;
struct TYPE_5__ {int InitDataListHead; } ;
typedef int PHW_INITIALIZATION_DATA ;
typedef TYPE_1__* PDRIVER_OBJECT_EXTENSION ;
typedef TYPE_2__* PDRIVER_INIT_DATA ;
typedef int NTSTATUS ;
typedef int HW_INITIALIZATION_DATA ;
typedef int DRIVER_INIT_DATA ;


 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static
NTSTATUS
FUNC_4(
    PDRIVER_OBJECT_EXTENSION VAR_4,
    PHW_INITIALIZATION_DATA VAR_5)
{
    PDRIVER_INIT_DATA VAR_6;

    FUNC_0("PortAddDriverInitData()\n");

    VAR_6 = FUNC_1(VAR_0,
                                     sizeof(DRIVER_INIT_DATA),
                                     VAR_3);
    if (VAR_6 == ((void*)0))
        return VAR_1;

    FUNC_3(&VAR_6->HwInitData,
                  VAR_5,
                  sizeof(HW_INITIALIZATION_DATA));

    FUNC_2(&VAR_4->InitDataListHead,
                   &VAR_6->Entry);

    return VAR_2;
}
