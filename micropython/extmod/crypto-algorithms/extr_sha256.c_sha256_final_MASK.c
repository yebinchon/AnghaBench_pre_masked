
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_4__ {int datalen; int* data; int bitlen; int* state; } ;
typedef TYPE_1__ CRYAL_SHA256_CTX ;
typedef int BYTE ;


 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int*) ;

void FUNC_2(CRYAL_SHA256_CTX *VAR_0, BYTE VAR_1[])
{
 WORD VAR_2;

 VAR_2 = VAR_0->datalen;


 if (VAR_0->datalen < 56) {
  VAR_0->data[VAR_2++] = 0x80;
  while (VAR_2 < 56)
   VAR_0->data[VAR_2++] = 0x00;
 }
 else {
  VAR_0->data[VAR_2++] = 0x80;
  while (VAR_2 < 64)
   VAR_0->data[VAR_2++] = 0x00;
  FUNC_1(VAR_0, VAR_0->data);
  FUNC_0(VAR_0->data, 0, 56);
 }


 VAR_0->bitlen += VAR_0->datalen * 8;
 VAR_0->data[63] = VAR_0->bitlen;
 VAR_0->data[62] = VAR_0->bitlen >> 8;
 VAR_0->data[61] = VAR_0->bitlen >> 16;
 VAR_0->data[60] = VAR_0->bitlen >> 24;
 VAR_0->data[59] = VAR_0->bitlen >> 32;
 VAR_0->data[58] = VAR_0->bitlen >> 40;
 VAR_0->data[57] = VAR_0->bitlen >> 48;
 VAR_0->data[56] = VAR_0->bitlen >> 56;
 FUNC_1(VAR_0, VAR_0->data);



 for (VAR_2 = 0; VAR_2 < 4; ++VAR_2) {
  VAR_1[VAR_2] = (VAR_0->state[0] >> (24 - VAR_2 * 8)) & 0x000000ff;
  VAR_1[VAR_2 + 4] = (VAR_0->state[1] >> (24 - VAR_2 * 8)) & 0x000000ff;
  VAR_1[VAR_2 + 8] = (VAR_0->state[2] >> (24 - VAR_2 * 8)) & 0x000000ff;
  VAR_1[VAR_2 + 12] = (VAR_0->state[3] >> (24 - VAR_2 * 8)) & 0x000000ff;
  VAR_1[VAR_2 + 16] = (VAR_0->state[4] >> (24 - VAR_2 * 8)) & 0x000000ff;
  VAR_1[VAR_2 + 20] = (VAR_0->state[5] >> (24 - VAR_2 * 8)) & 0x000000ff;
  VAR_1[VAR_2 + 24] = (VAR_0->state[6] >> (24 - VAR_2 * 8)) & 0x000000ff;
  VAR_1[VAR_2 + 28] = (VAR_0->state[7] >> (24 - VAR_2 * 8)) & 0x000000ff;
 }
}
