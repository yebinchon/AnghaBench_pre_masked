
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {scalar_t__ prep_stmts; } ;
typedef enum COMPAT_MODE { ____Placeholder_COMPAT_MODE } COMPAT_MODE ;


 int FUNC_0 (int,int,struct connection*,int *,scalar_t__) ;

bool
FUNC_1(int VAR_0, enum COMPAT_MODE VAR_1, struct connection *VAR_2)
{

 while (VAR_2->prep_stmts)
 {
  if (!FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0), VAR_2->prep_stmts))
   return 0;
 }

 return 1;
}
