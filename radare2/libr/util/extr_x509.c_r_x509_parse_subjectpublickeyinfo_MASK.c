
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int length; TYPE_3__** objects; } ;
struct TYPE_9__ {int length; TYPE_1__ list; int sector; } ;
struct TYPE_8__ {void* subjectPublicKeyModule; void* subjectPublicKeyExponent; void* subjectPublicKey; int algorithm; } ;
typedef TYPE_2__ RX509SubjectPublicKeyInfo ;
typedef TYPE_3__ RASN1Object ;


 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,TYPE_3__*) ;

bool FUNC_2 (RX509SubjectPublicKeyInfo *VAR_0, RASN1Object *VAR_1) {
 RASN1Object *VAR_2;
 if (!VAR_0 || !VAR_1 || VAR_1->list.length != 2) {
  return 0;
 }
 FUNC_1 (&VAR_0->algorithm, VAR_1->list.objects[0]);
 if (VAR_1->list.objects[1]) {
  VAR_2 = VAR_1->list.objects[1];
  VAR_0->subjectPublicKey = FUNC_0 (VAR_2->sector, VAR_2->length);
  if (VAR_2->list.length == 1 && VAR_2->list.objects[0] && VAR_2->list.objects[0]->list.length == 2) {
   VAR_2 = VAR_2->list.objects[0];
   if (VAR_2->list.objects[0]) {
    VAR_0->subjectPublicKeyExponent = FUNC_0 (VAR_2->list.objects[0]->sector, VAR_2->list.objects[0]->length);
   }
   if (VAR_2->list.objects[1]) {
    VAR_0->subjectPublicKeyModule = FUNC_0 (VAR_2->list.objects[1]->sector, VAR_2->list.objects[1]->length);
   }
  }
 }
 return 1;
}
