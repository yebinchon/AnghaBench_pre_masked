
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_11__ {int resno; int resjunk; } ;
typedef TYPE_1__ TargetEntry ;
struct TYPE_13__ {int attlen; int attbyval; int attname; int attisdropped; int attcollation; int atttypmod; int atttypid; } ;
struct TYPE_12__ {int rd_att; } ;
typedef TYPE_2__* Relation ;
typedef int Oid ;
typedef int Node ;
typedef int ListCell ;
typedef int List ;
typedef int Index ;
typedef TYPE_3__* Form_pg_attribute ;
typedef int Expr ;
typedef int Datum ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__* FUNC_2 (int ,int) ;
 int * FUNC_3 (int *,int ,int,int ,int ,int ,int,int) ;
 int FUNC_4 (int ,char*,...) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int ,int,int ,int,int ,int,int) ;
 TYPE_1__* FUNC_11 (int *,int,int ,int) ;
 scalar_t__ FUNC_12 (int ,int,int ,int ,int ,int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static List *
FUNC_14(List *VAR_6, int VAR_7,
      Index VAR_8, Relation VAR_9)
{
 List *VAR_10 = VAR_5;
 ListCell *VAR_11;
 int VAR_12,
    VAR_13;

 VAR_11 = FUNC_8(VAR_6);
 VAR_13 = FUNC_1(VAR_9);

 for (VAR_12 = 1; VAR_12 <= VAR_13; VAR_12++)
 {
  Form_pg_attribute VAR_14 = FUNC_2(VAR_9->rd_att, VAR_12 - 1);
  TargetEntry *VAR_15 = ((void*)0);

  if (VAR_11 != ((void*)0))
  {
   TargetEntry *VAR_16 = (TargetEntry *) FUNC_7(VAR_11);

   if (!VAR_16->resjunk && VAR_16->resno == VAR_12)
   {
    VAR_15 = VAR_16;
    VAR_11 = FUNC_9(VAR_6, VAR_11);
   }
  }

  if (VAR_15 == ((void*)0))
  {
   Oid VAR_17 = VAR_14->atttypid;
   int32 VAR_18 = VAR_14->atttypmod;
   Oid VAR_19 = VAR_14->attcollation;
   Node *VAR_20;

   switch (VAR_7)
   {
    case 129:
     if (!VAR_14->attisdropped)
     {
      VAR_20 = (Node *) FUNC_10(VAR_17,
               -1,
               VAR_19,
               VAR_14->attlen,
               (Datum) 0,
               1,
               VAR_14->attbyval);
      VAR_20 = FUNC_3(VAR_20,
             VAR_4, -1,
             VAR_17,
             VAR_1,
             VAR_0,
             -1,
             0);
     }
     else
     {

      VAR_20 = (Node *) FUNC_10(VAR_3,
               -1,
               VAR_4,
               sizeof(int32),
               (Datum) 0,
               1,
               1 );
     }
     break;
    case 128:
     if (!VAR_14->attisdropped)
     {
      VAR_20 = (Node *) FUNC_12(VAR_8,
             VAR_12,
             VAR_17,
             VAR_18,
             VAR_19,
             0);
     }
     else
     {

      VAR_20 = (Node *) FUNC_10(VAR_3,
               -1,
               VAR_4,
               sizeof(int32),
               (Datum) 0,
               1,
               1 );
     }
     break;
    default:
     FUNC_4(VAR_2, "unrecognized command_type: %d",
       (int) VAR_7);
     VAR_20 = ((void*)0);
     break;
   }

   VAR_15 = FUNC_11((Expr *) VAR_20,
           VAR_12,
           FUNC_13(FUNC_0(VAR_14->attname)),
           0);
  }

  VAR_10 = FUNC_6(VAR_10, VAR_15);
 }
 while (VAR_11)
 {
  TargetEntry *VAR_21 = (TargetEntry *) FUNC_7(VAR_11);

  if (!VAR_21->resjunk)
   FUNC_4(VAR_2, "targetlist is not sorted correctly");

  if (VAR_21->resno != VAR_12)
  {
   VAR_21 = FUNC_5(VAR_21);
   VAR_21->resno = VAR_12;
  }
  VAR_10 = FUNC_6(VAR_10, VAR_21);
  VAR_12++;
  VAR_11 = FUNC_9(VAR_6, VAR_11);
 }

 return VAR_10;
}
