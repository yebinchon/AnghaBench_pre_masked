
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ut32 ;
struct TYPE_3__ {size_t length; int * elements; } ;
typedef TYPE_1__ RPKCS7Attributes ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(RPKCS7Attributes *VAR_0) {
 ut32 VAR_1;
 if (VAR_0) {
  for (VAR_1 = 0; VAR_1 < VAR_0->length; ++VAR_1) {
   FUNC_1 (VAR_0->elements[VAR_1]);
  }
  FUNC_0 (VAR_0->elements);

 }
}
