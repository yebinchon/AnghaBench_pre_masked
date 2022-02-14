
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * notifyTail; TYPE_1__* notifyHead; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ PGnotify ;
typedef TYPE_2__ PGconn ;


 int FUNC_0 (TYPE_2__*) ;

PGnotify *
FUNC_1(PGconn *VAR_0)
{
 PGnotify *VAR_1;

 if (!VAR_0)
  return ((void*)0);


 FUNC_0(VAR_0);

 VAR_1 = VAR_0->notifyHead;
 if (VAR_1)
 {
  VAR_0->notifyHead = VAR_1->next;
  if (!VAR_0->notifyHead)
   VAR_0->notifyTail = ((void*)0);
  VAR_1->next = ((void*)0);
 }
 return VAR_1;
}
