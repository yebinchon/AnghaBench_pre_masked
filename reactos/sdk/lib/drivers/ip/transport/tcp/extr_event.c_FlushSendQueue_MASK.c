
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_10__ {int SendRequest; int Lock; } ;
struct TYPE_9__ {int Status; scalar_t__ Information; int Request; } ;
typedef TYPE_1__* PTDI_BUCKET ;
typedef int PLIST_ENTRY ;
typedef TYPE_2__* PCONNECTION_ENDPOINT ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOLEAN ;


 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (int ,char*) ;

VOID
FUNC_8(PCONNECTION_ENDPOINT VAR_3, const NTSTATUS VAR_4, const BOOLEAN VAR_5)
{
    PTDI_BUCKET VAR_6;
    PLIST_ENTRY VAR_7;

    FUNC_5(VAR_3);

    if (VAR_5)
    {
        while ((VAR_7 = FUNC_3(&VAR_3->SendRequest, &VAR_3->Lock)))
        {
            VAR_6 = FUNC_0( VAR_7, VAR_2, VAR_7 );

            FUNC_7(VAR_0,
                        ("Completing Send request: %x %x\n",
                         VAR_6->Request, VAR_4));

            VAR_6->Status = VAR_4;
            VAR_6->Information = 0;

            FUNC_1(VAR_3, VAR_6, VAR_1);
        }
    }
    else
    {
        while (!FUNC_4(&VAR_3->SendRequest))
        {
            VAR_7 = FUNC_6(&VAR_3->SendRequest);

            VAR_6 = FUNC_0(VAR_7, VAR_2, VAR_7);

            VAR_6->Information = 0;
            VAR_6->Status = VAR_4;

            FUNC_1(VAR_3, VAR_6, VAR_1);
        }
    }

    FUNC_2(VAR_3);
}
