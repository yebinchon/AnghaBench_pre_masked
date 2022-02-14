
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_10__ {TYPE_1__* Router; } ;
struct TYPE_9__ {struct TYPE_9__* Flink; } ;
struct TYPE_8__ {scalar_t__ Interface; } ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef scalar_t__ PIP_INTERFACE ;
typedef TYPE_3__* PFIB_ENTRY ;
typedef int KIRQL ;


 TYPE_3__* FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;

VOID FUNC_4(PIP_INTERFACE VAR_4)
{
    KIRQL VAR_5;
    PLIST_ENTRY VAR_6;
    PLIST_ENTRY VAR_7;
    PFIB_ENTRY VAR_8;

    FUNC_2(&VAR_1, &VAR_5);

    VAR_6 = VAR_0.Flink;
    while (VAR_6 != &VAR_0) {
        VAR_7 = VAR_6->Flink;
        VAR_8 = FUNC_0(VAR_6, VAR_2, VAR_3);

        if (VAR_4 == VAR_8->Router->Interface)
            FUNC_1(VAR_8);

        VAR_6 = VAR_7;
    }

    FUNC_3(&VAR_1, VAR_5);
}
