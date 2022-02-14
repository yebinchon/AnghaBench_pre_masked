
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int err_t ;
typedef int VOID ;
struct TYPE_9__ {int Lock; int ConnectRequest; } ;
struct TYPE_8__ {scalar_t__ Information; int Status; } ;
typedef TYPE_1__* PTDI_BUCKET ;
typedef int PLIST_ENTRY ;
typedef TYPE_2__* PCONNECTION_ENDPOINT ;


 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int const) ;
 int VAR_1 ;

VOID
FUNC_6(void *VAR_2, const err_t VAR_3)
{
    PCONNECTION_ENDPOINT VAR_4 = (PCONNECTION_ENDPOINT)VAR_2;
    PTDI_BUCKET VAR_5;
    PLIST_ENTRY VAR_6;

    FUNC_4(VAR_4);

    while ((VAR_6 = FUNC_3(&VAR_4->ConnectRequest, &VAR_4->Lock)))
    {

        VAR_5 = FUNC_0( VAR_6, VAR_1, VAR_6 );

        VAR_5->Status = FUNC_5(VAR_3);
        VAR_5->Information = 0;

        FUNC_1(VAR_4, VAR_5, VAR_0);
    }

    FUNC_2(VAR_4);
}
