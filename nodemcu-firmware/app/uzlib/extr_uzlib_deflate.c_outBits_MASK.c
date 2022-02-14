
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ushort ;
typedef int bits ;
struct TYPE_2__ {int bits; int nBits; int len; int size; int* buffer; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 () ;

void FUNC_3(ushort VAR_1, int VAR_2) {
  FUNC_0(3);
  VAR_0->bits |= VAR_1 << VAR_0->nBits;
  VAR_0->nBits += VAR_2;

  if (VAR_0->len >= VAR_0->size - sizeof(VAR_1))
    FUNC_2();

  while (VAR_0->nBits >= 8) {
    FUNC_1("%02x-", VAR_0->bits & 0xFF);
    VAR_0->buffer[VAR_0->len++] = VAR_0->bits & 0xFF;
    VAR_0->bits >>= 8;
    VAR_0->nBits -= 8;
  }
}
