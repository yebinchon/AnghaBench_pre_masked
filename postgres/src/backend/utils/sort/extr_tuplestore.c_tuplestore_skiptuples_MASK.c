
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_5__ {size_t activeptr; int status; scalar_t__ memtupcount; scalar_t__ memtupdeleted; int truncated; TYPE_2__* readptrs; } ;
typedef TYPE_1__ Tuplestorestate ;
struct TYPE_6__ {int eflags; int eof_reached; scalar_t__ current; } ;
typedef TYPE_2__ TSReadPointer ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;

 int FUNC_2 (void*) ;
 void* FUNC_3 (TYPE_1__*,int,int*) ;

bool
FUNC_4(Tuplestorestate *VAR_1, int64 VAR_2, bool VAR_3)
{
 TSReadPointer *VAR_4 = &VAR_1->readptrs[VAR_1->activeptr];

 FUNC_0(VAR_3 || (VAR_4->eflags & VAR_0));

 if (VAR_2 <= 0)
  return 1;

 switch (VAR_1->status)
 {
  case 128:
   if (VAR_3)
   {
    if (VAR_4->eof_reached)
     return 0;
    if (VAR_1->memtupcount - VAR_4->current >= VAR_2)
    {
     VAR_4->current += VAR_2;
     return 1;
    }
    VAR_4->current = VAR_1->memtupcount;
    VAR_4->eof_reached = 1;
    return 0;
   }
   else
   {
    if (VAR_4->eof_reached)
    {
     VAR_4->current = VAR_1->memtupcount;
     VAR_4->eof_reached = 0;
     VAR_2--;
    }
    if (VAR_4->current - VAR_1->memtupdeleted > VAR_2)
    {
     VAR_4->current -= VAR_2;
     return 1;
    }
    FUNC_0(!VAR_1->truncated);
    VAR_4->current = VAR_1->memtupdeleted;
    return 0;
   }
   break;

  default:

   while (VAR_2-- > 0)
   {
    void *VAR_5;
    bool VAR_6;

    VAR_5 = FUNC_3(VAR_1, VAR_3, &VAR_6);

    if (VAR_5 == ((void*)0))
     return 0;
    if (VAR_6)
     FUNC_2(VAR_5);
    FUNC_1();
   }
   return 1;
 }
}
