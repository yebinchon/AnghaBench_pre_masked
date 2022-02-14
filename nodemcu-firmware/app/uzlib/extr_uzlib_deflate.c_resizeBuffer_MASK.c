
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef int uchar ;
struct TYPE_2__ {double inLen; double inNdx; int * buffer; scalar_t__ size; scalar_t__ len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_1 ;
 int * FUNC_2 (int *,scalar_t__) ;

void FUNC_3(void) {
  uchar *VAR_2;
  FUNC_0(2);


  double VAR_3 = (((double) VAR_1->len)*VAR_1->inLen) / VAR_1->inNdx;
  VAR_1->size = 128 + (uint) VAR_3;
  if (!(VAR_2 = FUNC_2(VAR_1->buffer, VAR_1->size)))
    FUNC_1(VAR_0);
  VAR_1->buffer = VAR_2;
}
