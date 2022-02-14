
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {scalar_t__ count; int * buffer; } ;
typedef TYPE_1__ CSha256 ;
typedef int Byte ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(CSha256 *VAR_0, const Byte *VAR_1, size_t VAR_2)
{
  UInt32 VAR_3 = (UInt32)VAR_0->count & 0x3F;
  while (VAR_2 > 0)
  {
    VAR_0->buffer[VAR_3++] = *VAR_1++;
    VAR_0->count++;
    VAR_2--;
    if (VAR_3 == 64)
    {
      VAR_3 = 0;
      FUNC_0(VAR_0);
    }
  }
}
