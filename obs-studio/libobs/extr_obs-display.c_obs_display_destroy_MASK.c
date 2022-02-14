
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__** prev_next; TYPE_2__* next; } ;
typedef TYPE_3__ obs_display_t ;
struct TYPE_8__ {int displays_mutex; } ;
struct TYPE_11__ {TYPE_1__ data; } ;
struct TYPE_9__ {struct TYPE_9__** prev_next; } ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_6__* VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(obs_display_t *VAR_1)
{
 if (VAR_1) {
  FUNC_4(&VAR_0->data.displays_mutex);
  if (VAR_1->prev_next)
   *VAR_1->prev_next = VAR_1->next;
  if (VAR_1->next)
   VAR_1->next->prev_next = VAR_1->prev_next;
  FUNC_5(&VAR_0->data.displays_mutex);

  FUNC_2();
  FUNC_1(VAR_1);
  FUNC_3();

  FUNC_0(VAR_1);
 }
}
