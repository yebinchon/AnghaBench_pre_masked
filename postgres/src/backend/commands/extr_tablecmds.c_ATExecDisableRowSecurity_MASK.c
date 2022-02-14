
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int relrowsecurity; } ;
struct TYPE_8__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_class ;


 int FUNC_0 (int ,int *,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void
FUNC_10(Relation VAR_4)
{
 Relation VAR_5;
 Oid VAR_6;
 HeapTuple VAR_7;

 VAR_6 = FUNC_4(VAR_4);


 VAR_5 = FUNC_9(VAR_2, VAR_3);

 VAR_7 = FUNC_5(VAR_1, FUNC_3(VAR_6));

 if (!FUNC_2(VAR_7))
  FUNC_6(VAR_0, "cache lookup failed for relation %u", VAR_6);

 ((Form_pg_class) FUNC_1(VAR_7))->relrowsecurity = 0;
 FUNC_0(VAR_5, &VAR_7->t_self, VAR_7);

 FUNC_8(VAR_5, VAR_3);
 FUNC_7(VAR_7);
}
