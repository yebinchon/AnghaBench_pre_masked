
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* aUp; } ;
struct TYPE_3__ {int Flags; int RdOff; int WrOff; int SizeOfBuffer; scalar_t__ pBuffer; } ;


 int FUNC_0 (scalar_t__,char const*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__ VAR_3 ;

int FUNC_5(unsigned VAR_4, const char* VAR_5, unsigned VAR_6) {
  int VAR_7;
  unsigned VAR_8;
  int VAR_9;




  FUNC_2();
  FUNC_4();




  if ((VAR_3.aUp[VAR_4].Flags & VAR_1) != VAR_0) {
    VAR_9 = VAR_3.aUp[VAR_4].RdOff;
    VAR_7 = VAR_9 - VAR_3.aUp[VAR_4].WrOff - 1;
    if (VAR_7 < 0) {
      VAR_7 += VAR_3.aUp[VAR_4].SizeOfBuffer;
    }



    if ((int)VAR_6 > VAR_7) {
      if ((VAR_3.aUp[VAR_4].Flags & VAR_1) == VAR_2) {
        FUNC_3();
        return 0;
      } else {
        VAR_6 = VAR_7;
      }
    }
  }



  if (VAR_6 == 0) {
    FUNC_3();
    return 0;
  }



  VAR_8 = 0;
  do {
    VAR_9 = VAR_3.aUp[VAR_4].RdOff;
    VAR_7 = VAR_9 - VAR_3.aUp[VAR_4].WrOff - 1;
    if (VAR_7 < 0) {
      VAR_7 += VAR_3.aUp[VAR_4].SizeOfBuffer;
    }
    VAR_7 = FUNC_1(VAR_7, (VAR_3.aUp[VAR_4].SizeOfBuffer - VAR_3.aUp[VAR_4].WrOff));
    VAR_7 = FUNC_1(VAR_7, (int)VAR_6);
    FUNC_0(VAR_3.aUp[VAR_4].pBuffer + VAR_3.aUp[VAR_4].WrOff, VAR_5, VAR_7);
    VAR_8 += VAR_7;
    VAR_5 += VAR_7;
    VAR_6 -= VAR_7;
    VAR_3.aUp[VAR_4].WrOff += VAR_7;
    if (VAR_3.aUp[VAR_4].WrOff == VAR_3.aUp[VAR_4].SizeOfBuffer) {
      VAR_3.aUp[VAR_4].WrOff = 0;
    }
  } while (VAR_6);
  FUNC_3();
  return VAR_8;
}
