
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int length; TYPE_1__** objects; } ;
struct TYPE_10__ {TYPE_2__ list; } ;
struct TYPE_9__ {int revocationDate; int userCertificate; } ;
struct TYPE_7__ {int length; int sector; } ;
typedef TYPE_3__ RX509CRLEntry ;
typedef TYPE_4__ RASN1Object ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

RX509CRLEntry *FUNC_3 (RASN1Object *VAR_0) {
 RX509CRLEntry *VAR_1;
 if (!VAR_0 || VAR_0->list.length != 2) {
  return ((void*)0);
 }
 VAR_1 = (RX509CRLEntry *)FUNC_0 (sizeof (RX509CRLEntry));
 if (!VAR_1) {
  return ((void*)0);
 }
 VAR_1->userCertificate = FUNC_1 (VAR_0->list.objects[0]->sector, VAR_0->list.objects[0]->length);
 VAR_1->revocationDate = FUNC_2 (VAR_0->list.objects[1]->sector, VAR_0->list.objects[1]->length);
 return VAR_1;
}
