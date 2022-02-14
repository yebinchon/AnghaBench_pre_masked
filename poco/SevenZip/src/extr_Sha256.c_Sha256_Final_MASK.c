
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UInt64 ;
typedef int UInt32 ;
struct TYPE_5__ {int count; int* buffer; int* state; } ;
typedef TYPE_1__ CSha256 ;
typedef void* Byte ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(CSha256 *VAR_0, Byte *VAR_1)
{
  UInt64 VAR_2 = (VAR_0->count << 3);
  UInt32 VAR_3 = (UInt32)VAR_0->count & 0x3F;
  unsigned VAR_4;
  VAR_0->buffer[VAR_3++] = 0x80;
  while (VAR_3 != (64 - 8))
  {
    VAR_3 &= 0x3F;
    if (VAR_3 == 0)
      FUNC_1(VAR_0);
    VAR_0->buffer[VAR_3++] = 0;
  }
  for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
  {
    VAR_0->buffer[VAR_3++] = (Byte)(VAR_2 >> 56);
    VAR_2 <<= 8;
  }
  FUNC_1(VAR_0);

  for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
  {
    *VAR_1++ = (Byte)(VAR_0->state[VAR_4] >> 24);
    *VAR_1++ = (Byte)(VAR_0->state[VAR_4] >> 16);
    *VAR_1++ = (Byte)(VAR_0->state[VAR_4] >> 8);
    *VAR_1++ = (Byte)(VAR_0->state[VAR_4]);
  }
  FUNC_0(VAR_0);
}
