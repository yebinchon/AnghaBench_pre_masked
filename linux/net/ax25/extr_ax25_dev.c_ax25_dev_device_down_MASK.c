
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct net_device {int * ax25_ptr; } ;
struct TYPE_7__ {struct TYPE_7__* next; struct net_device* forward; } ;
typedef TYPE_1__ ax25_dev ;


 TYPE_1__* FUNC_0 (struct net_device*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct net_device *VAR_2)
{
 ax25_dev *VAR_3, *VAR_4;

 if ((VAR_4 = FUNC_0(VAR_2)) == ((void*)0))
  return;

 FUNC_2(VAR_4);

 FUNC_5(&VAR_1);
 for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
  if (VAR_3->forward == VAR_2)
   VAR_3->forward = ((void*)0);

 if ((VAR_3 = VAR_0) == VAR_4) {
  VAR_0 = VAR_3->next;
  FUNC_6(&VAR_1);
  VAR_2->ax25_ptr = ((void*)0);
  FUNC_3(VAR_2);
  FUNC_4(VAR_4);
  return;
 }

 while (VAR_3 != ((void*)0) && VAR_3->next != ((void*)0)) {
  if (VAR_3->next == VAR_4) {
   VAR_3->next = VAR_4->next;
   FUNC_6(&VAR_1);
   VAR_2->ax25_ptr = ((void*)0);
   FUNC_3(VAR_2);
   FUNC_4(VAR_4);
   return;
  }

  VAR_3 = VAR_3->next;
 }
 FUNC_6(&VAR_1);
 VAR_2->ax25_ptr = ((void*)0);
}
