
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpool_driver {int list; int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct zpool_driver *VAR_2)
{
 int VAR_3 = 0, VAR_4;

 FUNC_3(&VAR_1);
 VAR_4 = FUNC_1(&VAR_2->refcount);
 FUNC_0(VAR_4 < 0);
 if (VAR_4 > 0)
  VAR_3 = -VAR_0;
 else
  FUNC_2(&VAR_2->list);
 FUNC_4(&VAR_1);

 return VAR_3;
}
