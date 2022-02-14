
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut8 ;
struct TYPE_4__ {int* W; int lenW; int sizeLo; int sizeHi; } ;
typedef TYPE_1__ R_SHA_CTX ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(R_SHA_CTX *VAR_0, const void *VAR_1, int VAR_2) {
 const ut8 *VAR_3 = VAR_1;
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_0->W[VAR_0->lenW / 4] <<= 8;
  VAR_0->W[VAR_0->lenW / 4] |= (unsigned int) VAR_3[VAR_4];
  if ((++VAR_0->lenW) % 64 == 0) {
   FUNC_0 (VAR_0);
   VAR_0->lenW = 0;
  }
  VAR_0->sizeLo += 8;
  VAR_0->sizeHi += (VAR_0->sizeLo < 8);
 }
}
