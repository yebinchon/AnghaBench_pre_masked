
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_2__ {scalar_t__ y; int usCurX; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 () ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,char*) ;
 char** VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;

void FUNC_6(ULONG VAR_8)
{
 ULONG VAR_9 = FUNC_4();
 ULONG VAR_10,VAR_11=0;



 if(VAR_4)
    {
        FUNC_1((0,"PrintRingBuffer(): suspended\n"));
        FUNC_3();
        return;
    }

 if(!VAR_9)
    {
        FUNC_1((0,"PrintRingBuffer(): no lines in ring buffer\n"));
        FUNC_3();
  return;
    }

    if(VAR_9<VAR_6)
    {
        FUNC_1((0,"PrintRingBuffer(): lines already output\n"));
        FUNC_3();
        return;
    }

    VAR_6 = VAR_9;

 if(VAR_9 < VAR_8)
    {
        FUNC_1((0,"PrintRingBuffer(): less lines than requested: ulDelta: %x, ulLines: %x\n", VAR_9, VAR_8));
  VAR_8 = VAR_9;
    }

 VAR_10 = (VAR_5-VAR_8)%VAR_0;
    FUNC_1((0,"PrintRingBuffer(): ulOutPos = %u\n",VAR_10));

    FUNC_2(VAR_1);

 while(VAR_8--)
 {
        FUNC_0(VAR_7[VAR_1].y+VAR_11);
  FUNC_5(VAR_2,VAR_3[VAR_10]);
     VAR_11++;
  VAR_10 = (VAR_10+1)%VAR_0;
 }

    if(VAR_3[VAR_10][0]==':')
    {
        FUNC_0(VAR_7[VAR_1].y+VAR_11);
  FUNC_5(VAR_2,VAR_3[VAR_10]);
     VAR_7[VAR_1].usCurX = 1;
    }


}
