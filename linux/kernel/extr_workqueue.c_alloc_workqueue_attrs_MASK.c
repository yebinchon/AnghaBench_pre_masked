
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_attrs {int cpumask; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct workqueue_attrs*) ;
 struct workqueue_attrs* FUNC_3 (int,int ) ;

struct workqueue_attrs *FUNC_4(void)
{
 struct workqueue_attrs *VAR_2;

 VAR_2 = FUNC_3(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  goto fail;
 if (!FUNC_0(&VAR_2->cpumask, VAR_0))
  goto fail;

 FUNC_1(VAR_2->cpumask, VAR_1);
 return VAR_2;
fail:
 FUNC_2(VAR_2);
 return ((void*)0);
}
