
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {int rcu; int dev; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct vport*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct vport *VAR_1)
{
 FUNC_3();
 if (FUNC_1(VAR_1->dev))
  FUNC_2(VAR_1);
 FUNC_4();

 FUNC_0(&VAR_1->rcu, VAR_0);
}
