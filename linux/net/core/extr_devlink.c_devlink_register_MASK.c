
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink {int list; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct devlink*,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct devlink *VAR_3, struct device *VAR_4)
{
 FUNC_2(&VAR_2);
 VAR_3->dev = VAR_4;
 FUNC_1(&VAR_3->list, &VAR_1);
 FUNC_0(VAR_3, VAR_0);
 FUNC_3(&VAR_2);
 return 0;
}
