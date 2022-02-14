
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int oid; int subowner; int subname; } ;
struct TYPE_6__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_subscription ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(Relation VAR_5, HeapTuple VAR_6, Oid VAR_7)
{
 Form_pg_subscription VAR_8;

 VAR_8 = (Form_pg_subscription) FUNC_1(VAR_6);

 if (VAR_8->subowner == VAR_7)
  return;

 if (!FUNC_11(VAR_8->oid, FUNC_2()))
  FUNC_5(VAR_0, VAR_3,
        FUNC_4(VAR_8->subname));


 if (!FUNC_12(VAR_7))
  FUNC_7(VAR_2,
    (FUNC_8(VAR_1),
     FUNC_10("permission denied to change owner of subscription \"%s\"",
      FUNC_4(VAR_8->subname)),
     FUNC_9("The owner of a subscription must be a superuser.")));

 VAR_8->subowner = VAR_7;
 FUNC_0(VAR_5, &VAR_6->t_self, VAR_6);


 FUNC_6(VAR_4,
       VAR_8->oid,
       VAR_7);

 FUNC_3(VAR_4,
         VAR_8->oid, 0);
}
