
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {int rcu; int idr; int ns; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pid_namespace *VAR_1)
{
 FUNC_2(&VAR_1->ns);

 FUNC_1(&VAR_1->idr);
 FUNC_0(&VAR_1->rcu, VAR_0);
}
