
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_17__ {int encryption_auth_len; int signature_auth_len; int ctx; int attr; int exp; TYPE_1__* AuthInfo; scalar_t__ server; } ;
struct TYPE_16__ {unsigned char* pvBuffer; unsigned int cbBuffer; void* BufferType; } ;
struct TYPE_15__ {int cBuffers; TYPE_4__* pBuffers; scalar_t__ ulVersion; } ;
struct TYPE_14__ {int cbSecurityTrailer; int cbMaxSignature; } ;
struct TYPE_13__ {unsigned int cbMaxToken; scalar_t__ AuthnLevel; int * server_principal_name; int cred; } ;
typedef TYPE_2__ SecPkgContext_Sizes ;
typedef TYPE_3__ SecBufferDesc ;
typedef TYPE_4__ SecBuffer ;
typedef scalar_t__ SECURITY_STATUS ;
typedef TYPE_5__ RpcConnection ;
typedef int RPC_STATUS ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *,TYPE_3__*,int,int ,int *,TYPE_3__*,int *,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_3__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int *,int *,int *,int,int ,int ,TYPE_3__*,int ,int *,TYPE_3__*,int *,int *) ;
 scalar_t__ FUNC_4 (int *,int ,TYPE_2__*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,scalar_t__) ;

RPC_STATUS FUNC_7(RpcConnection *VAR_22, BOOL VAR_23,
                                    unsigned char *VAR_24,
                                    unsigned int VAR_25,
                                    unsigned char *VAR_26,
                                    unsigned int *VAR_27)
{
  SECURITY_STATUS VAR_28;
  SecBufferDesc VAR_29;
  SecBufferDesc VAR_30;
  SecPkgContext_Sizes VAR_31;
  BOOL VAR_32;
  ULONG VAR_33;
  SecBuffer VAR_34, VAR_35;

  if (!VAR_26)
  {
    *VAR_27 = VAR_22->AuthInfo->cbMaxToken;
    return VAR_14;
  }

  VAR_34.BufferType = VAR_15;
  VAR_34.pvBuffer = VAR_24;
  VAR_34.cbBuffer = VAR_25;

  VAR_35.BufferType = VAR_15;
  VAR_35.pvBuffer = VAR_26;
  VAR_35.cbBuffer = *VAR_27;

  VAR_29.ulVersion = 0;
  VAR_29.cBuffers = 1;
  VAR_29.pBuffers = &VAR_35;

  VAR_30.ulVersion = 0;
  VAR_30.cBuffers = 1;
  VAR_30.pBuffers = &VAR_34;

  if (VAR_22->server)
  {
      VAR_33 = VAR_1 | VAR_4 |
                    VAR_2;

      if (VAR_22->AuthInfo->AuthnLevel == VAR_12)
          VAR_33 |= VAR_3;
      else if (VAR_22->AuthInfo->AuthnLevel == VAR_13)
          VAR_33 |= VAR_0 | VAR_3;

      VAR_28 = FUNC_0(&VAR_22->AuthInfo->cred,
                                VAR_23 ? ((void*)0) : &VAR_22->ctx,
                                &VAR_30, VAR_33, VAR_17,
                                &VAR_22->ctx,
                                &VAR_29, &VAR_22->attr, &VAR_22->exp);
      if (VAR_28 == VAR_18 || VAR_28 == VAR_20)
      {

          VAR_35.cbBuffer = 0;
      }
  }
  else
  {
      VAR_33 = VAR_7 | VAR_11 |
                    VAR_10 | VAR_8;

      if (VAR_22->AuthInfo->AuthnLevel == VAR_12)
          VAR_33 |= VAR_9;
      else if (VAR_22->AuthInfo->AuthnLevel == VAR_13)
          VAR_33 |= VAR_6 | VAR_9;

      VAR_28 = FUNC_3(&VAR_22->AuthInfo->cred,
                                     VAR_23 ? ((void*)0): &VAR_22->ctx,
                                     VAR_23 ? VAR_22->AuthInfo->server_principal_name : ((void*)0),
                                     VAR_33, 0, VAR_17,
                                     VAR_23 ? ((void*)0) : &VAR_30, 0, &VAR_22->ctx,
                                     &VAR_29, &VAR_22->attr, &VAR_22->exp);
  }
  if (FUNC_2(VAR_28))
  {
      FUNC_6("InitializeSecurityContext failed with error 0x%08x\n", VAR_28);
      goto failed;
  }

  FUNC_5("r = 0x%08x, attr = 0x%08x\n", VAR_28, VAR_22->attr);
  VAR_32 = ((VAR_28 == VAR_21) ||
                     (VAR_28 == VAR_19));

  if ((VAR_28 == VAR_20) || (VAR_28 == VAR_19))
  {
      FUNC_5("complete needed\n");
      VAR_28 = FUNC_1(&VAR_22->ctx, &VAR_29);
      if (FUNC_2(VAR_28))
      {
          FUNC_6("CompleteAuthToken failed with error 0x%08x\n", VAR_28);
          goto failed;
      }
  }

  FUNC_5("cbBuffer = %d\n", VAR_35.cbBuffer);

  if (!VAR_32)
  {
      VAR_28 = FUNC_4(&VAR_22->ctx, VAR_16, &VAR_31);
      if (FUNC_2(VAR_28))
      {
          FUNC_6("QueryContextAttributes failed with error 0x%08x\n", VAR_28);
          goto failed;
      }
      VAR_22->signature_auth_len = VAR_31.cbMaxSignature;
      VAR_22->encryption_auth_len = VAR_31.cbSecurityTrailer;
  }

  *VAR_27 = VAR_35.cbBuffer;
  return VAR_14;

failed:
  *VAR_27 = 0;
  return VAR_5;
}
