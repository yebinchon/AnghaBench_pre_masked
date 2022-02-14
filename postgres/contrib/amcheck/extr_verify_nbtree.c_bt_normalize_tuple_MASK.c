
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_19__ {int rel; } ;
struct TYPE_18__ {int attlen; scalar_t__ attbyval; int attnum; } ;
struct TYPE_17__ {int t_tid; } ;
struct TYPE_16__ {int natts; } ;
typedef TYPE_2__* IndexTuple ;
typedef TYPE_3__* Form_pg_attribute ;
typedef int Datum ;
typedef TYPE_4__ BtreeCheckState ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (TYPE_1__*,int) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int ,int ,int ) ;
 TYPE_2__* FUNC_14 (TYPE_1__*,int *,int*) ;
 int FUNC_15 (TYPE_2__*,int ,TYPE_1__*,int*) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static IndexTuple
FUNC_17(BtreeCheckState *VAR_3, IndexTuple VAR_4)
{
 TupleDesc VAR_5 = FUNC_6(VAR_3->rel);
 Datum VAR_6[VAR_2];
 bool VAR_7[VAR_2];
 bool VAR_8[VAR_2];
 bool VAR_9 = 0;
 IndexTuple VAR_10;
 int VAR_11;


 if (!FUNC_1(VAR_4))
  return VAR_4;

 for (VAR_11 = 0; VAR_11 < VAR_5->natts; VAR_11++)
 {
  Form_pg_attribute VAR_12;

  VAR_12 = FUNC_8(VAR_5, VAR_11);


  VAR_8[VAR_11] = 0;
  VAR_6[VAR_11] = FUNC_15(VAR_4, VAR_12->attnum,
           VAR_5,
           &VAR_7[VAR_11]);
  if (VAR_12->attbyval || VAR_12->attlen != -1 || VAR_7[VAR_11])
   continue;






  if (FUNC_10(FUNC_0(VAR_6[VAR_11])))
   FUNC_11(VAR_1,
     (FUNC_12(VAR_0),
      FUNC_13("external varlena datum in tuple that references heap row (%u,%u) in index \"%s\"",
       FUNC_2(&(VAR_4->t_tid)),
       FUNC_3(&(VAR_4->t_tid)),
       FUNC_7(VAR_3->rel))));
  else if (FUNC_9(FUNC_0(VAR_6[VAR_11])))
  {
   VAR_9 = 1;
   VAR_6[VAR_11] = FUNC_5(FUNC_4(VAR_6[VAR_11]));
   VAR_8[VAR_11] = 1;
  }
 }


 if (!VAR_9)
  return VAR_4;
 VAR_10 = FUNC_14(VAR_5, VAR_6, VAR_7);
 VAR_10->t_tid = VAR_4->t_tid;


 for (VAR_11 = 0; VAR_11 < VAR_5->natts; VAR_11++)
  if (VAR_8[VAR_11])
   FUNC_16(FUNC_0(VAR_6[VAR_11]));

 return VAR_10;
}
