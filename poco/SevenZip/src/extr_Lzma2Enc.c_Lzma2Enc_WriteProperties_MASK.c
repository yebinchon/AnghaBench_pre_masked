
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_3__ {int lzmaProps; } ;
struct TYPE_4__ {TYPE_1__ props; } ;
typedef scalar_t__ CLzma2EncHandle ;
typedef TYPE_2__ CLzma2Enc ;
typedef int Byte ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int *) ;

Byte FUNC_2(CLzma2EncHandle VAR_0)
{
  CLzma2Enc *VAR_1 = (CLzma2Enc *)VAR_0;
  unsigned VAR_2;
  UInt32 VAR_3 = FUNC_1(&VAR_1->props.lzmaProps);
  for (VAR_2 = 0; VAR_2 < 40; VAR_2++)
    if (VAR_3 <= FUNC_0(VAR_2))
      break;
  return (Byte)VAR_2;
}
