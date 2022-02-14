
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int env; } ;
typedef TYPE_1__ fcgi_request ;


 int FUNC_0 (char const*,int) ;
 char* FUNC_1 (int *,int ,char*,int,unsigned int*) ;

char* FUNC_2(fcgi_request *VAR_0, const char* VAR_1, int VAR_2)
{
 unsigned int VAR_3;

 if (!VAR_0) return ((void*)0);

 return FUNC_1(&VAR_0->env, FUNC_0(VAR_1, VAR_2), (char*)VAR_1, VAR_2, &VAR_3);
}
