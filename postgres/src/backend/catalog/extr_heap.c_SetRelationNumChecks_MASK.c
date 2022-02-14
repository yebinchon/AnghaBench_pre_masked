
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int relchecks; } ;
struct TYPE_8__ {int t_self; } ;
typedef int Relation ;
typedef TYPE_1__* HeapTuple ;
typedef TYPE_2__* Form_pg_class ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void
FUNC_11(Relation VAR_4, int VAR_5)
{
 Relation VAR_6;
 HeapTuple VAR_7;
 Form_pg_class VAR_8;

 VAR_6 = FUNC_10(VAR_2, VAR_3);
 VAR_7 = FUNC_6(VAR_1,
         FUNC_4(FUNC_5(VAR_4)));
 if (!FUNC_3(VAR_7))
  FUNC_7(VAR_0, "cache lookup failed for relation %u",
    FUNC_5(VAR_4));
 VAR_8 = (Form_pg_class) FUNC_2(VAR_7);

 if (VAR_8->relchecks != VAR_5)
 {
  VAR_8->relchecks = VAR_5;

  FUNC_1(VAR_6, &VAR_7->t_self, VAR_7);
 }
 else
 {

  FUNC_0(VAR_4);
 }

 FUNC_8(VAR_7);
 FUNC_9(VAR_6, VAR_3);
}
