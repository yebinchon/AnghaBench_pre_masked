
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int f; char* p; } ;
typedef TYPE_1__ Rangstr ;



__attribute__((used)) static int FUNC_0(Rangstr *VAR_0) {
 int VAR_1;
 for (VAR_1 = VAR_0->f; VAR_1 > 0; VAR_1--) {

  if (VAR_0->p[VAR_1] == '"') {
   for (--VAR_1; VAR_1 > 0; VAR_1--) {

    if (VAR_0->p[VAR_1] == '"') {
     return VAR_1;
    }
   }
  }
 }
 return -1;
}
