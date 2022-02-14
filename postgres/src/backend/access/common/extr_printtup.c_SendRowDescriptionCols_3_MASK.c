
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ int32 ;
typedef scalar_t__ int16 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {scalar_t__ resorigcol; scalar_t__ resorigtbl; scalar_t__ resjunk; } ;
typedef TYPE_2__ TargetEntry ;
struct TYPE_9__ {scalar_t__ attlen; int attname; scalar_t__ atttypmod; scalar_t__ atttypid; } ;
struct TYPE_7__ {int natts; } ;
typedef int StringInfo ;
typedef scalar_t__ Oid ;
typedef int ListCell ;
typedef int List ;
typedef TYPE_3__* Form_pg_attribute ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void
FUNC_10(StringInfo VAR_2, TupleDesc VAR_3, List *VAR_4, int16 *VAR_5)
{
 int VAR_6 = VAR_3->natts;
 int VAR_7;
 ListCell *VAR_8 = FUNC_5(VAR_4);
 FUNC_2(VAR_2, (VAR_1 * VAR_0
       + sizeof(Oid)
       + sizeof(AttrNumber)
       + sizeof(Oid)
       + sizeof(int16)
       + sizeof(int32)
       + sizeof(int16)
       ) * VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7)
 {
  Form_pg_attribute VAR_9 = FUNC_1(VAR_3, VAR_7);
  Oid VAR_10 = VAR_9->atttypid;
  int32 VAR_11 = VAR_9->atttypmod;
  Oid VAR_12;
  AttrNumber VAR_13;
  int16 VAR_14;





  VAR_10 = FUNC_3(VAR_10, &VAR_11);


  while (VAR_8 &&
      ((TargetEntry *) FUNC_4(VAR_8))->resjunk)
   VAR_8 = FUNC_6(VAR_4, VAR_8);
  if (VAR_8)
  {
   TargetEntry *VAR_15 = (TargetEntry *) FUNC_4(VAR_8);

   VAR_12 = VAR_15->resorigtbl;
   VAR_13 = VAR_15->resorigcol;
   VAR_8 = FUNC_6(VAR_4, VAR_8);
  }
  else
  {

   VAR_12 = 0;
   VAR_13 = 0;
  }

  if (VAR_5)
   VAR_14 = VAR_5[VAR_7];
  else
   VAR_14 = 0;

  FUNC_9(VAR_2, FUNC_0(VAR_9->attname));
  FUNC_8(VAR_2, VAR_12);
  FUNC_7(VAR_2, VAR_13);
  FUNC_8(VAR_2, VAR_10);
  FUNC_7(VAR_2, VAR_9->attlen);
  FUNC_8(VAR_2, VAR_11);
  FUNC_7(VAR_2, VAR_14);
 }
}
