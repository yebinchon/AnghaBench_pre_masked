
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_ib_device {int refcount; } ;
struct ib_device {int dummy; } ;


 struct rds_ib_device* FUNC_0 (struct ib_device*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *) ;

struct rds_ib_device *FUNC_4(struct ib_device *VAR_1)
{
 struct rds_ib_device *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_0(VAR_1, &VAR_0);
 if (VAR_2)
  FUNC_3(&VAR_2->refcount);
 FUNC_2();
 return VAR_2;
}
