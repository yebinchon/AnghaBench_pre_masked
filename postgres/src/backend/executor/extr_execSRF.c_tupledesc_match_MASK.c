
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {scalar_t__ attlen; scalar_t__ attalign; int atttypid; int attisdropped; } ;
struct TYPE_7__ {int natts; } ;
typedef TYPE_2__* Form_pg_attribute ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (char*,char*,int,int,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(TupleDesc VAR_2, TupleDesc VAR_3)
{
 int VAR_4;

 if (VAR_2->natts != VAR_3->natts)
  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_6("function return row and query-specified return row do not match"),
     FUNC_5("Returned row contains %d attribute, but query expects %d.",
          "Returned row contains %d attributes, but query expects %d.",
          VAR_3->natts,
          VAR_3->natts, VAR_2->natts)));

 for (VAR_4 = 0; VAR_4 < VAR_2->natts; VAR_4++)
 {
  Form_pg_attribute VAR_5 = FUNC_1(VAR_2, VAR_4);
  Form_pg_attribute VAR_6 = FUNC_1(VAR_3, VAR_4);

  if (FUNC_0(VAR_6->atttypid, VAR_5->atttypid))
   continue;
  if (!VAR_5->attisdropped)
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_6("function return row and query-specified return row do not match"),
      FUNC_4("Returned type %s at ordinal position %d, but query expects %s.",
          FUNC_7(VAR_6->atttypid),
          VAR_4 + 1,
          FUNC_7(VAR_5->atttypid))));

  if (VAR_5->attlen != VAR_6->attlen ||
   VAR_5->attalign != VAR_6->attalign)
   FUNC_2(VAR_1,
     (FUNC_3(VAR_0),
      FUNC_6("function return row and query-specified return row do not match"),
      FUNC_4("Physical storage mismatch on dropped attribute at ordinal position %d.",
          VAR_4 + 1)));
 }
}
