
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_10__ {int Lock; int ConnectRequest; } ;
struct TYPE_9__ {scalar_t__ Information; int Status; } ;
typedef TYPE_1__* PTDI_BUCKET ;
typedef int PLIST_ENTRY ;
typedef TYPE_2__* PCONNECTION_ENDPOINT ;
typedef int NTSTATUS ;


 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;

VOID
FUNC_5(PCONNECTION_ENDPOINT VAR_2, const NTSTATUS VAR_3)
{
    PTDI_BUCKET VAR_4;
    PLIST_ENTRY VAR_5;

    FUNC_4(VAR_2);

    while ((VAR_5 = FUNC_3(&VAR_2->ConnectRequest, &VAR_2->Lock)))
    {
        VAR_4 = FUNC_0( VAR_5, VAR_1, VAR_5 );

        VAR_4->Status = VAR_3;
        VAR_4->Information = 0;

        FUNC_1(VAR_2, VAR_4, VAR_0);
    }

    FUNC_2(VAR_2);
}
