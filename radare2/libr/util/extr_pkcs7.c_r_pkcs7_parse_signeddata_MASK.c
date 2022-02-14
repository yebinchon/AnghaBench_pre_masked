
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t ut32 ;
struct TYPE_12__ {int length; TYPE_3__** objects; } ;
struct TYPE_14__ {scalar_t__ klass; int tag; TYPE_1__ list; scalar_t__* sector; } ;
struct TYPE_13__ {size_t version; int signerinfos; int crls; int certificates; int contentInfo; int digestAlgorithms; } ;
typedef TYPE_2__ RPKCS7SignedData ;
typedef TYPE_3__ RASN1Object ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_3__*) ;

__attribute__((used)) static bool FUNC_6(RPKCS7SignedData *VAR_1, RASN1Object *VAR_2) {
 ut32 VAR_3 = 3;
 if (!VAR_1 || !VAR_2 || VAR_2->list.length < 4) {
  return 0;
 }
 FUNC_0 (VAR_1, 0, sizeof (RPKCS7SignedData));
 RASN1Object **VAR_4 = VAR_2->list.objects;

 VAR_1->version = (ut32)VAR_4[0]->sector[0];
 FUNC_3 (&VAR_1->digestAlgorithms, VAR_4[1]);
 FUNC_2 (&VAR_1->contentInfo, VAR_4[2]);

 if (VAR_2->list.length > 3 && VAR_3 < VAR_2->list.length && VAR_4[VAR_3] &&
  VAR_4[VAR_3]->klass == VAR_0 && VAR_4[VAR_3]->tag == 0) {
  FUNC_4 (&VAR_1->certificates, VAR_4[VAR_3]);
  VAR_3++;
 }

 if (VAR_2->list.length > 3 && VAR_3 < VAR_2->list.length && VAR_4[VAR_3] &&
  VAR_4[VAR_3]->klass == VAR_0 && VAR_4[VAR_3]->tag == 1) {
  FUNC_1 (&VAR_1->crls, VAR_4[VAR_3]);
  VAR_3++;
 }
 if (VAR_3 < VAR_2->list.length) {
  FUNC_5 (&VAR_1->signerinfos, VAR_4[VAR_3]);
 }
 return 1;
}
