
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_4(void)
{
 FUNC_1(&VAR_3);
 if (VAR_0++)
  goto out;

 FUNC_3("Starting thread for foo_bar_fn\n");





 VAR_2 = FUNC_0(VAR_1, ((void*)0), "event-sample-fn");
 out:
 FUNC_2(&VAR_3);
 return 0;
}
