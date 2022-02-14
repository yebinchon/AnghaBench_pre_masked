
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
typedef int RX509AlgorithmIdentifier ;
typedef TYPE_2__ RPKCS7DigestAlgorithmIdentifiers ;
typedef TYPE_3__ RASN1Object ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static bool FUNC_4(RPKCS7DigestAlgorithmIdentifiers *VAR_0, RASN1Object *VAR_1) {
 ut32 VAR_2;
 if (!VAR_0 || !VAR_1) {
  return 0;
 }
 if (VAR_1->list.length > 0) {
  VAR_0->elements = (RX509AlgorithmIdentifier **)FUNC_0 (VAR_1->list.length, sizeof (RX509AlgorithmIdentifier *));
  if (!VAR_0->elements) {
   return 0;
  }
  VAR_0->length = VAR_1->list.length;
  for (VAR_2 = 0; VAR_2 < VAR_0->length; ++VAR_2) {


   VAR_0->elements[VAR_2] = (RX509AlgorithmIdentifier *)FUNC_1 (sizeof (RX509AlgorithmIdentifier));


   if (VAR_0->elements[VAR_2]) {

    FUNC_2 (VAR_0->elements[VAR_2], 0, sizeof (RX509AlgorithmIdentifier));
    FUNC_3 (VAR_0->elements[VAR_2], VAR_1->list.objects[VAR_2]);
   }
  }
 }
 return 1;
}
