
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t ut32 ;
struct TYPE_11__ {int length; TYPE_3__** objects; } ;
struct TYPE_13__ {scalar_t__ klass; scalar_t__ form; scalar_t__ tag; int length; TYPE_1__ list; scalar_t__* sector; } ;
struct TYPE_12__ {size_t version; int extensions; void* subjectUniqueID; void* issuerUniqueID; int subjectPublicKeyInfo; int subject; int validity; int issuer; int signature; int serialNumber; } ;
typedef TYPE_2__ RX509TBSCertificate ;
typedef TYPE_3__ RASN1Object ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *,TYPE_3__*) ;

bool FUNC_7 (RX509TBSCertificate *VAR_4, RASN1Object *VAR_5) {
 RASN1Object **VAR_6;
 ut32 VAR_7;
 ut32 VAR_8 = 0;
 if (!VAR_4 || !VAR_5 || VAR_5->list.length < 6) {
  return 0;
 }
 VAR_6 = VAR_5->list.objects;

 if (VAR_6[0]->list.length == 1 &&
  VAR_6[0]->klass == VAR_0 &&
  VAR_6[0]->form == VAR_2 &&
  VAR_6[0]->list.objects[0]->tag == VAR_3 &&
  VAR_6[0]->list.objects[0]->length == 1) {

  VAR_4->version = (ut32)VAR_6[0]->list.objects[0]->sector[0];
  VAR_8 = 1;
 } else {
  VAR_4->version = 0;
 }
 if (VAR_8 < VAR_5->list.length && VAR_6[VAR_8]->klass == VAR_1 && VAR_6[VAR_8]->tag == VAR_3) {
  VAR_4->serialNumber = FUNC_1 (VAR_6[VAR_8]->sector, VAR_6[VAR_8]->length);
 }
 FUNC_2 (&VAR_4->signature, VAR_6[VAR_8 + 1]);
 FUNC_4 (&VAR_4->issuer, VAR_6[VAR_8 + 2]);
 FUNC_6 (&VAR_4->validity, VAR_6[VAR_8 + 3]);
 FUNC_4 (&VAR_4->subject, VAR_6[VAR_8 + 4]);
 FUNC_5 (&VAR_4->subjectPublicKeyInfo, VAR_6[VAR_8 + 5]);
 if (VAR_4->version > 0) {
  for (VAR_7 = VAR_8 + 6; VAR_7 < VAR_5->list.length; VAR_7++) {
   if (!VAR_6[VAR_7] || VAR_6[VAR_7]->klass != VAR_0) {
    continue;
   }
   if (VAR_6[VAR_7]->tag == 1) {
    VAR_4->issuerUniqueID = FUNC_0 (VAR_5->list.objects[VAR_7]->sector, VAR_5->list.objects[VAR_7]->length);
   }
   if (!VAR_6[VAR_7]) {
    continue;
   }
   if (VAR_6[VAR_7]->tag == 2) {
    VAR_4->subjectUniqueID = FUNC_0 (VAR_5->list.objects[VAR_7]->sector, VAR_5->list.objects[VAR_7]->length);
   }
   if (!VAR_6[VAR_7]) {
    continue;
   }
   if (VAR_4->version == 2 && VAR_6[VAR_7]->tag == 3 && VAR_6[VAR_7]->form == VAR_2) {
    FUNC_3 (&VAR_4->extensions, VAR_6[VAR_7]);
   }
  }
 }
 return 1;
}
