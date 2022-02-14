
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct TYPE_4__ {int* count; int* state; } ;
typedef TYPE_1__ R_MD5_CTX ;


 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int * VAR_0 ;
 int FUNC_2 (void*,int) ;

void FUNC_3(ut8 VAR_1[16], R_MD5_CTX *VAR_2) {
 ut8 VAR_3[8];


 FUNC_0 (VAR_3, VAR_2->count, 8);


 ut32 VAR_4 = (ut32)((VAR_2->count[0] >> 3) & 0x3f);
 ut32 VAR_5 = (VAR_4 < 56) ? (56 - VAR_4) : (120 - VAR_4);
 FUNC_1 (VAR_2, VAR_0, VAR_5);


 FUNC_1 (VAR_2, VAR_3, 8);


 FUNC_0 (VAR_1, VAR_2->state, 16);


 FUNC_2 ((void*)VAR_2, sizeof (*VAR_2));
}
