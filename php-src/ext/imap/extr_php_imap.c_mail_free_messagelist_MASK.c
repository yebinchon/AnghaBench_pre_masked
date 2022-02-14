
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ MESSAGELIST ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (void**) ;

void FUNC_1(MESSAGELIST **VAR_1, MESSAGELIST **VAR_2)
{
 MESSAGELIST *VAR_3, *VAR_4;

 for (VAR_3 = *VAR_1, VAR_4 = VAR_3->next; VAR_3; VAR_3 = VAR_4) {
  VAR_4 = VAR_3->next;
  FUNC_0((void **)&VAR_3);
 }

 *VAR_2 = VAR_0;
 *VAR_1 = VAR_0;
}
