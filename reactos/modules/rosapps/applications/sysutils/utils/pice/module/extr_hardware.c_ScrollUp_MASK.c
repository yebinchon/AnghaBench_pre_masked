
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t USHORT ;
struct TYPE_2__ {size_t cy; size_t y; int bScrollDisabled; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t,size_t) ;
 TYPE_1__* VAR_0 ;

void FUNC_2(USHORT VAR_1)
{
    USHORT VAR_2;

    return;

 if(!VAR_0[VAR_1].bScrollDisabled)
 {
  for(VAR_2=1;VAR_2<VAR_0[VAR_1].cy;VAR_2++)
  {
   FUNC_1((USHORT)(VAR_0[VAR_1].y+VAR_2-1),(USHORT)(VAR_0[VAR_1].y+VAR_2));
  }
  FUNC_0((USHORT)(VAR_0[VAR_1].y+VAR_0[VAR_1].cy-1));
 }
}
