
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
struct TYPE_8__ {scalar_t__ Port; scalar_t__ Protocol; scalar_t__ Sharers; } ;
struct TYPE_7__ {struct TYPE_7__* Flink; } ;
typedef TYPE_1__* PLIST_ENTRY ;
typedef int PIP_ADDRESS ;
typedef TYPE_2__* PADDRESS_FILE ;
typedef int KIRQL ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int VAR_3 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;

PADDRESS_FILE FUNC_5(
    PIP_ADDRESS VAR_4,
    USHORT VAR_5,
    USHORT VAR_6)
{
    PLIST_ENTRY VAR_7;
    KIRQL VAR_8;
    PADDRESS_FILE VAR_9 = ((void*)0);

    FUNC_3(&VAR_2, &VAR_8);

    VAR_7 = VAR_1.Flink;
    while (VAR_7 != &VAR_1) {
        VAR_9 = FUNC_1(VAR_7, VAR_0, VAR_3);


        if ((VAR_9->Port == VAR_5) &&
            (VAR_9->Protocol == VAR_6))
        {

            FUNC_0(VAR_9->Sharers != 0);
            FUNC_2(&VAR_9->Sharers);
            break;
        }

        VAR_7 = VAR_7->Flink;
        VAR_9 = ((void*)0);
    }

    FUNC_4(&VAR_2, VAR_8);

    return VAR_9;
}
