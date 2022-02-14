
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int outMsgEnd; int outCount; scalar_t__ outMsgStart; int outBuffer; scalar_t__ Pfdebug; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,char*,int) ;
 int FUNC_1 (int,int*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;

int
FUNC_4(PGconn *VAR_1)
{
 if (VAR_1->Pfdebug)
  FUNC_0(VAR_1->Pfdebug, "To backend> Msg complete, length %u\n",
    VAR_1->outMsgEnd - VAR_1->outCount);


 if (VAR_1->outMsgStart >= 0)
 {
  uint32 VAR_2 = VAR_1->outMsgEnd - VAR_1->outMsgStart;

  VAR_2 = FUNC_2(VAR_2);
  FUNC_1(VAR_1->outBuffer + VAR_1->outMsgStart, &VAR_2, 4);
 }


 VAR_1->outCount = VAR_1->outMsgEnd;

 if (VAR_1->outCount >= 8192)
 {
  int VAR_3 = VAR_1->outCount - (VAR_1->outCount % 8192);

  if (FUNC_3(VAR_1, VAR_3) < 0)
   return VAR_0;

 }

 return 0;
}
