
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_4__ {int * state; } ;
typedef int R_SHA512_CTX ;
typedef TYPE_1__ R_SHA384_CTX ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void FUNC_4(ut8 VAR_1[], R_SHA384_CTX *VAR_2) {
 ut64 *VAR_3 = (ut64 *) VAR_1;


 if (!VAR_2) {
  return;
 }


 if (VAR_1 != (ut8 *) 0) {
  FUNC_1 ((R_SHA512_CTX *) VAR_2);



  {

   int VAR_4;
   for (VAR_4 = 0; VAR_4 < 6; VAR_4++) {
    FUNC_0 (VAR_2->state[VAR_4], VAR_2->state[VAR_4]);
    *VAR_3++ = VAR_2->state[VAR_4];
   }
  }



 }


 FUNC_3 (VAR_2, 0, sizeof(*VAR_2));
}
