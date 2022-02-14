
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* data; } ;
typedef int PQconninfoOption ;
typedef TYPE_1__ PQExpBufferData ;


 scalar_t__ FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (char const*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;

PQconninfoOption *
FUNC_4(const char *VAR_0, char **VAR_1)
{
 PQExpBufferData VAR_2;
 PQconninfoOption *VAR_3;

 if (VAR_1)
  *VAR_1 = ((void*)0);
 FUNC_1(&VAR_2);
 if (FUNC_0(VAR_2))
  return ((void*)0);
 VAR_3 = FUNC_2(VAR_0, &VAR_2, 0);
 if (VAR_3 == ((void*)0) && VAR_1)
  *VAR_1 = VAR_2.data;
 else
  FUNC_3(&VAR_2);
 return VAR_3;
}
