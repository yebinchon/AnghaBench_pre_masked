
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status; scalar_t__ memtupcount; int readptrcount; int eflags; TYPE_1__* readptrs; } ;
typedef TYPE_2__ Tuplestorestate ;
struct TYPE_4__ {int eflags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;

void
FUNC_1(Tuplestorestate *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_2->status != VAR_1 || VAR_2->memtupcount != 0)
  FUNC_0(VAR_0, "too late to call tuplestore_set_eflags");

 VAR_2->readptrs[0].eflags = VAR_3;
 for (VAR_4 = 1; VAR_4 < VAR_2->readptrcount; VAR_4++)
  VAR_3 |= VAR_2->readptrs[VAR_4].eflags;
 VAR_2->eflags = VAR_3;
}
