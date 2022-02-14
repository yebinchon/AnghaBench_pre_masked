
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int repl_val ;
typedef int repl_repl ;
typedef int repl_null ;
struct TYPE_12__ {scalar_t__ atthasmissing; } ;
struct TYPE_11__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int VAR_6 ;
 TYPE_1__* FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,char*,int,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 TYPE_1__* FUNC_13 (TYPE_1__*,int ,int*,int*,int*) ;
 int FUNC_14 (int*,int,int) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;

void
FUNC_17(Relation VAR_7)
{
 Relation VAR_8;
 Oid VAR_9 = FUNC_8(VAR_7);
 int VAR_10 = FUNC_7(VAR_7);
 int VAR_11;
 Datum VAR_12[VAR_5];
 bool VAR_13[VAR_5];
 bool VAR_14[VAR_5];
 Form_pg_attribute VAR_15;
 HeapTuple VAR_16,
    VAR_17;

 FUNC_14(VAR_12, 0, sizeof(VAR_12));
 FUNC_14(VAR_13, 0, sizeof(VAR_13));
 FUNC_14(VAR_14, 0, sizeof(VAR_14));

 VAR_12[VAR_1 - 1] = FUNC_0(0);
 VAR_13[VAR_2 - 1] = 1;

 VAR_14[VAR_1 - 1] = 1;
 VAR_14[VAR_2 - 1] = 1;



 VAR_8 = FUNC_16(VAR_3, VAR_6);


 for (VAR_11 = 1; VAR_11 <= VAR_10; VAR_11++)
 {
  VAR_16 = FUNC_10(VAR_0,
        FUNC_5(VAR_9),
        FUNC_4(VAR_11));
  if (!FUNC_3(VAR_16))
   FUNC_11(VAR_4, "cache lookup failed for attribute %d of relation %u",
     VAR_11, VAR_9);

  VAR_15 = (Form_pg_attribute) FUNC_2(VAR_16);


  if (VAR_15->atthasmissing)
  {
   VAR_17 = FUNC_13(VAR_16, FUNC_6(VAR_8),
           VAR_12, VAR_13, VAR_14);

   FUNC_1(VAR_8, &VAR_17->t_self, VAR_17);

   FUNC_12(VAR_17);
  }

  FUNC_9(VAR_16);
 }





 FUNC_15(VAR_8, VAR_6);
}
