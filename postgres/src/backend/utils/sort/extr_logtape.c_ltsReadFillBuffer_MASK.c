
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {long next; } ;
struct TYPE_4__ {scalar_t__ nbytes; scalar_t__ buffer_size; char* buffer; long nextBlockNumber; long curBlockNumber; int frozen; scalar_t__ offsetBlockNumber; scalar_t__ pos; } ;
typedef int LogicalTapeSet ;
typedef TYPE_1__ LogicalTape ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int *,long,void*) ;
 int FUNC_4 (int *,long) ;

__attribute__((used)) static bool
FUNC_5(LogicalTapeSet *VAR_1, LogicalTape *VAR_2)
{
 VAR_2->pos = 0;
 VAR_2->nbytes = 0;

 do
 {
  char *VAR_3 = VAR_2->buffer + VAR_2->nbytes;
  long VAR_4 = VAR_2->nextBlockNumber;


  if (VAR_4 == -1L)
   break;

  VAR_4 += VAR_2->offsetBlockNumber;


  FUNC_3(VAR_1, VAR_4, (void *) VAR_3);
  if (!VAR_2->frozen)
   FUNC_4(VAR_1, VAR_4);
  VAR_2->curBlockNumber = VAR_2->nextBlockNumber;

  VAR_2->nbytes += FUNC_0(VAR_3);
  if (FUNC_2(VAR_3))
  {
   VAR_2->nextBlockNumber = -1L;

   break;
  }
  else
   VAR_2->nextBlockNumber = FUNC_1(VAR_3)->next;


 } while (VAR_2->buffer_size - VAR_2->nbytes > VAR_0);

 return (VAR_2->nbytes > 0);
}
