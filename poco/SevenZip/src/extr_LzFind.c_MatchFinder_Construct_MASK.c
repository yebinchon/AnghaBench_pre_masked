
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {int* crc; scalar_t__ hash; scalar_t__ directInput; scalar_t__ bufferBase; } ;
typedef TYPE_1__ CMatchFinder ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;

void FUNC_1(CMatchFinder *VAR_1)
{
  UInt32 VAR_2;
  VAR_1->bufferBase = 0;
  VAR_1->directInput = 0;
  VAR_1->hash = 0;
  FUNC_0(VAR_1);

  for (VAR_2 = 0; VAR_2 < 256; VAR_2++)
  {
    UInt32 VAR_3 = VAR_2;
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
      VAR_3 = (VAR_3 >> 1) ^ (VAR_0 & ~((VAR_3 & 1) - 1));
    VAR_1->crc[VAR_2] = VAR_3;
  }
}
