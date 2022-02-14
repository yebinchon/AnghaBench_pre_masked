
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ contype; scalar_t__ confrelid; scalar_t__ conrelid; int conname; } ;
struct TYPE_15__ {TYPE_1__* rd_rel; } ;
struct TYPE_14__ {int relpersistence; } ;
typedef int SysScanDesc ;
typedef int ScanKeyData ;
typedef TYPE_2__* Relation ;
typedef scalar_t__ Oid ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_constraint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;



 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ,...) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (TYPE_2__*,int ,int,int *,int,int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_21 (int ,int ) ;

__attribute__((used)) static bool
FUNC_22(Relation VAR_12, bool VAR_13)
{
 Relation VAR_14;
 HeapTuple VAR_15;
 SysScanDesc VAR_16;
 ScanKeyData VAR_17[1];






 switch (VAR_12->rd_rel->relpersistence)
 {
  case 129:
   FUNC_8(VAR_9,
     (FUNC_9(VAR_7),
      FUNC_11("cannot change logged status of table \"%s\" because it is temporary",
       FUNC_5(VAR_12)),
      FUNC_12(VAR_12)));
   break;
  case 130:
   if (VAR_13)

    return 0;
   break;
  case 128:
   if (!VAR_13)

    return 0;
   break;
 }





 if (!VAR_13 &&
  FUNC_14(FUNC_1(FUNC_6(VAR_12))) > 0)
  FUNC_8(VAR_9,
    (FUNC_9(VAR_8),
     FUNC_11("cannot change table \"%s\" to unlogged because it is part of a publication",
      FUNC_5(VAR_12)),
     FUNC_10("Unlogged relations cannot be replicated.")));






 VAR_14 = FUNC_21(VAR_5, VAR_0);





 FUNC_7(&VAR_17[0],
    VAR_13 ? VAR_2 :
    VAR_1,
    VAR_3, VAR_10,
    FUNC_4(FUNC_6(VAR_12)));
 VAR_16 = FUNC_17(VAR_14,
         VAR_13 ? VAR_6 : VAR_11,
         1, ((void*)0), 1, VAR_17);

 while (FUNC_2(VAR_15 = FUNC_19(VAR_16)))
 {
  Form_pg_constraint VAR_18 = (Form_pg_constraint) FUNC_0(VAR_15);

  if (VAR_18->contype == VAR_4)
  {
   Oid VAR_19;
   Relation VAR_20;


   VAR_19 = VAR_13 ? VAR_18->confrelid : VAR_18->conrelid;


   if (FUNC_6(VAR_12) == VAR_19)
    continue;

   VAR_20 = FUNC_16(VAR_19, VAR_0);

   if (VAR_13)
   {
    if (VAR_20->rd_rel->relpersistence != 130)
     FUNC_8(VAR_9,
       (FUNC_9(VAR_7),
        FUNC_11("could not change table \"%s\" to logged because it references unlogged table \"%s\"",
         FUNC_5(VAR_12),
         FUNC_5(VAR_20)),
        FUNC_13(VAR_12, FUNC_3(VAR_18->conname))));
   }
   else
   {
    if (VAR_20->rd_rel->relpersistence == 130)
     FUNC_8(VAR_9,
       (FUNC_9(VAR_7),
        FUNC_11("could not change table \"%s\" to unlogged because it references logged table \"%s\"",
         FUNC_5(VAR_12),
         FUNC_5(VAR_20)),
        FUNC_13(VAR_12, FUNC_3(VAR_18->conname))));
   }

   FUNC_15(VAR_20, VAR_0);
  }
 }

 FUNC_18(VAR_16);

 FUNC_20(VAR_14, VAR_0);

 return 1;
}
