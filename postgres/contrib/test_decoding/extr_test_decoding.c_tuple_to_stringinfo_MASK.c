
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {scalar_t__ attnum; int attname; int atttypid; scalar_t__ attisdropped; } ;
struct TYPE_7__ {int natts; } ;
typedef int StringInfo ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char) ;
 int FUNC_7 (int ,char*) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int ,int *,int*) ;
 int FUNC_10 (int ,int,TYPE_1__*,int*) ;
 int FUNC_11 (int ,int ,int ) ;
 char* FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(StringInfo VAR_0, TupleDesc VAR_1, HeapTuple VAR_2, bool VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_1->natts; VAR_4++)
 {
  Form_pg_attribute VAR_5;
  Oid VAR_6;
  Oid VAR_7;
  bool VAR_8;
  Datum VAR_9;
  bool VAR_10;

  VAR_5 = FUNC_4(VAR_1, VAR_4);





  if (VAR_5->attisdropped)
   continue;





  if (VAR_5->attnum < 0)
   continue;

  VAR_6 = VAR_5->atttypid;


  VAR_9 = FUNC_10(VAR_2, VAR_4 + 1, VAR_1, &VAR_10);

  if (VAR_10 && VAR_3)
   continue;


  FUNC_6(VAR_0, ' ');
  FUNC_7(VAR_0, FUNC_12(FUNC_0(VAR_5->attname)));


  FUNC_6(VAR_0, '[');
  FUNC_7(VAR_0, FUNC_8(VAR_6));
  FUNC_6(VAR_0, ']');


  FUNC_9(VAR_6,
        &VAR_7, &VAR_8);


  FUNC_6(VAR_0, ':');


  if (VAR_10)
   FUNC_7(VAR_0, "null");
  else if (VAR_8 && FUNC_5(VAR_9))
   FUNC_7(VAR_0, "unchanged-toast-datum");
  else if (!VAR_8)
   FUNC_11(VAR_0, VAR_6,
        FUNC_1(VAR_7, VAR_9));
  else
  {
   Datum VAR_11;

   VAR_11 = FUNC_3(FUNC_2(VAR_9));
   FUNC_11(VAR_0, VAR_6, FUNC_1(VAR_7, VAR_11));
  }
 }
}
