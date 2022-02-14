
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int unauthenticatedAttributes; int encryptedDigest; int digestEncryptionAlgorithm; int authenticatedAttributes; int digestAlgorithm; int issuerAndSerialNumber; } ;
typedef TYPE_1__ RPKCS7SignerInfo ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(RPKCS7SignerInfo *VAR_0) {
 if (VAR_0) {
  FUNC_3 (&VAR_0->issuerAndSerialNumber);
  FUNC_4 (&VAR_0->digestAlgorithm);
  FUNC_2 (&VAR_0->authenticatedAttributes);
  FUNC_4 (&VAR_0->digestEncryptionAlgorithm);
  FUNC_1 (VAR_0->encryptedDigest);
  FUNC_2 (&VAR_0->unauthenticatedAttributes);
  FUNC_0 (VAR_0);
 }
}
