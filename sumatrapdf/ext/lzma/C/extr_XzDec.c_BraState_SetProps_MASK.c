
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_2__ {int ip; int methodId; unsigned int delta; } ;
typedef int SRes ;
typedef int ISzAlloc ;
typedef TYPE_1__ CBraState ;
typedef scalar_t__ Byte ;


 int FUNC_0 (scalar_t__ const*) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;




SRes FUNC_1(void *VAR_3, const Byte *VAR_4, size_t VAR_5, ISzAlloc *VAR_6)
{
  CBraState *VAR_7 = ((CBraState *)VAR_3);
  VAR_6 = VAR_6;
  VAR_7->ip = 0;
  if (VAR_7->methodId == VAR_2)
  {
    if (VAR_5 != 1)
      return VAR_0;
    VAR_7->delta = (unsigned)VAR_4[0] + 1;
  }
  else
  {
    if (VAR_5 == 4)
    {
      UInt32 VAR_8 = FUNC_0(VAR_4);
      switch(VAR_7->methodId)
      {
        case 129:
        case 132:
        case 128:
          if ((VAR_8 & 3) != 0)
            return VAR_0;
          break;
        case 131:
          if ((VAR_8 & 1) != 0)
            return VAR_0;
          break;
        case 130:
          if ((VAR_8 & 0xF) != 0)
            return VAR_0;
          break;
      }
      VAR_7->ip = VAR_8;
    }
    else if (VAR_5 != 0)
      return VAR_0;
  }
  return VAR_1;
}
