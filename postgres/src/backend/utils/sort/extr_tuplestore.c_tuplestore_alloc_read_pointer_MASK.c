
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status; scalar_t__ memtupcount; int eflags; size_t readptrcount; size_t readptrsize; TYPE_2__* readptrs; } ;
typedef TYPE_1__ Tuplestorestate ;
struct TYPE_6__ {int eflags; } ;
typedef TYPE_2__ TSReadPointer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;

int
FUNC_2(Tuplestorestate *VAR_2, int VAR_3)
{

 if (VAR_2->status != VAR_1 || VAR_2->memtupcount != 0)
 {
  if ((VAR_2->eflags | VAR_3) != VAR_2->eflags)
   FUNC_0(VAR_0, "too late to require new tuplestore eflags");
 }


 if (VAR_2->readptrcount >= VAR_2->readptrsize)
 {
  int VAR_4 = VAR_2->readptrsize * 2;

  VAR_2->readptrs = (TSReadPointer *)
   FUNC_1(VAR_2->readptrs, VAR_4 * sizeof(TSReadPointer));
  VAR_2->readptrsize = VAR_4;
 }


 VAR_2->readptrs[VAR_2->readptrcount] = VAR_2->readptrs[0];
 VAR_2->readptrs[VAR_2->readptrcount].eflags = VAR_3;

 VAR_2->eflags |= VAR_3;

 return VAR_2->readptrcount++;
}
