
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct signal_info {struct signal_info* next; } ;
struct TYPE_4__ {int mutex; int global_callbacks_mutex; int global_callbacks; struct signal_info* first; } ;
typedef TYPE_1__ signal_handler_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct signal_info*) ;

__attribute__((used)) static void FUNC_4(signal_handler_t *VAR_0)
{
 struct signal_info *VAR_1 = VAR_0->first;
 while (VAR_1 != ((void*)0)) {
  struct signal_info *VAR_2 = VAR_1->next;
  FUNC_3(VAR_1);
  VAR_1 = VAR_2;
 }

 FUNC_1(VAR_0->global_callbacks);
 FUNC_2(&VAR_0->global_callbacks_mutex);
 FUNC_2(&VAR_0->mutex);
 FUNC_0(VAR_0);
}
