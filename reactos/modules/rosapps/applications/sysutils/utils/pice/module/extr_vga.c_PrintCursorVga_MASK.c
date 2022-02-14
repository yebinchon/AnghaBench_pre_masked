
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int USHORT ;
typedef int ULONG ;
typedef int UCHAR ;
struct TYPE_2__ {int usCurX; int y; int usCurY; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,int) ;
 TYPE_1__* VAR_2 ;

void FUNC_1(BOOLEAN VAR_3)
{
    static ULONG VAR_4=0;
    USHORT VAR_5;
    UCHAR VAR_6;
    ULONG VAR_7=VAR_2[VAR_1].usCurX,VAR_8=VAR_2[VAR_1].y+VAR_2[VAR_1].usCurY;

 if( VAR_4++>250 )
 {
        VAR_4=0;

        VAR_5 = (VAR_8* VAR_0 + VAR_7);

  FUNC_0(0x0e,0x3d4);
  VAR_6=(UCHAR)((VAR_5>>8)&0xFF);
  FUNC_0(VAR_6,0x3d5);

        FUNC_0(0x0f,0x3d4);
  VAR_6=(UCHAR)(VAR_5 & 0xFF);
  FUNC_0(VAR_6,0x3d5);
    }
}
