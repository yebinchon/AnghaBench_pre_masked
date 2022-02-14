
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * val; int * keyword; } ;
typedef TYPE_1__ PQconninfoOption ;
typedef int PGconn ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int *,char*) ;

__attribute__((used)) static bool
FUNC_3(PGconn *VAR_0)
{
 bool VAR_1 = 0;
 PQconninfoOption *VAR_2 = FUNC_0(VAR_0);

 for (PQconninfoOption *VAR_3 = VAR_2; VAR_3->keyword != ((void*)0); VAR_3++)
 {
  if (FUNC_2(VAR_3->keyword, "hostaddr") == 0 && VAR_3->val != ((void*)0))
  {
   VAR_1 = 1;
   break;
  }
 }

 FUNC_1(VAR_2);
 return VAR_1;
}
