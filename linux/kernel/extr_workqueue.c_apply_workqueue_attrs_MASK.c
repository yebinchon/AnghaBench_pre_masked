
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct workqueue_attrs {int dummy; } ;


 int FUNC_0 (struct workqueue_struct*,struct workqueue_attrs const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

int FUNC_4(struct workqueue_struct *VAR_1,
     const struct workqueue_attrs *VAR_2)
{
 int VAR_3;

 FUNC_1();

 FUNC_2(&VAR_0);
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_3(&VAR_0);

 return VAR_3;
}
