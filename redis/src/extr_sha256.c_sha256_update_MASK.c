
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t WORD ;
struct TYPE_4__ {size_t datalen; int bitlen; int * data; } ;
typedef TYPE_1__ SHA256_CTX ;
typedef int BYTE ;


 int FUNC_0 (TYPE_1__*,int *) ;

void FUNC_1(SHA256_CTX *VAR_0, const BYTE VAR_1[], size_t VAR_2)
{
 WORD VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  VAR_0->data[VAR_0->datalen] = VAR_1[VAR_3];
  VAR_0->datalen++;
  if (VAR_0->datalen == 64) {
   FUNC_0(VAR_0, VAR_0->data);
   VAR_0->bitlen += 512;
   VAR_0->datalen = 0;
  }
 }
}
