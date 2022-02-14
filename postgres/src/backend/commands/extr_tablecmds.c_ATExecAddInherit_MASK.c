
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int relname; } ;
struct TYPE_15__ {int trigdesc; TYPE_1__* rd_rel; int rd_islocaltemp; } ;
struct TYPE_14__ {scalar_t__ relpersistence; scalar_t__ relkind; scalar_t__ relispartition; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__ RangeVar ;
typedef int ObjectAddress ;
typedef int List ;
typedef int LOCKMODE ;


 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,...) ;
 int * FUNC_10 (int ,int ,int *) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_13 (TYPE_3__*,int ) ;

__attribute__((used)) static ObjectAddress
FUNC_14(Relation VAR_12, RangeVar *VAR_13, LOCKMODE VAR_14)
{
 Relation VAR_15;
 List *VAR_16;
 ObjectAddress VAR_17;
 const char *VAR_18;





 VAR_15 = FUNC_13(VAR_13, VAR_11);





 FUNC_0(VAR_15, VAR_1 | VAR_0);


 if (VAR_15->rd_rel->relpersistence == VAR_9 &&
  VAR_12->rd_rel->relpersistence != VAR_9)
  FUNC_6(VAR_6,
    (FUNC_7(VAR_5),
     FUNC_9("cannot inherit from temporary relation \"%s\"",
      FUNC_4(VAR_15))));


 if (VAR_15->rd_rel->relpersistence == VAR_9 &&
  !VAR_15->rd_islocaltemp)
  FUNC_6(VAR_6,
    (FUNC_7(VAR_5),
     FUNC_9("cannot inherit from temporary relation of another session")));


 if (VAR_12->rd_rel->relpersistence == VAR_9 &&
  !VAR_12->rd_islocaltemp)
  FUNC_6(VAR_6,
    (FUNC_7(VAR_5),
     FUNC_9("cannot inherit to temporary relation of another session")));


 if (VAR_15->rd_rel->relkind == VAR_8)
  FUNC_6(VAR_6,
    (FUNC_7(VAR_5),
     FUNC_9("cannot inherit from partitioned table \"%s\"",
      VAR_13->relname)));


 if (VAR_15->rd_rel->relispartition)
  FUNC_6(VAR_6,
    (FUNC_7(VAR_5),
     FUNC_9("cannot inherit from a partition")));
 VAR_16 = FUNC_10(FUNC_5(VAR_12),
           VAR_2, ((void*)0));

 if (FUNC_11(VAR_16, FUNC_5(VAR_15)))
  FUNC_6(VAR_6,
    (FUNC_7(VAR_3),
     FUNC_9("circular inheritance not allowed"),
     FUNC_8("\"%s\" is already a child of \"%s\".",
         VAR_13->relname,
         FUNC_4(VAR_12))));






 VAR_18 = FUNC_2(VAR_12->trigdesc);
 if (VAR_18 != ((void*)0))
  FUNC_6(VAR_6,
    (FUNC_7(VAR_4),
     FUNC_9("trigger \"%s\" prevents table \"%s\" from becoming an inheritance child",
      VAR_18, FUNC_4(VAR_12)),
     FUNC_8("ROW triggers with transition tables are not supported in inheritance hierarchies.")));


 FUNC_1(VAR_12, VAR_15);

 FUNC_3(VAR_17, VAR_10,
      FUNC_5(VAR_15));


 FUNC_12(VAR_15, VAR_7);

 return VAR_17;
}
