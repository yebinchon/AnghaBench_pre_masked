
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {char tgenabled; int trigname; } ;
struct TYPE_11__ {char evtenabled; int oid; } ;
struct TYPE_10__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_event_trigger ;
typedef TYPE_3__ AlterEventTrigStmt ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;

Oid
FUNC_15(AlterEventTrigStmt *VAR_7)
{
 Relation VAR_8;
 HeapTuple VAR_9;
 Oid VAR_10;
 Form_pg_event_trigger VAR_11;
 char VAR_12 = VAR_7->tgenabled;

 VAR_8 = FUNC_14(VAR_4, VAR_6);

 VAR_9 = FUNC_6(VAR_3,
         FUNC_0(VAR_7->trigname));
 if (!FUNC_4(VAR_9))
  FUNC_8(VAR_2,
    (FUNC_9(VAR_1),
     FUNC_10("event trigger \"%s\" does not exist",
      VAR_7->trigname)));

 VAR_11 = (Form_pg_event_trigger) FUNC_2(VAR_9);
 VAR_10 = VAR_11->oid;

 if (!FUNC_12(VAR_10, FUNC_3()))
  FUNC_7(VAR_0, VAR_5,
        VAR_7->trigname);


 VAR_11->evtenabled = VAR_12;

 FUNC_1(VAR_8, &VAR_9->t_self, VAR_9);

 FUNC_5(VAR_4,
         VAR_10, 0);


 FUNC_11(VAR_9);
 FUNC_13(VAR_8, VAR_6);

 return VAR_10;
}
