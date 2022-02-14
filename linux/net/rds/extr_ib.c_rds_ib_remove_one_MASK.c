
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_device {int list; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_device*,int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct rds_ib_device*) ;
 int FUNC_4 (struct rds_ib_device*) ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ib_device *VAR_2, void *VAR_3)
{
 struct rds_ib_device *VAR_4 = VAR_3;

 if (!VAR_4)
  return;

 FUNC_4(VAR_4);


 FUNC_1(VAR_2, &VAR_0, ((void*)0));

 FUNC_0(&VAR_1);
 FUNC_2(&VAR_4->list);
 FUNC_6(&VAR_1);






 FUNC_5();
 FUNC_3(VAR_4);
 FUNC_3(VAR_4);
}
