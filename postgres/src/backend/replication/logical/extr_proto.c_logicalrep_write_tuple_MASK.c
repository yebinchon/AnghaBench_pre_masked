
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint16 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_18__ {int attlen; int atttypid; scalar_t__ attgenerated; scalar_t__ attisdropped; } ;
struct TYPE_17__ {int typoutput; } ;
struct TYPE_16__ {scalar_t__ t_len; } ;
struct TYPE_15__ {int natts; } ;
typedef int StringInfo ;
typedef int Relation ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_type ;
typedef TYPE_4__* Form_pg_attribute ;
typedef int Datum ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int ,int ) ;
 int VAR_2 ;
 TYPE_4__* FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (TYPE_2__*,TYPE_1__*,int *,int*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,char) ;
 int FUNC_14 (int ,char*,int ,int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static void
FUNC_17(StringInfo VAR_3, Relation VAR_4, HeapTuple VAR_5)
{
 TupleDesc VAR_6;
 Datum VAR_7[VAR_1];
 bool VAR_8[VAR_1];
 int VAR_9;
 uint16 VAR_10 = 0;

 VAR_6 = FUNC_4(VAR_4);

 for (VAR_9 = 0; VAR_9 < VAR_6->natts; VAR_9++)
 {
  if (FUNC_7(VAR_6, VAR_9)->attisdropped || FUNC_7(VAR_6, VAR_9)->attgenerated)
   continue;
  VAR_10++;
 }
 FUNC_15(VAR_3, VAR_10);


 FUNC_10(VAR_3, VAR_5->t_len +
       VAR_10 * (1 + 4));

 FUNC_11(VAR_5, VAR_6, VAR_7, VAR_8);


 for (VAR_9 = 0; VAR_9 < VAR_6->natts; VAR_9++)
 {
  HeapTuple VAR_11;
  Form_pg_type VAR_12;
  Form_pg_attribute VAR_13 = FUNC_7(VAR_6, VAR_9);
  char *VAR_14;

  if (VAR_13->attisdropped || VAR_13->attgenerated)
   continue;

  if (VAR_8[VAR_9])
  {
   FUNC_13(VAR_3, 'n');
   continue;
  }
  else if (VAR_13->attlen == -1 && FUNC_8(VAR_7[VAR_9]))
  {
   FUNC_13(VAR_3, 'u');
   continue;
  }

  VAR_11 = FUNC_6(VAR_2, FUNC_2(VAR_13->atttypid));
  if (!FUNC_1(VAR_11))
   FUNC_9(VAR_0, "cache lookup failed for type %u", VAR_13->atttypid);
  VAR_12 = (Form_pg_type) FUNC_0(VAR_11);

  FUNC_13(VAR_3, 't');

  VAR_14 = FUNC_3(VAR_12->typoutput, VAR_7[VAR_9]);
  FUNC_14(VAR_3, VAR_14, FUNC_16(VAR_14), 0);
  FUNC_12(VAR_14);

  FUNC_5(VAR_11);
 }
}
