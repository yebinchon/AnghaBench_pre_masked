
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {int sizeHi; int sizeLo; int lenW; int* H; } ;
typedef TYPE_1__ R_SHA_CTX ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int*,int) ;

void FUNC_2(ut8 VAR_0[20], R_SHA_CTX *VAR_1) {
 ut8 VAR_2 = 0x80;
 ut8 VAR_3 = 0x00;
 ut8 VAR_4[8];
 int VAR_5;


 VAR_4[0] = (ut8) ((VAR_1->sizeHi >> 24) & 255);
 VAR_4[1] = (ut8) ((VAR_1->sizeHi >> 16) & 255);
 VAR_4[2] = (ut8) ((VAR_1->sizeHi >> 8) & 255);
 VAR_4[3] = (ut8) ((VAR_1->sizeHi >> 0) & 255);
 VAR_4[4] = (ut8) ((VAR_1->sizeLo >> 24) & 255);
 VAR_4[5] = (ut8) ((VAR_1->sizeLo >> 16) & 255);
 VAR_4[6] = (ut8) ((VAR_1->sizeLo >> 8) & 255);
 VAR_4[7] = (ut8) ((VAR_1->sizeLo >> 0) & 255);

 FUNC_1 (VAR_1, &VAR_2, 1);
 while (VAR_1->lenW != 56) {
  FUNC_1 (VAR_1, &VAR_3, 1);
 }
 FUNC_1 (VAR_1, VAR_4, 8);


 for (VAR_5 = 0; VAR_5 < 20; VAR_5++) {
  VAR_0[VAR_5] = (ut8) (VAR_1->H[VAR_5 / 4] >> 24);
  VAR_1->H[VAR_5 / 4] <<= 8;
 }


 FUNC_0 (VAR_1);
}
