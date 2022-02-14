
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cstate {int pend; } ;
struct TYPE_3__ {int type; int * y; int x; scalar_t__ n; scalar_t__ m; scalar_t__ ng; scalar_t__ c; int * cc; } ;
typedef TYPE_1__ Renode ;



__attribute__((used)) static Renode *FUNC_0(struct cstate *VAR_0, int VAR_1)
{
 Renode *VAR_2 = VAR_0->pend++;
 VAR_2->type = VAR_1;
 VAR_2->cc = ((void*)0);
 VAR_2->c = 0;
 VAR_2->ng = 0;
 VAR_2->m = 0;
 VAR_2->n = 0;
 VAR_2->x = *(VAR_2->y = ((void*)0));
 return VAR_2;
}
