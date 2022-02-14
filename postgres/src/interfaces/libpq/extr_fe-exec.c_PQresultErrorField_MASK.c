
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int code; char* contents; struct TYPE_5__* next; } ;
struct TYPE_4__ {TYPE_2__* errFields; } ;
typedef TYPE_1__ PGresult ;
typedef TYPE_2__ PGMessageField ;



char *
FUNC_0(const PGresult *VAR_0, int VAR_1)
{
 PGMessageField *VAR_2;

 if (!VAR_0)
  return ((void*)0);
 for (VAR_2 = VAR_0->errFields; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
 {
  if (VAR_2->code == VAR_1)
   return VAR_2->contents;
 }
 return ((void*)0);
}
