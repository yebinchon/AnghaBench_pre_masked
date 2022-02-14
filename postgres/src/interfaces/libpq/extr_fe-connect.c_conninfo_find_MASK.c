
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * keyword; } ;
typedef TYPE_1__ PQconninfoOption ;


 scalar_t__ FUNC_0 (int *,char const*) ;

__attribute__((used)) static PQconninfoOption *
FUNC_1(PQconninfoOption *VAR_0, const char *VAR_1)
{
 PQconninfoOption *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->keyword != ((void*)0); VAR_2++)
 {
  if (FUNC_0(VAR_2->keyword, VAR_1) == 0)
   return VAR_2;
 }

 return ((void*)0);
}
