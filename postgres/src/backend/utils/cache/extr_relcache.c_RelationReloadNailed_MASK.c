
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ relkind; } ;
struct TYPE_7__ {int rd_isvalid; int rd_refcnt; TYPE_2__* rd_rel; int rd_isnailed; } ;
typedef TYPE_1__* Relation ;
typedef int HeapTuple ;
typedef scalar_t__ Form_pg_class ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_9(Relation VAR_3)
{
 FUNC_0(VAR_3->rd_isnailed);





 FUNC_4(VAR_3);


 VAR_3->rd_isvalid = 0;







 if (!FUNC_2() || VAR_3->rd_refcnt <= 1)
  return;

 if (VAR_3->rd_rel->relkind == VAR_1)
 {




  FUNC_5(VAR_3);
 }
 else
 {







  if (VAR_2)
  {
   HeapTuple VAR_4;
   Form_pg_class VAR_5;





   VAR_3->rd_isvalid = 1;

   VAR_4 = FUNC_6(FUNC_3(VAR_3),
           1, 0);
   VAR_5 = (Form_pg_class) FUNC_1(VAR_4);
   FUNC_8(VAR_3->rd_rel, VAR_5, VAR_0);
   FUNC_7(VAR_4);





   VAR_3->rd_isvalid = 1;
  }
 }
}
