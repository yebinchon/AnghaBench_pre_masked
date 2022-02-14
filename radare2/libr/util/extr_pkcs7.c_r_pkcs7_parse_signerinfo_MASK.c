
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ut32 ;
struct TYPE_9__ {int length; TYPE_3__** objects; } ;
struct TYPE_11__ {scalar_t__ klass; scalar_t__ tag; TYPE_1__ list; int length; scalar_t__* sector; } ;
struct TYPE_10__ {size_t version; int unauthenticatedAttributes; int encryptedDigest; int digestEncryptionAlgorithm; int authenticatedAttributes; int digestAlgorithm; int issuerAndSerialNumber; } ;
typedef TYPE_2__ RPKCS7SignerInfo ;
typedef TYPE_3__ RASN1Object ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*) ;

__attribute__((used)) static bool FUNC_4(RPKCS7SignerInfo *VAR_1, RASN1Object *VAR_2) {
 RASN1Object **VAR_3;
 ut32 VAR_4 = 3;
 if (!VAR_1 || !VAR_2 || VAR_2->list.length < 5) {
  return 0;
 }
 VAR_3 = VAR_2->list.objects;

 VAR_1->version = (ut32)VAR_3[0]->sector[0];
 FUNC_2 (&VAR_1->issuerAndSerialNumber, VAR_3[1]);
 FUNC_3 (&VAR_1->digestAlgorithm, VAR_3[2]);
 if (VAR_4 < VAR_2->list.length && VAR_3[VAR_4]->klass == VAR_0 && VAR_3[VAR_4]->tag == 0) {
  FUNC_1 (&VAR_1->authenticatedAttributes, VAR_3[VAR_4]);
  VAR_4++;
 }
 if (VAR_4 < VAR_2->list.length) {
  FUNC_3 (&VAR_1->digestEncryptionAlgorithm, VAR_3[VAR_4]);
  VAR_4++;
 }
 if (VAR_4 < VAR_2->list.length) {
  RASN1Object *VAR_5 = VAR_2->list.objects[VAR_4];
  if (VAR_5) {
   VAR_1->encryptedDigest = FUNC_0 (VAR_5->sector, VAR_5->length);
   VAR_4++;
  }
 }
 if (VAR_4 < VAR_2->list.length) {
  RASN1Object *VAR_6 = VAR_3[VAR_4];
  if (VAR_6 && VAR_6->klass == VAR_0 && VAR_6->tag == 1) {
   FUNC_1 (&VAR_1->unauthenticatedAttributes, VAR_3[VAR_4]);
  }
 }
 return 1;
}
