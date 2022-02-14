
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {struct TYPE_13__* Flink; } ;
struct TYPE_14__ {TYPE_2__ ListenRequest; } ;
struct TYPE_12__ {int Entry; TYPE_3__* AssociatedEndpoint; } ;
typedef TYPE_1__* PTDI_BUCKET ;
typedef TYPE_2__* PLIST_ENTRY ;
typedef TYPE_3__* PCONNECTION_ENDPOINT ;
typedef int KIRQL ;
typedef int BOOLEAN ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_3__*,int ) ;

BOOLEAN FUNC_6
( PCONNECTION_ENDPOINT VAR_5,
    PCONNECTION_ENDPOINT VAR_6)
{
    PLIST_ENTRY VAR_7;
    PTDI_BUCKET VAR_8;
    KIRQL VAR_9;
    BOOLEAN VAR_10 = VAR_1;

    FUNC_3(VAR_5, &VAR_9);

    VAR_7 = VAR_5->ListenRequest.Flink;
    while (VAR_7 != &VAR_5->ListenRequest)
    {
        VAR_8 = FUNC_0(VAR_7, VAR_2, VAR_0);

        if (VAR_8->AssociatedEndpoint == VAR_6)
        {
            FUNC_1(VAR_8->AssociatedEndpoint);
            FUNC_4( &VAR_8->Entry );
            FUNC_2(&VAR_4, VAR_8);
            VAR_10 = VAR_3;
            break;
        }

        VAR_7 = VAR_7->Flink;
    }

    FUNC_5(VAR_5, VAR_9);

    return VAR_10;
}
