
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct defer_call {void* cb; int call; } ;
typedef int info ;
typedef int defer_call_cb ;


 int FUNC_0 (int *,struct defer_call*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(defer_call_cb VAR_4, void *VAR_5)
{
 struct defer_call VAR_6;
 VAR_6.call = VAR_4;
 VAR_6.cb = VAR_5;

 FUNC_2(&VAR_1);
 if (!VAR_0)
  FUNC_0(&VAR_2, &VAR_6, sizeof(VAR_6));
 FUNC_3(&VAR_1);

 FUNC_1(VAR_3);
}
