
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ cbData; int pbData; } ;
struct TYPE_7__ {scalar_t__ cbData; int pbData; } ;
struct TYPE_8__ {TYPE_1__ Parameters; int pszObjId; } ;
struct TYPE_10__ {TYPE_3__ PublicKey; TYPE_2__ Algorithm; } ;
typedef TYPE_4__ CERT_PUBLIC_KEY_INFO ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(const CERT_PUBLIC_KEY_INFO *VAR_0,
 const CERT_PUBLIC_KEY_INFO *VAR_1)
{
    FUNC_1(!FUNC_2(VAR_0->Algorithm.pszObjId, VAR_1->Algorithm.pszObjId),
     "Expected OID %s, got %s\n", VAR_0->Algorithm.pszObjId,
     VAR_1->Algorithm.pszObjId);
    FUNC_1(VAR_0->Algorithm.Parameters.cbData ==
     VAR_1->Algorithm.Parameters.cbData,
     "Expected parameters of %d bytes, got %d\n",
     VAR_0->Algorithm.Parameters.cbData, VAR_1->Algorithm.Parameters.cbData);
    if (VAR_0->Algorithm.Parameters.cbData)
        FUNC_1(!FUNC_0(VAR_0->Algorithm.Parameters.pbData,
         VAR_1->Algorithm.Parameters.pbData, VAR_1->Algorithm.Parameters.cbData),
         "Unexpected algorithm parameters\n");
    FUNC_1(VAR_0->PublicKey.cbData == VAR_1->PublicKey.cbData,
     "Expected public key of %d bytes, got %d\n",
     VAR_0->PublicKey.cbData, VAR_1->PublicKey.cbData);
    if (VAR_0->PublicKey.cbData)
        FUNC_1(!FUNC_0(VAR_0->PublicKey.pbData, VAR_1->PublicKey.pbData,
         VAR_1->PublicKey.cbData), "Unexpected public key value\n");
}
