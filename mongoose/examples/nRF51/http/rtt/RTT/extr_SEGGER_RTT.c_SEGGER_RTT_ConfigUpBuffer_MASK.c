
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* aUp; scalar_t__ MaxNumUpBuffers; } ;
struct TYPE_3__ {char const* sName; char* pBuffer; int SizeOfBuffer; int Flags; scalar_t__ WrOff; scalar_t__ RdOff; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__ VAR_0 ;

int FUNC_3(unsigned VAR_1, const char* VAR_2, char* VAR_3, int VAR_4, int VAR_5) {
  FUNC_2();
  if (VAR_1 < (unsigned)VAR_0.MaxNumUpBuffers) {
    FUNC_0();
    if (VAR_1 > 0) {
      VAR_0.aUp[VAR_1].sName = VAR_2;
      VAR_0.aUp[VAR_1].pBuffer = VAR_3;
      VAR_0.aUp[VAR_1].SizeOfBuffer = VAR_4;
      VAR_0.aUp[VAR_1].RdOff = 0;
      VAR_0.aUp[VAR_1].WrOff = 0;
    }
    VAR_0.aUp[VAR_1].Flags = VAR_5;
    FUNC_1();
    return 0;
  }
  return -1;
}
