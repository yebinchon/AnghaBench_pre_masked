
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int length; TYPE_3__** objects; } ;
struct TYPE_9__ {int length; int sector; TYPE_1__ list; } ;
struct TYPE_8__ {int serialNumber; int issuer; } ;
typedef TYPE_2__ RPKCS7IssuerAndSerialNumber ;
typedef TYPE_3__ RASN1Object ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,TYPE_3__*) ;

__attribute__((used)) static bool FUNC_2(RPKCS7IssuerAndSerialNumber *VAR_0, RASN1Object *VAR_1) {
 if (!VAR_0 || !VAR_1 || VAR_1->list.length != 2) {
  return 0;
 }
 FUNC_1 (&VAR_0->issuer, VAR_1->list.objects[0]);
 RASN1Object *VAR_2 = VAR_1->list.objects[1];
 if (VAR_2) {
  VAR_0->serialNumber = FUNC_0 (VAR_2->sector, VAR_2->length);
 }
 return 1;
}
