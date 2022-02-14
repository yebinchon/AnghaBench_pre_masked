
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_10__ {TYPE_1__* Router; } ;
struct TYPE_9__ {struct TYPE_9__* Flink; } ;
struct TYPE_8__ {scalar_t__ Interface; } ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef scalar_t__ PIP_INTERFACE ;
typedef TYPE_3__* PFIB_ENTRY ;


 TYPE_3__* FUNC_0 (TYPE_2__*,int ,int ) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

UINT FUNC_1( PIP_INTERFACE VAR_3, PFIB_ENTRY VAR_4 ) {
    UINT VAR_5 = 0;
    PLIST_ENTRY VAR_6;
    PLIST_ENTRY VAR_7;
    PFIB_ENTRY VAR_8;

    VAR_6 = VAR_0.Flink;
    while (VAR_6 != &VAR_0) {
        VAR_7 = VAR_6->Flink;
 VAR_8 = FUNC_0(VAR_6, VAR_1, VAR_2);
        if (VAR_8->Router->Interface == VAR_3)
        {
     VAR_4[VAR_5] = *VAR_8;
     VAR_5++;
        }
        VAR_6 = VAR_7;
    }

    return VAR_5;
}
