
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_10__ {int ShutdownRequest; int Lock; } ;
struct TYPE_9__ {int Status; scalar_t__ Information; } ;
typedef TYPE_1__* PTDI_BUCKET ;
typedef int PLIST_ENTRY ;
typedef TYPE_2__* PCONNECTION_ENDPOINT ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOLEAN ;


 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;

VOID
FUNC_7(PCONNECTION_ENDPOINT VAR_2, const NTSTATUS VAR_3, const BOOLEAN VAR_4)
{
    PTDI_BUCKET VAR_5;
    PLIST_ENTRY VAR_6;

    FUNC_5(VAR_2);

    if (VAR_4)
    {
        while ((VAR_6 = FUNC_3(&VAR_2->ShutdownRequest, &VAR_2->Lock)))
        {
            VAR_5 = FUNC_0( VAR_6, VAR_1, VAR_6 );

            VAR_5->Status = VAR_3;
            VAR_5->Information = 0;

            FUNC_1(VAR_2, VAR_5, VAR_0);
        }
    }
    else
    {
        while (!FUNC_4(&VAR_2->ShutdownRequest))
        {
            VAR_6 = FUNC_6(&VAR_2->ShutdownRequest);

            VAR_5 = FUNC_0(VAR_6, VAR_1, VAR_6);

            VAR_5->Information = 0;
            VAR_5->Status = VAR_3;

            FUNC_1(VAR_2, VAR_5, VAR_0);
        }
    }

    FUNC_2(VAR_2);
}
