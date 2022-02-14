
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_2__ {int len; int size; int * buffer; scalar_t__ bits; scalar_t__ nBits; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 () ;

void FUNC_3(void *VAR_1, int VAR_2) {
  FUNC_0(5);
  int VAR_3;
  if (VAR_0->len >= VAR_0->size - VAR_2)
    FUNC_2();



  VAR_0->nBits = VAR_0->bits = 0;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    FUNC_1("%02x-", *((uchar*)VAR_1+VAR_3));
    VAR_0->buffer[VAR_0->len++] = *((uchar*)VAR_1+VAR_3);
  }
}
