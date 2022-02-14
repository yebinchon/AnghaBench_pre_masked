
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct defer_call {int cb; int (* call ) (int ) ;} ;
typedef int info ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *,struct defer_call*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void *FUNC_6(void *VAR_4)
{
 FUNC_0(VAR_4);

 while (FUNC_2(VAR_3) == 0) {
  struct defer_call VAR_5;

  FUNC_3(&VAR_1);
  if (VAR_0) {
   FUNC_4(&VAR_1);
   return ((void*)0);
  }

  FUNC_1(&VAR_2, &VAR_5, sizeof(VAR_5));
  FUNC_4(&VAR_1);

  VAR_5.call(VAR_5.cb);
 }

 return ((void*)0);
}
