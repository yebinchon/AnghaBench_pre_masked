
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int eflags; int interXact; int truncated; int allowedMem; int availMem; int memtupsize; int growmemtuples; void** memtuples; int readptrcount; int readptrsize; TYPE_2__* readptrs; scalar_t__ activeptr; scalar_t__ tuples; scalar_t__ memtupcount; scalar_t__ memtupdeleted; int resowner; int context; int * myfile; int status; } ;
typedef TYPE_1__ Tuplestorestate ;
struct TYPE_6__ {int eflags; int eof_reached; scalar_t__ current; } ;
typedef TYPE_2__ TSReadPointer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static Tuplestorestate *
FUNC_5(int VAR_4, bool VAR_5, int VAR_6)
{
 Tuplestorestate *VAR_7;

 VAR_7 = (Tuplestorestate *) FUNC_4(sizeof(Tuplestorestate));

 VAR_7->status = VAR_3;
 VAR_7->eflags = VAR_4;
 VAR_7->interXact = VAR_5;
 VAR_7->truncated = 0;
 VAR_7->allowedMem = VAR_6 * 1024L;
 VAR_7->availMem = VAR_7->allowedMem;
 VAR_7->myfile = ((void*)0);
 VAR_7->context = VAR_1;
 VAR_7->resowner = VAR_2;

 VAR_7->memtupdeleted = 0;
 VAR_7->memtupcount = 0;
 VAR_7->tuples = 0;





 VAR_7->memtupsize = FUNC_1(16384 / sizeof(void *),
       VAR_0 / sizeof(void *) + 1);

 VAR_7->growmemtuples = 1;
 VAR_7->memtuples = (void **) FUNC_3(VAR_7->memtupsize * sizeof(void *));

 FUNC_2(VAR_7, FUNC_0(VAR_7->memtuples));

 VAR_7->activeptr = 0;
 VAR_7->readptrcount = 1;
 VAR_7->readptrsize = 8;
 VAR_7->readptrs = (TSReadPointer *)
  FUNC_3(VAR_7->readptrsize * sizeof(TSReadPointer));

 VAR_7->readptrs[0].eflags = VAR_4;
 VAR_7->readptrs[0].eof_reached = 0;
 VAR_7->readptrs[0].current = 0;

 return VAR_7;
}
