
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_4__ {char* Cmd; scalar_t__ CommandGroup; int Help; } ;
struct TYPE_3__ {scalar_t__ cy; scalar_t__ y; } ;
typedef char* LPSTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_2__* VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*,int ) ;
 int FUNC_5 (char*,int,scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 char* VAR_5 ;
 TYPE_1__* VAR_6 ;

LPSTR FUNC_9(LPSTR VAR_7)
{
    ULONG VAR_8,VAR_9,VAR_10=0;
    LPSTR VAR_11=((void*)0);

 VAR_5[0]=0;
 for(VAR_9=0,VAR_8=0;VAR_3[VAR_8].Cmd!=((void*)0);VAR_8++)
 {
  if(FUNC_4(VAR_3[VAR_8].Cmd,VAR_7,FUNC_3(VAR_7)) == 0 &&
           VAR_3[VAR_8].CommandGroup != VAR_2)
  {
   if(FUNC_3(VAR_5))
    FUNC_2(VAR_5,", ");
   FUNC_2(VAR_5,VAR_3[VAR_8].Cmd);
   VAR_9++;
   VAR_10=VAR_8;
  }
 }
 if(FUNC_3(VAR_5))
 {
  FUNC_7(VAR_0);
  FUNC_8(VAR_1);
  FUNC_0(VAR_6[VAR_4].y+VAR_6[VAR_4].cy);
  FUNC_5(VAR_5,1,VAR_6[VAR_4].y+VAR_6[VAR_4].cy);
  if(VAR_9==1)
  {
   FUNC_1(VAR_5,"%s",VAR_3[VAR_10].Help);
   FUNC_5(VAR_5,40,VAR_6[VAR_4].y+VAR_6[VAR_4].cy);
   VAR_11=VAR_3[VAR_10].Cmd;
  }
        FUNC_6();
 }
 return VAR_11;
}
