
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_7__ {TYPE_1__ text; struct TYPE_7__* next; } ;
typedef TYPE_2__ FOBJECTLIST ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (void**) ;

void FUNC_1(FOBJECTLIST **VAR_1, FOBJECTLIST **VAR_2)
{
 FOBJECTLIST *VAR_3, *VAR_4;

 for (VAR_3=*VAR_1, VAR_4=VAR_3->next; VAR_3; VAR_3=VAR_4) {
  VAR_4 = VAR_3->next;

  if(VAR_3->text.data)
   FUNC_0((void **)&(VAR_3->text.data));

  FUNC_0((void **)&VAR_3);
 }

 *VAR_2 = VAR_0;
 *VAR_1 = VAR_0;
}
