
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ActivateAtStorage; int RunAsInteractiveUser; int entry; void* DllSurrogate; void* ServiceParameters; void* LocalServer; int RemoteServerName; void* AppID; } ;
struct TYPE_7__ {int appids; } ;
typedef int MSIRECORD ;
typedef TYPE_1__ MSIPACKAGE ;
typedef TYPE_2__ MSIAPPID ;
typedef int LPCWSTR ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (TYPE_1__*,int ,int *) ;
 int FUNC_5 (int *,int *) ;
 TYPE_2__* FUNC_6 (int) ;
 void* FUNC_7 (int *,int) ;

__attribute__((used)) static MSIAPPID *FUNC_8( MSIPACKAGE* VAR_0, MSIRECORD *VAR_1 )
{
    LPCWSTR VAR_2;
    MSIAPPID *VAR_3;



    VAR_3 = FUNC_6( sizeof(MSIAPPID) );
    if (!VAR_3)
        return ((void*)0);

    VAR_3->AppID = FUNC_7( VAR_1, 1 );
    FUNC_2("loading appid %s\n", FUNC_3( VAR_3->AppID ));

    VAR_2 = FUNC_0(VAR_1,2);
    FUNC_4( VAR_0, VAR_2, &VAR_3->RemoteServerName );

    VAR_3->LocalServer = FUNC_7(VAR_1,3);
    VAR_3->ServiceParameters = FUNC_7(VAR_1,4);
    VAR_3->DllSurrogate = FUNC_7(VAR_1,5);

    VAR_3->ActivateAtStorage = !FUNC_1(VAR_1,6);
    VAR_3->RunAsInteractiveUser = !FUNC_1(VAR_1,7);

    FUNC_5( &VAR_0->appids, &VAR_3->entry );

    return VAR_3;
}
