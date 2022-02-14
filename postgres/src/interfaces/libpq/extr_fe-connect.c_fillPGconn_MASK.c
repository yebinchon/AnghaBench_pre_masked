
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ connofs; scalar_t__ keyword; } ;
typedef TYPE_1__ internalPQconninfoOption ;
struct TYPE_6__ {int errorMessage; } ;
typedef int PQconninfoOption ;
typedef TYPE_2__ PGconn ;


 TYPE_1__* VAR_0 ;
 char* FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static bool
FUNC_5(PGconn *VAR_1, PQconninfoOption *VAR_2)
{
 const internalPQconninfoOption *VAR_3;

 for (VAR_3 = VAR_0; VAR_3->keyword; VAR_3++)
 {
  if (VAR_3->connofs >= 0)
  {
   const char *VAR_4 = FUNC_0(VAR_2, VAR_3->keyword);

   if (VAR_4)
   {
    char **VAR_5 = (char **) ((char *) VAR_1 + VAR_3->connofs);

    if (*VAR_5)
     FUNC_1(*VAR_5);
    *VAR_5 = FUNC_4(VAR_4);
    if (*VAR_5 == ((void*)0))
    {
     FUNC_3(&VAR_1->errorMessage,
           FUNC_2("out of memory\n"));
     return 0;
    }
   }
  }
 }

 return 1;
}
