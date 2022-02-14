
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* aDown; } ;
struct TYPE_3__ {int RdOff; int WrOff; int SizeOfBuffer; scalar_t__ pBuffer; } ;


 int FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__ VAR_0 ;

int FUNC_5(unsigned VAR_1, char* VAR_2, unsigned VAR_3) {
  int VAR_4;
  unsigned VAR_5;
  int VAR_6;
  int VAR_7;

  FUNC_2();
  FUNC_4();
  VAR_6 = VAR_0.aDown[VAR_1].RdOff;
  VAR_7 = VAR_0.aDown[VAR_1].WrOff;
  VAR_5 = 0;



  if (VAR_6 > VAR_7) {
    VAR_4 = VAR_0.aDown[VAR_1].SizeOfBuffer - VAR_6;
    VAR_4 = FUNC_1(VAR_4, (int)VAR_3);
    FUNC_0(VAR_2, VAR_0.aDown[VAR_1].pBuffer + VAR_6, VAR_4);
    VAR_5 += VAR_4;
    VAR_2 += VAR_4;
    VAR_3 -= VAR_4;
    VAR_6 += VAR_4;



    if (VAR_6 == VAR_0.aDown[VAR_1].SizeOfBuffer) {
      VAR_6 = 0;
    }
  }



  VAR_4 = VAR_7 - VAR_6;
  VAR_4 = FUNC_1(VAR_4, (int)VAR_3);
  if (VAR_4 > 0) {
    FUNC_0(VAR_2, VAR_0.aDown[VAR_1].pBuffer + VAR_6, VAR_4);
    VAR_5 += VAR_4;
    VAR_2 += VAR_4;
    VAR_3 -= VAR_4;
    VAR_6 += VAR_4;
  }
  if (VAR_5) {
    VAR_0.aDown[VAR_1].RdOff = VAR_6;
  }
  FUNC_3();
  return VAR_5;
}
