
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {scalar_t__ atttypid; scalar_t__ attcollation; int attname; scalar_t__ attisdropped; } ;
struct TYPE_6__ {int natts; } ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef int List ;
typedef TYPE_2__* Form_pg_attribute ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* FUNC_2 (int ) ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char const*,...) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 char FUNC_12 (scalar_t__) ;
 int * FUNC_13 (int *,scalar_t__) ;
 int * FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *,scalar_t__) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 scalar_t__ FUNC_18 (scalar_t__) ;

void
FUNC_19(const char *VAR_11,
       Oid VAR_12, Oid VAR_13,
       List *VAR_14,
       int VAR_15)
{
 char VAR_16 = FUNC_12(VAR_12);
 Oid VAR_17;

 if (VAR_16 == VAR_10)
 {
  if (!((VAR_12 == VAR_0 && (VAR_15 & VAR_2)) ||
     (VAR_12 == VAR_7 && (VAR_15 & VAR_3)) ||
     (VAR_12 == VAR_6 && (VAR_15 & VAR_3))))
   FUNC_4(VAR_5,
     (FUNC_5(VAR_4),
      FUNC_7("column \"%s\" has pseudo-type %s",
       VAR_11, FUNC_8(VAR_12))));
 }
 else if (VAR_16 == VAR_9)
 {



  FUNC_19(VAR_11, FUNC_9(VAR_12), VAR_13,
         VAR_14,
         VAR_15);
 }
 else if (VAR_16 == VAR_8)
 {



  Relation VAR_18;
  TupleDesc VAR_19;
  int VAR_20;







  if (FUNC_15(VAR_14, VAR_12))
   FUNC_4(VAR_5,
     (FUNC_5(VAR_4),
      FUNC_7("composite type %s cannot be made a member of itself",
       FUNC_8(VAR_12))));

  VAR_14 = FUNC_13(VAR_14, VAR_12);

  VAR_18 = FUNC_17(FUNC_11(VAR_12), VAR_1);

  VAR_19 = FUNC_2(VAR_18);

  for (VAR_20 = 0; VAR_20 < VAR_19->natts; VAR_20++)
  {
   Form_pg_attribute VAR_21 = FUNC_3(VAR_19, VAR_20);

   if (VAR_21->attisdropped)
    continue;
   FUNC_19(FUNC_0(VAR_21->attname),
          VAR_21->atttypid, VAR_21->attcollation,
          VAR_14,
          VAR_15);
  }

  FUNC_16(VAR_18, VAR_1);

  VAR_14 = FUNC_14(VAR_14);
 }
 else if (FUNC_1((VAR_17 = FUNC_10(VAR_12))))
 {



  FUNC_19(VAR_11, VAR_17, VAR_13,
         VAR_14,
         VAR_15);
 }





 if (!FUNC_1(VAR_13) && FUNC_18(VAR_12))
  FUNC_4(VAR_5,
    (FUNC_5(VAR_4),
     FUNC_7("no collation was derived for column \"%s\" with collatable type %s",
      VAR_11, FUNC_8(VAR_12)),
     FUNC_6("Use the COLLATE clause to set the collation explicitly.")));
}
