
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int prrelid; } ;
struct TYPE_7__ {int t_self; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_publication_rel ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

void
FUNC_10(Oid VAR_4)
{
 Relation VAR_5;
 HeapTuple VAR_6;
 Form_pg_publication_rel VAR_7;

 VAR_5 = FUNC_9(VAR_2, VAR_3);

 VAR_6 = FUNC_6(VAR_1, FUNC_4(VAR_4));

 if (!FUNC_3(VAR_6))
  FUNC_7(VAR_0, "cache lookup failed for publication table %u",
    VAR_4);

 VAR_7 = (Form_pg_publication_rel) FUNC_2(VAR_6);


 FUNC_0(VAR_7->prrelid);

 FUNC_1(VAR_5, &VAR_6->t_self);

 FUNC_5(VAR_6);

 FUNC_8(VAR_5, VAR_3);
}
