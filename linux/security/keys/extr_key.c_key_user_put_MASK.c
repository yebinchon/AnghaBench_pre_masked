
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_user {int node; int usage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct key_user*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct key_user *VAR_2)
{
 if (FUNC_2(&VAR_2->usage, &VAR_0)) {
  FUNC_1(&VAR_2->node, &VAR_1);
  FUNC_3(&VAR_0);

  FUNC_0(VAR_2);
 }
}
