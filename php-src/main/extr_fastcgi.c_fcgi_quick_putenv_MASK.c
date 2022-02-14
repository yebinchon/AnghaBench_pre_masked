
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int env; } ;
typedef TYPE_1__ fcgi_request ;


 int FUNC_0 (int *,unsigned int,char*,int) ;
 char* FUNC_1 (int *,unsigned int,char*,int,char*,unsigned int) ;
 scalar_t__ FUNC_2 (char*) ;

char* FUNC_3(fcgi_request *VAR_0, char* VAR_1, int VAR_2, unsigned int VAR_3, char* VAR_4)
{
 if (VAR_4 == ((void*)0)) {
  FUNC_0(&VAR_0->env, VAR_3, VAR_1, VAR_2);
  return ((void*)0);
 } else {
  return FUNC_1(&VAR_0->env, VAR_3, VAR_1, VAR_2, VAR_4, (unsigned int)FUNC_2(VAR_4));
 }
}
