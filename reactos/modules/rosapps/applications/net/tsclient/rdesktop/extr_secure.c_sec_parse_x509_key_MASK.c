
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_19__ {TYPE_3__* cert_info; } ;
typedef TYPE_6__ X509 ;
struct TYPE_17__ {scalar_t__ ptr; } ;
struct TYPE_21__ {TYPE_4__ pkey; } ;
struct TYPE_18__ {int server_public_key_len; int server_public_key; } ;
struct TYPE_20__ {TYPE_5__ secure; } ;
struct TYPE_16__ {TYPE_2__* key; } ;
struct TYPE_15__ {TYPE_1__* algor; } ;
struct TYPE_14__ {int algorithm; } ;
typedef int RSA ;
typedef TYPE_7__ RDPCLIENT ;
typedef TYPE_8__ EVP_PKEY ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_8__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_8__* FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static BOOL
FUNC_9(RDPCLIENT * VAR_5, X509 * VAR_6)
{
 EVP_PKEY *VAR_7 = ((void*)0);





 if (FUNC_4(VAR_6->cert_info->key->algor->algorithm) == VAR_1)
 {
  FUNC_1(("Re-setting algorithm type to RSA in server certificate\n"));
  FUNC_0(VAR_6->cert_info->key->algor->algorithm);
  VAR_6->cert_info->key->algor->algorithm = FUNC_3(VAR_2);
 }
 VAR_7 = FUNC_7(VAR_6);
 if (((void*)0) == VAR_7)
 {
  FUNC_8("Failed to extract public key from certificate\n");
  return VAR_0;
 }

 VAR_5->secure.server_public_key = FUNC_5((RSA *) VAR_7->pkey.ptr);
 FUNC_2(VAR_7);

 VAR_5->secure.server_public_key_len = FUNC_6(VAR_5->secure.server_public_key);
 if ((VAR_5->secure.server_public_key_len < 64) || (VAR_5->secure.server_public_key_len > VAR_3))
 {
  FUNC_8("Bad server public key size (%u bits)\n", VAR_5->secure.server_public_key_len * 8);
  return VAR_0;
 }

 return VAR_4;
}
