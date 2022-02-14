
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* first; } ;
struct TYPE_4__ {int line; struct TYPE_4__* next; } ;
typedef TYPE_1__* LinePtr ;
typedef TYPE_2__* LineListPtr ;
typedef int FTPCIPtr ;


 int FUNC_0 (int const,char*,int ) ;

void
FUNC_1(const FTPCIPtr VAR_0, LineListPtr VAR_1)
{
 LinePtr VAR_2;

 if (VAR_1 != ((void*)0)) {
  for (VAR_2 = VAR_1->first; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
   FUNC_0(VAR_0, "%s\n", VAR_2->line);
 }
}
