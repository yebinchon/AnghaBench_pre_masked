
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stmt_name; int plansource; } ;
typedef TYPE_1__ PreparedStatement ;
typedef int HASH_SEQ_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int VAR_1 ;

void
FUNC_4(void)
{
 HASH_SEQ_STATUS VAR_2;
 PreparedStatement *VAR_3;


 if (!VAR_1)
  return;


 FUNC_2(&VAR_2, VAR_1);
 while ((VAR_3 = FUNC_3(&VAR_2)) != ((void*)0))
 {

  FUNC_0(VAR_3->plansource);


  FUNC_1(VAR_1, VAR_3->stmt_name, VAR_0, ((void*)0));
 }
}
