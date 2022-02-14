
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_10__ {int Entry; } ;
struct TYPE_8__ {struct TYPE_8__* Flink; } ;
struct TYPE_9__ {TYPE_1__ InitDataListHead; } ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef TYPE_2__* PDRIVER_OBJECT_EXTENSION ;
typedef TYPE_3__* PDRIVER_INIT_DATA ;


 TYPE_3__* FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;

__attribute__((used)) static
VOID
FUNC_4(
    PDRIVER_OBJECT_EXTENSION VAR_3)
{
    PDRIVER_INIT_DATA VAR_4;
    PLIST_ENTRY VAR_5;

    FUNC_1("PortDeleteDriverInitData()\n");

    VAR_5 = VAR_3->InitDataListHead.Flink;
    while (VAR_5 != &VAR_3->InitDataListHead)
    {
        VAR_4 = FUNC_0(VAR_5,
                                     VAR_0,
                                     VAR_1);

        FUNC_3(&VAR_4->Entry);

        FUNC_2(VAR_4,
                          VAR_2);

        VAR_5 = VAR_3->InitDataListHead.Flink;
    }
}
