
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ RemoteAddress; int ConnectReturnInfo; int ConnectCallInfo; int Connection; } ;
struct TYPE_12__ {TYPE_1__* ConnInfo; int Object; } ;
struct TYPE_11__ {TYPE_4__* FsContext; } ;
struct TYPE_10__ {int RemoteAddress; } ;
typedef int PIRP ;
typedef TYPE_2__* PFILE_OBJECT ;
typedef TYPE_3__* PAFD_TDI_OBJECT_QELT ;
typedef TYPE_4__* PAFD_FCB ;
typedef int PAFD_DEVICE_EXTENSION ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_4__*,int ,int ,int ) ;

__attribute__((used)) static NTSTATUS FUNC_10( PAFD_DEVICE_EXTENSION VAR_3,
                               PIRP VAR_4,
                               PFILE_OBJECT VAR_5,
                               PAFD_TDI_OBJECT_QELT VAR_6 ) {
    PAFD_FCB VAR_7 = VAR_5->FsContext;
    NTSTATUS VAR_8;

    FUNC_8(VAR_3);

    if( !FUNC_5( VAR_7 ) )
        return FUNC_2( VAR_4 );


    FUNC_0(VAR_0,("Completing a real accept (FCB %p)\n", VAR_7));

    VAR_7->Connection = VAR_6->Object;

    if (VAR_7->RemoteAddress)
    {
        FUNC_1(VAR_7->RemoteAddress, VAR_2);
    }

    VAR_7->RemoteAddress =
        FUNC_6( VAR_6->ConnInfo->RemoteAddress );

    if( !VAR_7->RemoteAddress )
        VAR_8 = VAR_1;
    else
        VAR_8 = FUNC_3( VAR_7 );

    if (FUNC_4(VAR_8))
        VAR_8 = FUNC_7(&VAR_7->ConnectCallInfo, VAR_7->RemoteAddress);

    if (FUNC_4(VAR_8))
        VAR_8 = FUNC_7(&VAR_7->ConnectReturnInfo, VAR_7->RemoteAddress);

    return FUNC_9( VAR_7, VAR_8, VAR_4, 0 );
}
