
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_2__ {scalar_t__ compDisabled; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;

void FUNC_4 (uchar VAR_1) {
  FUNC_0(6);
  FUNC_1("sym: %02x   %c\n", VAR_1, VAR_1);
  if (VAR_0->compDisabled) {

    FUNC_2(VAR_1, 8);
  } else if (VAR_1 <= 143) {

    FUNC_3(0x30 + VAR_1, 8);
  } else {

    FUNC_2(1, 1);
    FUNC_3(0x90 - 144 + VAR_1, 8);
  }
}
