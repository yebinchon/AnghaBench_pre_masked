
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ AdapterInterfaceType; } ;
struct TYPE_12__ {TYPE_2__ HwInitData; } ;
struct TYPE_9__ {struct TYPE_9__* Flink; } ;
struct TYPE_11__ {TYPE_1__ InitDataListHead; } ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef TYPE_2__* PHW_INITIALIZATION_DATA ;
typedef TYPE_3__* PDRIVER_OBJECT_EXTENSION ;
typedef TYPE_4__* PDRIVER_INIT_DATA ;
typedef scalar_t__ INTERFACE_TYPE ;


 TYPE_4__* FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

PHW_INITIALIZATION_DATA
FUNC_2(
    PDRIVER_OBJECT_EXTENSION VAR_2,
    INTERFACE_TYPE VAR_3)
{
    PDRIVER_INIT_DATA VAR_4;
    PLIST_ENTRY VAR_5;

    FUNC_1("PortGetDriverInitData()\n");

    VAR_5 = VAR_2->InitDataListHead.Flink;
    while (VAR_5 != &VAR_2->InitDataListHead)
    {
        VAR_4 = FUNC_0(VAR_5,
                                     VAR_0,
                                     VAR_1);
        if (VAR_4->HwInitData.AdapterInterfaceType == VAR_3)
            return &VAR_4->HwInitData;

        VAR_5 = VAR_5->Flink;
    }

    return ((void*)0);
}
