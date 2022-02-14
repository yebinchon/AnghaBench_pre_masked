
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * rd_indam; int rd_indexcxt; int rd_amhandler; } ;
typedef TYPE_1__* Relation ;
typedef int IndexAmRoutine ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(Relation VAR_0)
{
 IndexAmRoutine *VAR_1,
      *VAR_2;





 VAR_2 = FUNC_0(VAR_0->rd_amhandler);


 VAR_1 = (IndexAmRoutine *) FUNC_1(VAR_0->rd_indexcxt,
               sizeof(IndexAmRoutine));
 FUNC_2(VAR_1, VAR_2, sizeof(IndexAmRoutine));
 VAR_0->rd_indam = VAR_1;

 FUNC_3(VAR_2);
}
