
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aa_loaddata {TYPE_1__* ns; int list; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct aa_loaddata*) ;

void FUNC_5(struct aa_loaddata *VAR_0)
{
 FUNC_0(VAR_0->ns && !FUNC_3(&VAR_0->ns->lock));

 if (VAR_0->ns) {
  FUNC_4(VAR_0);
  FUNC_2(&VAR_0->list);
  FUNC_1(VAR_0->ns);
  VAR_0->ns = ((void*)0);
 }
}
