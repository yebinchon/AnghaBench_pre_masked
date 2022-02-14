
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ connofs; scalar_t__ keyword; } ;
typedef TYPE_1__ internalPQconninfoOption ;
typedef int PQconninfoOption ;
typedef int PQExpBufferData ;
typedef int PGconn ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,char*,int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

PQconninfoOption *
FUNC_5(PGconn *VAR_1)
{
 PQExpBufferData VAR_2;
 PQconninfoOption *VAR_3;

 if (VAR_1 == ((void*)0))
  return ((void*)0);


 FUNC_3(&VAR_2);
 if (FUNC_0(VAR_2))
  return ((void*)0);

 VAR_3 = FUNC_1(&VAR_2);

 if (VAR_3 != ((void*)0))
 {
  const internalPQconninfoOption *VAR_4;

  for (VAR_4 = VAR_0; VAR_4->keyword; VAR_4++)
  {
   char **VAR_5;

   if (VAR_4->connofs < 0)
    continue;

   VAR_5 = (char **) ((char *) VAR_1 + VAR_4->connofs);

   if (*VAR_5)
    FUNC_2(VAR_3, VAR_4->keyword, *VAR_5,
          &VAR_2, 1, 0);
  }
 }

 FUNC_4(&VAR_2);

 return VAR_3;
}
