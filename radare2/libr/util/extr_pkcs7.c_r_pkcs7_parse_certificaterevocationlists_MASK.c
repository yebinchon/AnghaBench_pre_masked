
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ut32 ;
struct TYPE_6__ {scalar_t__ length; int * objects; } ;
struct TYPE_8__ {TYPE_1__ list; } ;
struct TYPE_7__ {size_t length; int ** elements; } ;
typedef int RX509CertificateRevocationList ;
typedef TYPE_2__ RPKCS7CertificateRevocationLists ;
typedef TYPE_3__ RASN1Object ;


 scalar_t__ FUNC_0 (size_t,int) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(RPKCS7CertificateRevocationLists *VAR_0, RASN1Object *VAR_1) {
 ut32 VAR_2;
 if (!VAR_0 || !VAR_1) {
  return 0;
 }
 if (VAR_1->list.length > 0) {
  VAR_0->elements = (RX509CertificateRevocationList **)FUNC_0 (VAR_1->list.length, sizeof (RX509CertificateRevocationList *));
  if (!VAR_0->elements) {
   return 0;
  }
  VAR_0->length = VAR_1->list.length;
  for (VAR_2 = 0; VAR_2 < VAR_0->length; ++VAR_2) {
   VAR_0->elements[VAR_2] = FUNC_1 (VAR_1->list.objects[VAR_2]);
  }
 }
 return 1;
}
