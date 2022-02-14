
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int resultRelation; scalar_t__ commandType; TYPE_1__* onConflict; } ;
struct TYPE_7__ {scalar_t__ relkind; int requiredPerms; scalar_t__ checkAsUser; int relid; } ;
struct TYPE_6__ {scalar_t__ action; } ;
typedef int Relation ;
typedef TYPE_2__ RangeTblEntry ;
typedef TYPE_3__ Query ;
typedef scalar_t__ Oid ;
typedef int Node ;
typedef int List ;
typedef scalar_t__ CmdType ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 () ;
 int * VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int,int *,int *,int **,int*) ;
 int FUNC_3 (int ,int,int ,int *,int *,int **,int*,int) ;
 int FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,int **,int **) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

void
FUNC_9(Query *VAR_16, RangeTblEntry *VAR_17, int VAR_18,
        List **VAR_19, List **VAR_20,
        bool *VAR_21, bool *VAR_22)
{
 Oid VAR_23;
 int VAR_24;
 Relation VAR_25;
 CmdType VAR_26;
 List *VAR_27;
 List *VAR_28;


 *VAR_19 = VAR_6;
 *VAR_20 = VAR_6;
 *VAR_21 = 0;
 *VAR_22 = 0;


 if (VAR_17->relkind != VAR_10 &&
  VAR_17->relkind != VAR_9)
  return;


 VAR_23 = VAR_17->checkAsUser ? VAR_17->checkAsUser : FUNC_1();


 VAR_24 = FUNC_4(VAR_17->relid, VAR_17->checkAsUser, 0);


 if (VAR_24 == VAR_11)
  return;






 if (VAR_24 == VAR_12)
 {





  *VAR_21 = 1;

  return;
 }
 VAR_25 = FUNC_8(VAR_17->relid, VAR_7);

 VAR_26 = VAR_18 == VAR_16->resultRelation ?
  VAR_16->commandType : VAR_4;
 if (VAR_26 == VAR_4 && VAR_17->requiredPerms & VAR_1)
 {
  List *VAR_29;
  List *VAR_30;

  FUNC_5(VAR_25, VAR_5, VAR_23,
          &VAR_29,
          &VAR_30);

  FUNC_2(VAR_18,
         VAR_29,
         VAR_30,
         VAR_19,
         VAR_22);
 }
 FUNC_5(VAR_25, VAR_26, VAR_23, &VAR_27,
         &VAR_28);

 if (VAR_26 == VAR_4 ||
  VAR_26 == VAR_5 ||
  VAR_26 == VAR_2)
  FUNC_2(VAR_18,
         VAR_27,
         VAR_28,
         VAR_19,
         VAR_22);
 if ((VAR_26 == VAR_5 || VAR_26 == VAR_2) &&
  VAR_17->requiredPerms & VAR_0)
 {
  List *VAR_31;
  List *VAR_32;

  FUNC_5(VAR_25, VAR_4, VAR_23,
          &VAR_31,
          &VAR_32);

  FUNC_2(VAR_18,
         VAR_31,
         VAR_32,
         VAR_19,
         VAR_22);
 }







 if (VAR_26 == VAR_3 || VAR_26 == VAR_5)
 {

  FUNC_0(VAR_18 == VAR_16->resultRelation);

  FUNC_3(VAR_25, VAR_18,
          VAR_26 == VAR_3 ?
          VAR_14 : VAR_15,
          VAR_27,
          VAR_28,
          VAR_20,
          VAR_22,
          0);
  if (VAR_17->requiredPerms & VAR_0)
  {
   List *VAR_33 = VAR_6;
   List *VAR_34 = VAR_6;

   FUNC_5(VAR_25, VAR_4, VAR_23,
           &VAR_33,
           &VAR_34);
   FUNC_3(VAR_25, VAR_18,
           VAR_26 == VAR_3 ?
           VAR_14 : VAR_15,
           VAR_33,
           VAR_34,
           VAR_20,
           VAR_22,
           1);
  }





  if (VAR_26 == VAR_3 &&
   VAR_16->onConflict && VAR_16->onConflict->action == VAR_8)
  {
   List *VAR_35;
   List *VAR_36;
   List *VAR_37 = VAR_6;
   List *VAR_38 = VAR_6;


   FUNC_5(VAR_25, VAR_5, VAR_23,
           &VAR_35,
           &VAR_36);







   FUNC_3(VAR_25, VAR_18,
           VAR_13,
           VAR_35,
           VAR_36,
           VAR_20,
           VAR_22,
           1);
   if (VAR_17->requiredPerms & VAR_0)
   {
    FUNC_5(VAR_25, VAR_4, VAR_23,
            &VAR_37,
            &VAR_38);
    FUNC_3(VAR_25, VAR_18,
            VAR_13,
            VAR_37,
            VAR_38,
            VAR_20,
            VAR_22,
            1);
   }


   FUNC_3(VAR_25, VAR_18,
           VAR_15,
           VAR_35,
           VAR_36,
           VAR_20,
           VAR_22,
           0);







   if (VAR_17->requiredPerms & VAR_0)
    FUNC_3(VAR_25, VAR_18,
            VAR_15,
            VAR_37,
            VAR_38,
            VAR_20,
            VAR_22,
            1);
  }
 }

 FUNC_7(VAR_25, VAR_7);





 FUNC_6((Node *) *VAR_19, VAR_17->checkAsUser);
 FUNC_6((Node *) *VAR_20, VAR_17->checkAsUser);





 *VAR_21 = 1;

 return;
}
