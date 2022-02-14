
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int arc_insn ;



int
FUNC_0 (arc_insn VAR_0, int VAR_1)
{
  int VAR_2 = -1;


  if (VAR_1)
    {
      switch (VAR_0 & 0xfe00)
 {

 case 0xc800:
   VAR_2 = 10;
   break;


 case 0xca00:
   VAR_2 = 11;
   break;


 case 0xcc00:
   VAR_2 = 12;
   break;
 }
    }
  else
    {

      switch (VAR_0 & 0xf8000180)
 {

 case 0x10000000:
  if (((VAR_0 >> 9) & 3) == 3) {
   VAR_2 = 0;
  } else {
   VAR_2 = 1;
  }
  break;


 case 0x10000100:
  if (((VAR_0 >> 9) & 3) == 3) {
   VAR_2 = 2;
  } else {
   VAR_2 = 1;
  }
  break;


 case 0x10000080:
   VAR_2 = 1;
   break;

 }
    }

  return VAR_2;
}
