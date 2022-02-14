
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_15__ {scalar_t__ atttypid; scalar_t__ attgenerated; scalar_t__ attisdropped; } ;
struct TYPE_14__ {int out; } ;
struct TYPE_13__ {int schema_sent; } ;
struct TYPE_12__ {int natts; } ;
typedef TYPE_2__ RelationSyncEntry ;
typedef int Relation ;
typedef TYPE_3__ LogicalDecodingContext ;
typedef TYPE_4__* Form_pg_attribute ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 TYPE_1__* FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(LogicalDecodingContext *VAR_1,
      Relation VAR_2, RelationSyncEntry *VAR_3)
{
 if (!VAR_3->schema_sent)
 {
  TupleDesc VAR_4;
  int VAR_5;

  VAR_4 = FUNC_2(VAR_2);
  for (VAR_5 = 0; VAR_5 < VAR_4->natts; VAR_5++)
  {
   Form_pg_attribute VAR_6 = FUNC_3(VAR_4, VAR_5);

   if (VAR_6->attisdropped || VAR_6->attgenerated)
    continue;

   if (VAR_6->atttypid < VAR_0)
    continue;

   FUNC_0(VAR_1, 0);
   FUNC_5(VAR_1->out, VAR_6->atttypid);
   FUNC_1(VAR_1, 0);
  }

  FUNC_0(VAR_1, 0);
  FUNC_4(VAR_1->out, VAR_2);
  FUNC_1(VAR_1, 0);
  VAR_3->schema_sent = 1;
 }
}
