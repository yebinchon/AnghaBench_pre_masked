
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int natts; int attkeys; int replident; int * atttyps; void** attnames; void* relname; void* nspname; scalar_t__ remoteid; } ;
struct TYPE_10__ {TYPE_1__ remoterel; } ;
struct TYPE_9__ {int natts; int attkeys; int replident; int * atttyps; int * attnames; int relname; int nspname; scalar_t__ remoteid; } ;
typedef int Oid ;
typedef int MemoryContext ;
typedef TYPE_2__ LogicalRepRelation ;
typedef TYPE_3__ LogicalRepRelMapEntry ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int *,void*,int ,int*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*,int ,int) ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (int ) ;

void
FUNC_8(LogicalRepRelation *VAR_3)
{
 MemoryContext VAR_4;
 LogicalRepRelMapEntry *VAR_5;
 bool VAR_6;
 int VAR_7;

 if (VAR_1 == ((void*)0))
  FUNC_4();




 VAR_5 = FUNC_2(VAR_1, (void *) &VAR_3->remoteid,
      VAR_0, &VAR_6);

 if (VAR_6)
  FUNC_3(VAR_5);

 FUNC_5(VAR_5, 0, sizeof(LogicalRepRelMapEntry));


 VAR_4 = FUNC_0(VAR_2);
 VAR_5->remoterel.remoteid = VAR_3->remoteid;
 VAR_5->remoterel.nspname = FUNC_7(VAR_3->nspname);
 VAR_5->remoterel.relname = FUNC_7(VAR_3->relname);
 VAR_5->remoterel.natts = VAR_3->natts;
 VAR_5->remoterel.attnames = FUNC_6(VAR_3->natts * sizeof(char *));
 VAR_5->remoterel.atttyps = FUNC_6(VAR_3->natts * sizeof(Oid));
 for (VAR_7 = 0; VAR_7 < VAR_3->natts; VAR_7++)
 {
  VAR_5->remoterel.attnames[VAR_7] = FUNC_7(VAR_3->attnames[VAR_7]);
  VAR_5->remoterel.atttyps[VAR_7] = VAR_3->atttyps[VAR_7];
 }
 VAR_5->remoterel.replident = VAR_3->replident;
 VAR_5->remoterel.attkeys = FUNC_1(VAR_3->attkeys);
 FUNC_0(VAR_4);
}
