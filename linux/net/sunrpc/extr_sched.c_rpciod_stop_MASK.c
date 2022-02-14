
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;


 int FUNC_0 (struct workqueue_struct*) ;
 int FUNC_1 (char*) ;
 struct workqueue_struct* VAR_0 ;
 struct workqueue_struct* VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{
 struct workqueue_struct *VAR_2 = ((void*)0);

 if (VAR_0 == ((void*)0))
  return;
 FUNC_1("RPC:       destroying workqueue rpciod\n");

 VAR_2 = VAR_0;
 VAR_0 = ((void*)0);
 FUNC_0(VAR_2);
 VAR_2 = VAR_1;
 VAR_1 = ((void*)0);
 FUNC_0(VAR_2);
}
