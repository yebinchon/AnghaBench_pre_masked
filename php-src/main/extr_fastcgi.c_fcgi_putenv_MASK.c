
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int env; } ;
typedef TYPE_1__ fcgi_request ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ,char*,int) ;
 char* FUNC_2 (int *,int ,char*,int,char*,unsigned int) ;
 scalar_t__ FUNC_3 (char*) ;

char* FUNC_4(fcgi_request *VAR_0, char* VAR_1, int VAR_2, char* VAR_3)
{
 if (!VAR_0) return ((void*)0);
 if (VAR_3 == ((void*)0)) {
  FUNC_1(&VAR_0->env, FUNC_0(VAR_1, VAR_2), VAR_1, VAR_2);
  return ((void*)0);
 } else {
  return FUNC_2(&VAR_0->env, FUNC_0(VAR_1, VAR_2), VAR_1, VAR_2, VAR_3, (unsigned int)FUNC_3(VAR_3));
 }
}
