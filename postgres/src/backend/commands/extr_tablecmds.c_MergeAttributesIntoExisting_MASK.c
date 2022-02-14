
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef TYPE_2__* TupleDesc ;
struct TYPE_26__ {scalar_t__ atttypid; scalar_t__ atttypmod; scalar_t__ attcollation; int attinhcount; int attislocal; scalar_t__ attnotnull; scalar_t__ attisdropped; int attname; } ;
struct TYPE_25__ {int t_self; } ;
struct TYPE_24__ {TYPE_1__* rd_rel; } ;
struct TYPE_23__ {int natts; } ;
struct TYPE_22__ {scalar_t__ relkind; } ;
typedef TYPE_3__* Relation ;
typedef TYPE_4__* HeapTuple ;
typedef TYPE_5__* Form_pg_attribute ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int *,TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 char* FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int VAR_5 ;
 TYPE_4__* FUNC_8 (int ,char*) ;
 TYPE_5__* FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,char*,...) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_3__*,int ) ;
 TYPE_3__* FUNC_15 (int ,int ) ;

__attribute__((used)) static void
FUNC_16(Relation VAR_6, Relation VAR_7)
{
 Relation VAR_8;
 AttrNumber VAR_9;
 int VAR_10;
 TupleDesc VAR_11;
 HeapTuple VAR_12;
 bool VAR_13 = 0;

 VAR_8 = FUNC_15(VAR_0, VAR_5);

 VAR_11 = FUNC_5(VAR_7);
 VAR_10 = VAR_11->natts;


 if (VAR_7->rd_rel->relkind == VAR_4)
  VAR_13 = 1;

 for (VAR_9 = 1; VAR_9 <= VAR_10; VAR_9++)
 {
  Form_pg_attribute VAR_14 = FUNC_9(VAR_11,
             VAR_9 - 1);
  char *VAR_15 = FUNC_4(VAR_14->attname);


  if (VAR_14->attisdropped)
   continue;


  VAR_12 = FUNC_8(FUNC_7(VAR_6),
            VAR_15);
  if (FUNC_3(VAR_12))
  {

   Form_pg_attribute VAR_16 = (Form_pg_attribute) FUNC_2(VAR_12);

   if (VAR_14->atttypid != VAR_16->atttypid ||
    VAR_14->atttypmod != VAR_16->atttypmod)
    FUNC_10(VAR_3,
      (FUNC_11(VAR_2),
       FUNC_12("child table \"%s\" has different type for column \"%s\"",
        FUNC_6(VAR_6),
        VAR_15)));

   if (VAR_14->attcollation != VAR_16->attcollation)
    FUNC_10(VAR_3,
      (FUNC_11(VAR_1),
       FUNC_12("child table \"%s\" has different collation for column \"%s\"",
        FUNC_6(VAR_6),
        VAR_15)));





   if (VAR_14->attnotnull && !VAR_16->attnotnull)
    FUNC_10(VAR_3,
      (FUNC_11(VAR_2),
       FUNC_12("column \"%s\" in child table must be marked NOT NULL",
        VAR_15)));





   VAR_16->attinhcount++;






   if (VAR_13)
   {
    FUNC_0(VAR_16->attinhcount == 1);
    VAR_16->attislocal = 0;
   }

   FUNC_1(VAR_8, &VAR_12->t_self, VAR_12);
   FUNC_13(VAR_12);
  }
  else
  {
   FUNC_10(VAR_3,
     (FUNC_11(VAR_2),
      FUNC_12("child table is missing column \"%s\"",
       VAR_15)));
  }
 }

 FUNC_14(VAR_8, VAR_5);
}
