
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
typedef int FileInfoListPtr ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(LineListPtr VAR_0, FileInfoListPtr VAR_1)
{
 LinePtr VAR_2, VAR_3;

 FUNC_1(VAR_1);
 for (VAR_2 = VAR_0->first; VAR_2 != ((void*)0); VAR_2 = VAR_3) {
  VAR_3 = VAR_2->next;
  if (FUNC_0(VAR_1, VAR_2->line) < 0)
   return (-1);
 }
 return (0);
}
