
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int line; struct TYPE_7__* next; } ;
struct TYPE_5__ {TYPE_3__* first; } ;
struct TYPE_6__ {int code; TYPE_1__ msg; } ;
typedef TYPE_2__* ResponsePtr ;
typedef TYPE_3__* LinePtr ;
typedef int FTPCIPtr ;


 int FUNC_0 (int const,char*,int ,...) ;

void
FUNC_1(const FTPCIPtr VAR_0, ResponsePtr VAR_1)
{
 LinePtr VAR_2;

 if (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_1->msg.first;
  if (VAR_2 != ((void*)0)) {
   FUNC_0(VAR_0, "%3d: %s\n", VAR_1->code, VAR_2->line);
   for (VAR_2 = VAR_2->next; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
    FUNC_0(VAR_0, "     %s\n", VAR_2->line);
  }
 }
}
