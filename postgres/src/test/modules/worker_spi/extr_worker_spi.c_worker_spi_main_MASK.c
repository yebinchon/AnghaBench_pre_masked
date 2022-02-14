
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {void* name; void* schema; } ;
typedef TYPE_1__ worktable ;
typedef void* int32 ;
struct TYPE_12__ {int bgw_name; } ;
struct TYPE_11__ {int tupdesc; int * vals; } ;
struct TYPE_10__ {int * data; } ;
typedef TYPE_2__ StringInfoData ;
typedef int Datum ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 void* FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 () ;
 int VAR_1 ;
 TYPE_8__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 () ;
 int FUNC_11 (int *,int,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int ,int,int*) ;
 scalar_t__ VAR_9 ;
 TYPE_7__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_16 (int ,int,long,int ) ;
 int FUNC_17 (TYPE_2__*,char*,void*,void*,void*,void*,void*,void*) ;
 int FUNC_18 (int ,char*,int ,void*,int,...) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_1__*) ;
 TYPE_1__* FUNC_21 (int) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int) ;
 void* FUNC_26 (char*) ;
 void* FUNC_27 (void*) ;
 int FUNC_28 (char*,char*,int) ;
 int VAR_18 ;
 long VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

void
FUNC_29(Datum VAR_22)
{
 int VAR_23 = FUNC_4(VAR_22);
 worktable *VAR_24;
 StringInfoData VAR_25;
 char VAR_26[20];

 VAR_24 = FUNC_21(sizeof(worktable));
 FUNC_28(VAR_26, "schema%d", VAR_23);
 VAR_24->schema = FUNC_26(VAR_26);
 VAR_24->name = FUNC_26("counted");


 FUNC_24(VAR_6, VAR_20);
 FUNC_24(VAR_7, VAR_21);


 FUNC_1();


 FUNC_0(VAR_18, ((void*)0), 0);

 FUNC_18(VAR_1, "%s initialized with %s.%s",
   VAR_2->bgw_name, VAR_24->schema, VAR_24->name);
 FUNC_20(VAR_24);
 VAR_24->schema = FUNC_27(VAR_24->schema);
 VAR_24->name = FUNC_27(VAR_24->name);

 FUNC_19(&VAR_25);
 FUNC_17(&VAR_25,
      "WITH deleted AS (DELETE "
      "FROM %s.%s "
      "WHERE type = 'delta' RETURNING value), "
      "total AS (SELECT coalesce(sum(value), 0) as sum "
      "FROM deleted) "
      "UPDATE %s.%s "
      "SET value = %s.value + total.sum "
      "FROM total WHERE type = 'total' "
      "RETURNING %s.value",
      VAR_24->schema, VAR_24->name,
      VAR_24->schema, VAR_24->name,
      VAR_24->name,
      VAR_24->name);




 while (!VAR_17)
 {
  int VAR_27;







  (void) FUNC_16(VAR_3,
       VAR_14 | VAR_15 | VAR_13,
       VAR_19 * 1000L,
       VAR_5);
  FUNC_9(VAR_3);

  FUNC_2();




  if (VAR_16)
  {
   VAR_16 = 0;
   FUNC_7(VAR_4);
  }
  FUNC_14();
  FUNC_15();
  FUNC_10();
  FUNC_8(FUNC_5());
  FUNC_22(VAR_12, VAR_25.data);


  VAR_27 = FUNC_11(VAR_25.data, 0, 0);

  if (VAR_27 != VAR_8)
   FUNC_18(VAR_0, "cannot select from table %s.%s: error code %d",
     VAR_24->schema, VAR_24->name, VAR_27);

  if (VAR_9 > 0)
  {
   bool VAR_28;
   int32 VAR_29;

   VAR_29 = FUNC_4(FUNC_13(VAR_10->vals[0],
             VAR_10->tupdesc,
             1, &VAR_28));
   if (!VAR_28)
    FUNC_18(VAR_1, "%s: count in %s.%s is now %d",
      VAR_2->bgw_name,
      VAR_24->schema, VAR_24->name, VAR_29);
  }




  FUNC_12();
  FUNC_6();
  FUNC_3();
  FUNC_23(0);
  FUNC_22(VAR_11, ((void*)0));
 }

 FUNC_25(1);
}
