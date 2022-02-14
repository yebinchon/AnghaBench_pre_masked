
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int done; int th; } ;
struct evlist {TYPE_1__ thread; } ;


 int FUNC_0 (struct evlist*) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct evlist *VAR_0)
{
 if (!VAR_0)
  return;
 VAR_0->thread.done = 1;
 FUNC_1(VAR_0->thread.th, ((void*)0));
 FUNC_0(VAR_0);
}
