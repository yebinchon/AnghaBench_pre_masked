
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int outCount; char* outBuffer; int outMsgStart; int outMsgEnd; scalar_t__ Pfdebug; int pversion; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char*,char) ;
 scalar_t__ FUNC_2 (int,TYPE_1__*) ;

int
FUNC_3(char VAR_1, bool VAR_2, PGconn *VAR_3)
{
 int VAR_4;
 int VAR_5;


 if (VAR_1)
  VAR_5 = VAR_3->outCount + 1;
 else
  VAR_5 = VAR_3->outCount;


 if (VAR_2 || FUNC_0(VAR_3->pversion) >= 3)
 {
  VAR_4 = VAR_5;

  VAR_5 += 4;
 }
 else
  VAR_4 = -1;


 if (FUNC_2(VAR_5, VAR_3))
  return VAR_0;

 if (VAR_1)
  VAR_3->outBuffer[VAR_3->outCount] = VAR_1;

 VAR_3->outMsgStart = VAR_4;
 VAR_3->outMsgEnd = VAR_5;


 if (VAR_3->Pfdebug)
  FUNC_1(VAR_3->Pfdebug, "To backend> Msg %c\n",
    VAR_1 ? VAR_1 : ' ');

 return 0;
}
