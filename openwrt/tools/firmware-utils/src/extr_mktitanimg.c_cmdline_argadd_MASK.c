
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* p_next; } ;
struct TYPE_5__ {scalar_t__ argc; TYPE_2__* list; } ;
typedef TYPE_1__ CMDLINE_ARGS ;
typedef TYPE_2__ CMDLINE_ARG ;



__attribute__((used)) static void FUNC_0(CMDLINE_ARGS* VAR_0, CMDLINE_ARG* VAR_1)
{
 CMDLINE_ARG* VAR_2;
 CMDLINE_ARG* VAR_3=((void*)0);


 if(VAR_0->argc == 0)
 {

  VAR_0->list = VAR_1;
 }
 else
 {

  for(VAR_2=VAR_0->list; VAR_2 != ((void*)0); VAR_2=VAR_2->p_next)
   VAR_3 = VAR_2;


  VAR_3->p_next=VAR_1;
 }


 VAR_0->argc++;
}
