
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t whichhost; char* pgpass; TYPE_1__* connhost; } ;
struct TYPE_4__ {char* password; } ;
typedef TYPE_2__ PGconn ;



char *
FUNC_0(const PGconn *VAR_0)
{
 char *VAR_1 = ((void*)0);

 if (!VAR_0)
  return ((void*)0);
 if (VAR_0->connhost != ((void*)0))
  VAR_1 = VAR_0->connhost[VAR_0->whichhost].password;
 if (VAR_1 == ((void*)0))
  VAR_1 = VAR_0->pgpass;

 if (VAR_1 == ((void*)0))
  VAR_1 = "";
 return VAR_1;
}
