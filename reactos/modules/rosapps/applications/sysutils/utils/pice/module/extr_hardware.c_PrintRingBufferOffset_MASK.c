
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_2__ {scalar_t__ y; scalar_t__ cy; scalar_t__ usCurY; scalar_t__ usCurX; } ;
typedef int BOOLEAN ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 () ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_4 ;
 char** VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;

BOOLEAN FUNC_7(ULONG VAR_8,ULONG VAR_9)
{
 ULONG VAR_10 = FUNC_4();
 ULONG VAR_11,VAR_12=0;




 if(!VAR_10)
    {
        FUNC_1((0,"PrintRingBufferOffset(): ulLinesInRingBuffer is 0\n"));
        FUNC_3();
  return VAR_0;
    }


 if(VAR_10 < VAR_8)
    {
        VAR_8 = VAR_10;
    }

 if(VAR_10 < VAR_9+VAR_8)
    {
        FUNC_1((0,"PrintRingBufferOffset(): ulLinesInRingBuffer < ulOffset+ulLines\n"));
        FUNC_3();
        return VAR_0;
    }

    FUNC_1((0,"PrintRingBufferOffset(): ulLinesInRingBuffer %u ulLines %u ulOffset %u\n",VAR_10,VAR_8,VAR_9));

    VAR_11 = (VAR_6-VAR_9-VAR_8)%VAR_1;

    FUNC_1((0,"PrintRingBufferOffset(): ulOutPos = %u\n",VAR_11));

    if(VAR_11 == VAR_6)
    {
        FUNC_1((0,"PrintRingBufferOffset(): ulOutPos == ulInPos\n"));
        FUNC_3();
        return VAR_0;
    }


 FUNC_2(VAR_2);


 while(VAR_8--)
 {
        FUNC_0(VAR_7[VAR_2].y+VAR_12);
  FUNC_6(VAR_3,VAR_5[VAR_11]);
  VAR_12++;
  VAR_11 = (VAR_11+1)%VAR_1;
 }

    if(VAR_5[VAR_6][0]==':')
    {
        FUNC_0(VAR_7[VAR_2].y+VAR_7[VAR_2].cy-1);
        VAR_7[VAR_2].usCurY = VAR_7[VAR_2].cy-1;
  FUNC_6(VAR_3,VAR_5[VAR_6]);
     VAR_7[VAR_2].usCurX = FUNC_5(VAR_5[VAR_6])+1;
    }


    return VAR_4;
}
