
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int int16 ;
typedef int TupleTableSlot ;
typedef int * TupleDesc ;
struct TYPE_16__ {int atttypid; int attname; } ;
struct TYPE_15__ {int* fk_attnums; int* pk_attnums; int nkeys; int conname; } ;
struct TYPE_14__ {int * rd_att; int rd_id; } ;
struct TYPE_13__ {int data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__ RI_ConstraintInfo ;
typedef int Oid ;
typedef TYPE_4__* Form_pg_attribute ;
typedef int Datum ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_4__* FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int ,...) ;
 int FUNC_10 (char*,int ,char*,...) ;
 int FUNC_11 (TYPE_2__*,char*) ;
 int FUNC_12 (int ,int *,int*) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (int ,int const,int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int *,int,int*) ;

__attribute__((used)) static void
FUNC_17(const RI_ConstraintInfo *VAR_7,
       Relation VAR_8, Relation VAR_9,
       TupleTableSlot *VAR_10, TupleDesc VAR_11,
       int VAR_12, bool VAR_13)
{
 StringInfoData VAR_14;
 StringInfoData VAR_15;
 bool VAR_16;
 const int16 *VAR_17;
 Oid VAR_18;
 AclResult VAR_19;
 bool VAR_20 = 1;





 VAR_16 = (VAR_12 == VAR_5);
 if (VAR_16)
 {
  VAR_17 = VAR_7->fk_attnums;
  VAR_18 = VAR_9->rd_id;
  if (VAR_11 == ((void*)0))
   VAR_11 = VAR_9->rd_att;
 }
 else
 {
  VAR_17 = VAR_7->pk_attnums;
  VAR_18 = VAR_8->rd_id;
  if (VAR_11 == ((void*)0))
   VAR_11 = VAR_8->rd_att;
 }
 if (VAR_13)
  VAR_20 = 1;
 else if (FUNC_6(VAR_18, VAR_4, 1) != VAR_6)
 {
  VAR_19 = FUNC_15(VAR_18, FUNC_0(), VAR_1);
  if (VAR_19 != VAR_0)
  {

   for (int VAR_21 = 0; VAR_21 < VAR_7->nkeys; VAR_21++)
   {
    VAR_19 = FUNC_14(VAR_18, VAR_17[VAR_21],
              FUNC_0(),
              VAR_1);


    if (VAR_19 != VAR_0)
    {
     VAR_20 = 0;
     break;
    }
   }
  }
 }
 else
  VAR_20 = 0;

 if (VAR_20)
 {

  FUNC_13(&VAR_14);
  FUNC_13(&VAR_15);
  for (int VAR_22 = 0; VAR_22 < VAR_7->nkeys; VAR_22++)
  {
   int VAR_23 = VAR_17[VAR_22];
   Form_pg_attribute VAR_24 = FUNC_4(VAR_11, VAR_23 - 1);
   char *VAR_25,
        *VAR_26;
   Datum VAR_27;
   bool VAR_28;

   VAR_25 = FUNC_1(VAR_24->attname);

   VAR_27 = FUNC_16(VAR_10, VAR_23, &VAR_28);
   if (!VAR_28)
   {
    Oid VAR_29;
    bool VAR_30;

    FUNC_12(VAR_24->atttypid, &VAR_29, &VAR_30);
    VAR_26 = FUNC_2(VAR_29, VAR_27);
   }
   else
    VAR_26 = "null";

   if (VAR_22 > 0)
   {
    FUNC_5(&VAR_14, ", ");
    FUNC_5(&VAR_15, ", ");
   }
   FUNC_5(&VAR_14, VAR_25);
   FUNC_5(&VAR_15, VAR_26);
  }
 }

 if (VAR_13)
  FUNC_7(VAR_3,
    (FUNC_8(VAR_2),
     FUNC_10("removing partition \"%s\" violates foreign key constraint \"%s\"",
      FUNC_3(VAR_8),
      FUNC_1(VAR_7->conname)),
     FUNC_9("Key (%s)=(%s) is still referenced from table \"%s\".",
         VAR_14.data, VAR_15.data,
         FUNC_3(VAR_9))));
 else if (VAR_16)
  FUNC_7(VAR_3,
    (FUNC_8(VAR_2),
     FUNC_10("insert or update on table \"%s\" violates foreign key constraint \"%s\"",
      FUNC_3(VAR_9),
      FUNC_1(VAR_7->conname)),
     VAR_20 ?
     FUNC_9("Key (%s)=(%s) is not present in table \"%s\".",
         VAR_14.data, VAR_15.data,
         FUNC_3(VAR_8)) :
     FUNC_9("Key is not present in table \"%s\".",
         FUNC_3(VAR_8)),
     FUNC_11(VAR_9, FUNC_1(VAR_7->conname))));
 else
  FUNC_7(VAR_3,
    (FUNC_8(VAR_2),
     FUNC_10("update or delete on table \"%s\" violates foreign key constraint \"%s\" on table \"%s\"",
      FUNC_3(VAR_8),
      FUNC_1(VAR_7->conname),
      FUNC_3(VAR_9)),
     VAR_20 ?
     FUNC_9("Key (%s)=(%s) is still referenced from table \"%s\".",
         VAR_14.data, VAR_15.data,
         FUNC_3(VAR_9)) :
     FUNC_9("Key is still referenced from table \"%s\".",
         FUNC_3(VAR_9)),
     FUNC_11(VAR_9, FUNC_1(VAR_7->conname))));
}
