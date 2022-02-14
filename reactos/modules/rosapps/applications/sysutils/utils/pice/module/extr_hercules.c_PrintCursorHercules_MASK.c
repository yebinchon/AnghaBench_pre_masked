
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_2__ {int usCurX; int y; int usCurY; } ;
typedef int* PUCHAR ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 TYPE_1__* VAR_4 ;

void FUNC_1(BOOLEAN VAR_5)
{
    static ULONG VAR_6=0;

 if( (VAR_5) || ((VAR_6++>100) && VAR_1) )
 {
     ULONG VAR_7;
     ULONG VAR_8,VAR_9;
        ULONG VAR_10;

        VAR_8=VAR_4[VAR_0].usCurX;
        VAR_9=VAR_4[VAR_0].y+VAR_4[VAR_0].usCurY;

        VAR_10 = VAR_9<<3;
  for(VAR_7=0;VAR_7<8;VAR_7++,VAR_10++)
  {
            *(PUCHAR)(VAR_3[VAR_10 & 0x3] + ( 90* (VAR_10 >> 2) ) + VAR_8) ^= 0xFF ;
  }
  VAR_2=!VAR_2;
        VAR_6=0;
    }

 FUNC_0(2500);
}
