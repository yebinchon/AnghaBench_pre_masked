
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_14__ {scalar_t__ objectSubId; void* objectId; void* classId; } ;
struct TYPE_13__ {TYPE_1__* rd_rel; } ;
struct TYPE_12__ {scalar_t__ relkind; scalar_t__ relowner; } ;
typedef TYPE_2__* Relation ;
typedef int RangeVar ;
typedef int Oid ;
typedef TYPE_3__ ObjectAddress ;
typedef int List ;
typedef scalar_t__ DependencyType ;
typedef scalar_t__ AttrNumber ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 void* FUNC_3 (TYPE_2__*) ;
 void* VAR_15 ;
 int FUNC_4 (void*,void*,void*,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (void*,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int ,int) ;
 int * FUNC_18 (int *) ;
 int FUNC_19 (TYPE_3__*,TYPE_3__*,scalar_t__) ;
 int FUNC_20 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_21 (int *,int ) ;
 scalar_t__ FUNC_22 (void*,scalar_t__,int *,int *) ;
 char* FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (char*,char*) ;

__attribute__((used)) static void
FUNC_25(Relation VAR_16, List *VAR_17, bool VAR_18)
{
 DependencyType VAR_19;
 int VAR_20;
 Relation VAR_21;
 AttrNumber VAR_22;

 VAR_19 = VAR_18 ? VAR_2 : VAR_1;

 VAR_20 = FUNC_15(VAR_17);
 FUNC_0(VAR_20 > 0);
 if (VAR_20 == 1)
 {

  if (FUNC_24(FUNC_23(FUNC_13(VAR_17)), "none") != 0)
   FUNC_5(VAR_8,
     (FUNC_6(VAR_5),
      FUNC_9("invalid OWNED BY option"),
      FUNC_8("Specify OWNED BY table.column or OWNED BY NONE.")));
  VAR_21 = ((void*)0);
  VAR_22 = 0;
 }
 else
 {
  List *VAR_23;
  char *VAR_24;
  RangeVar *VAR_25;


  VAR_23 = FUNC_17(FUNC_14(VAR_17), VAR_20 - 1);
  VAR_24 = FUNC_23(FUNC_12(FUNC_16(VAR_17)));


  VAR_25 = FUNC_18(VAR_23);
  VAR_21 = FUNC_21(VAR_25, VAR_0);


  if (!(VAR_21->rd_rel->relkind == VAR_13 ||
     VAR_21->rd_rel->relkind == VAR_11 ||
     VAR_21->rd_rel->relkind == VAR_14 ||
     VAR_21->rd_rel->relkind == VAR_12))
   FUNC_5(VAR_8,
     (FUNC_6(VAR_7),
      FUNC_9("referenced relation \"%s\" is not a table or foreign table",
       FUNC_2(VAR_21))));


  if (VAR_16->rd_rel->relowner != VAR_21->rd_rel->relowner)
   FUNC_5(VAR_8,
     (FUNC_6(VAR_4),
      FUNC_9("sequence must have same owner as table it is linked to")));
  if (FUNC_1(VAR_16) != FUNC_1(VAR_21))
   FUNC_5(VAR_8,
     (FUNC_6(VAR_4),
      FUNC_9("sequence must be in same schema as table it is linked to")));


  VAR_22 = FUNC_10(FUNC_3(VAR_21), VAR_24);
  if (VAR_22 == VAR_9)
   FUNC_5(VAR_8,
     (FUNC_6(VAR_6),
      FUNC_9("column \"%s\" of relation \"%s\" does not exist",
       VAR_24, FUNC_2(VAR_21))));
 }




 if (VAR_19 == VAR_1)
 {
  Oid VAR_26;
  int32 VAR_27;

  if (FUNC_22(FUNC_3(VAR_16), VAR_2, &VAR_26, &VAR_27))
   FUNC_5(VAR_8,
     (FUNC_6(VAR_3),
      FUNC_9("cannot change ownership of identity sequence"),
      FUNC_7("Sequence \"%s\" is linked to table \"%s\".",
          FUNC_2(VAR_16),
          FUNC_11(VAR_26))));
 }





 FUNC_4(VAR_15, FUNC_3(VAR_16),
         VAR_15, VAR_19);

 if (VAR_21)
 {
  ObjectAddress VAR_28,
     VAR_29;

  VAR_28.classId = VAR_15;
  VAR_28.objectId = FUNC_3(VAR_21);
  VAR_28.objectSubId = VAR_22;
  VAR_29.classId = VAR_15;
  VAR_29.objectId = FUNC_3(VAR_16);
  VAR_29.objectSubId = 0;
  FUNC_19(&VAR_29, &VAR_28, VAR_19);
 }


 if (VAR_21)
  FUNC_20(VAR_21, VAR_10);
}
