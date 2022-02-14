
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* tts_tupleDescriptor; } ;
typedef TYPE_1__ TupleTableSlot ;
typedef TYPE_2__* TupleDesc ;
struct TYPE_9__ {scalar_t__ atttypid; scalar_t__ attisdropped; } ;
struct TYPE_8__ {int natts; scalar_t__ tdtypeid; } ;
typedef scalar_t__ Oid ;
typedef TYPE_3__* Form_pg_attribute ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void
FUNC_7(TupleTableSlot *VAR_3, int VAR_4, Oid VAR_5)
{
 if (VAR_4 > 0)
 {
  TupleDesc VAR_6 = VAR_3->tts_tupleDescriptor;
  Form_pg_attribute VAR_7;

  if (VAR_4 > VAR_6->natts)
   FUNC_1(VAR_2, "attribute number %d exceeds number of columns %d",
     VAR_4, VAR_6->natts);

  VAR_7 = FUNC_0(VAR_6, VAR_4 - 1);

  if (VAR_7->attisdropped)
   FUNC_2(VAR_2,
     (FUNC_3(VAR_1),
      FUNC_5("attribute %d of type %s has been dropped",
       VAR_4, FUNC_6(VAR_6->tdtypeid))));

  if (VAR_5 != VAR_7->atttypid)
   FUNC_2(VAR_2,
     (FUNC_3(VAR_0),
      FUNC_5("attribute %d of type %s has wrong type",
       VAR_4, FUNC_6(VAR_6->tdtypeid)),
      FUNC_4("Table has type %s, but query expects %s.",
          FUNC_6(VAR_7->atttypid),
          FUNC_6(VAR_5))));
 }
}
