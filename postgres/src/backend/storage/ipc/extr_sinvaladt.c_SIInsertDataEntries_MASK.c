
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hasMessages; } ;
struct TYPE_4__ {int maxMsgNum; int minMsgNum; int nextThreshold; int lastBackend; TYPE_2__* procState; int msgnumLock; int * buffer; } ;
typedef int SharedInvalidationMessage ;
typedef TYPE_1__ SISeg ;
typedef TYPE_2__ ProcState ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

void
FUNC_6(const SharedInvalidationMessage *VAR_5, int VAR_6)
{
 SISeg *VAR_7 = VAR_4;
 while (VAR_6 > 0)
 {
  int VAR_8 = FUNC_2(VAR_6, VAR_3);
  int VAR_9;
  int VAR_10;
  int VAR_11;

  VAR_6 -= VAR_8;

  FUNC_0(VAR_2, VAR_0);
  for (;;)
  {
   VAR_9 = VAR_7->maxMsgNum - VAR_7->minMsgNum;
   if (VAR_9 + VAR_8 > VAR_1 ||
    VAR_9 >= VAR_7->nextThreshold)
    FUNC_3(1, VAR_8);
   else
    break;
  }




  VAR_10 = VAR_7->maxMsgNum;
  while (VAR_8-- > 0)
  {
   VAR_7->buffer[VAR_10 % VAR_1] = *VAR_5++;
   VAR_10++;
  }


  FUNC_4(&VAR_7->msgnumLock);
  VAR_7->maxMsgNum = VAR_10;
  FUNC_5(&VAR_7->msgnumLock);
  for (VAR_11 = 0; VAR_11 < VAR_7->lastBackend; VAR_11++)
  {
   ProcState *VAR_12 = &VAR_7->procState[VAR_11];

   VAR_12->hasMessages = 1;
  }

  FUNC_1(VAR_2);
 }
}
