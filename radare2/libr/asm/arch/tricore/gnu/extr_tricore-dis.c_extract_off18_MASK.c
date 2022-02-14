
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long opcode; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static unsigned long
FUNC_0 ()
{
  unsigned long VAR_1, VAR_2, VAR_3, VAR_4;
  unsigned long VAR_5 = VAR_0.opcode;

  VAR_1 = (VAR_5 & 0x003f0000) >> 16;
  VAR_2 = (VAR_5 & 0xf0000000) >> 22;
  VAR_3 = (VAR_5 & 0x03c00000) >> 12;
  VAR_4 = (VAR_5 & 0x0000f000) << 2;
  return VAR_1 | VAR_2 | VAR_3 | VAR_4;
}
