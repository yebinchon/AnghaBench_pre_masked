
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_6__ {int dictSize; int distTableSize; scalar_t__ nowPos64; int result; int finished; } ;
typedef int SRes ;
typedef int ISzAlloc ;
typedef TYPE_1__ CLzmaEnc ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static SRes FUNC_4(CLzmaEnc *VAR_3, UInt32 VAR_4, ISzAlloc *VAR_5, ISzAlloc *VAR_6)
{
  UInt32 VAR_7;
  for (VAR_7 = 0; VAR_7 < (UInt32)VAR_2; VAR_7++)
    if (VAR_3->dictSize <= ((UInt32)1 << VAR_7))
      break;
  VAR_3->distTableSize = VAR_7 * 2;

  VAR_3->finished = VAR_0;
  VAR_3->result = VAR_1;
  FUNC_3(FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6));
  FUNC_1(VAR_3);
  FUNC_2(VAR_3);
  VAR_3->nowPos64 = 0;
  return VAR_1;
}
