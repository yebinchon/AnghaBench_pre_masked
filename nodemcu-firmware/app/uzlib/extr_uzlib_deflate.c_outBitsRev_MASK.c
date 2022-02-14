
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_2__ {int* bitrevNibble; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int,int) ;

void FUNC_2(uchar VAR_1, int VAR_2) {
  FUNC_0(4);

  uchar VAR_3 = (VAR_0->bitrevNibble[VAR_1 & 0x0f]<<4) |
                  VAR_0->bitrevNibble[VAR_1>>4];
  FUNC_1(VAR_3, VAR_2);
}
