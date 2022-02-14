
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct workqueue_struct* FUNC_0 (char*,int,int ) ;
 int FUNC_1 (struct workqueue_struct*) ;
 int FUNC_2 (char*) ;
 struct workqueue_struct* VAR_3 ;
 struct workqueue_struct* VAR_4 ;

__attribute__((used)) static int FUNC_3(void)
{
 struct workqueue_struct *VAR_5;




 FUNC_2("RPC:       creating workqueue rpciod\n");
 VAR_5 = FUNC_0("rpciod", VAR_1 | VAR_2, 0);
 if (!VAR_5)
  goto out_failed;
 VAR_3 = VAR_5;

 VAR_5 = FUNC_0("xprtiod", VAR_2|VAR_1|VAR_0, 0);
 if (!VAR_5)
  goto free_rpciod;
 VAR_4 = VAR_5;
 return 1;
free_rpciod:
 VAR_5 = VAR_3;
 VAR_3 = ((void*)0);
 FUNC_1(VAR_5);
out_failed:
 return 0;
}
