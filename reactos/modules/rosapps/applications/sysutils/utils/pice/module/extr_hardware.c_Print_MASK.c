
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t USHORT ;
typedef size_t ULONG ;
typedef int UCHAR ;
struct TYPE_2__ {int usCurX; scalar_t__ y; scalar_t__ usCurY; scalar_t__ cy; scalar_t__ bScrollDisabled; } ;
typedef char* LPSTR ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 () ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_5 (scalar_t__,scalar_t__,char) ;
 int FUNC_6 (size_t) ;
 scalar_t__ VAR_4 ;
 char** VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 TYPE_1__* VAR_8 ;

void FUNC_7(USHORT VAR_9,LPSTR VAR_10)
{
 ULONG VAR_11;

 FUNC_3((11,"%s",VAR_10));


    if(!VAR_6)
    {
        FUNC_3((0,"Print(): console is not initialized!\n"));

        return;
    }



 if(VAR_9 == VAR_2)
 {
        FUNC_3((0,"Print(): OUTPUT_WINDOW\n"));
  if(FUNC_0(VAR_10))
        {
            FUNC_3((0,"Print(): checking ring buffer\n"));
            FUNC_1();
        }
        else
        {
            FUNC_3((0,"Print(): outputting a line from ring buffer\n"));
            VAR_8[VAR_2].usCurX = 0;
      FUNC_2(VAR_8[VAR_2].y+VAR_8[VAR_2].usCurY);
      FUNC_7(VAR_3,VAR_5[VAR_7]);
        }
 }
 else
 {
        BOOLEAN VAR_12 = VAR_4;

  if(VAR_9 == VAR_3)
        {
   VAR_9 = VAR_2;
        }

        for(VAR_11=0;VAR_10[VAR_11]!=0;VAR_11++)
  {
            if(VAR_8[VAR_9].usCurX > (VAR_1-1))
                VAR_12 = VAR_0;


   if(VAR_10[VAR_11]=='\n')
   {
    VAR_8[VAR_9].usCurX = 0;
    VAR_8[VAR_9].usCurY++;
    if(VAR_8[VAR_9].usCurY>=VAR_8[VAR_9].cy)
    {
     VAR_8[VAR_9].usCurY=VAR_8[VAR_9].cy-1;
     FUNC_6(VAR_9);
    }
                if(VAR_8[VAR_9].bScrollDisabled==VAR_4)break;
   }

   else if(VAR_10[VAR_11]=='\b')
   {
    if(VAR_8[VAR_9].usCurX>0)
    {
     VAR_8[VAR_9].usCurX--;
                    if(VAR_12)
         FUNC_5(VAR_8[VAR_9].usCurX,VAR_8[VAR_9].y+VAR_8[VAR_9].usCurY,0x20);
    }

   }

   else if(VAR_10[VAR_11]=='\t')
   {
    if((VAR_8[VAR_9].usCurX + 4) < (VAR_1-1))
    {
     VAR_8[VAR_9].usCurX += 4;
    }
   }
   else
   {
    if((UCHAR)VAR_10[VAR_11]<0x20 || (UCHAR)VAR_10[VAR_11]>0x7f)
     VAR_10[VAR_11]=0x20;

                if(VAR_12)
        FUNC_5(VAR_8[VAR_9].usCurX,VAR_8[VAR_9].y+VAR_8[VAR_9].usCurY,VAR_10[VAR_11]);

    VAR_8[VAR_9].usCurX++;
   }
  }


        FUNC_4();
 }

}
