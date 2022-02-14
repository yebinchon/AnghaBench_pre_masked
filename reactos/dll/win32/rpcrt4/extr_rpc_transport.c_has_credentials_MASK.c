
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ AuthenticationTarget; TYPE_5__* TransportCredentials; int NumberOfAuthnSchemes; } ;
struct TYPE_12__ {TYPE_3__* QOS; } ;
struct TYPE_14__ {TYPE_4__ common; } ;
struct TYPE_13__ {int Password; int User; } ;
struct TYPE_11__ {TYPE_2__* qos; } ;
struct TYPE_9__ {TYPE_7__* HttpCredentials; } ;
struct TYPE_10__ {scalar_t__ AdditionalSecurityInfoType; TYPE_1__ u; } ;
typedef TYPE_5__ SEC_WINNT_AUTH_IDENTITY_W ;
typedef TYPE_6__ RpcConnection_http ;
typedef TYPE_7__ RPC_HTTP_TRANSPORT_CREDENTIALS_W ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_0(RpcConnection_http *VAR_4)
{
    RPC_HTTP_TRANSPORT_CREDENTIALS_W *VAR_5;
    SEC_WINNT_AUTH_IDENTITY_W *VAR_6;

    if (!VAR_4->common.QOS || VAR_4->common.QOS->qos->AdditionalSecurityInfoType != VAR_1)
        return VAR_0;

    VAR_5 = VAR_4->common.QOS->qos->u.HttpCredentials;
    if (VAR_5->AuthenticationTarget != VAR_2 || !VAR_5->NumberOfAuthnSchemes)
        return VAR_0;

    VAR_6 = VAR_5->TransportCredentials;
    if (!VAR_6 || !VAR_6->User || !VAR_6->Password) return VAR_0;

    return VAR_3;
}
