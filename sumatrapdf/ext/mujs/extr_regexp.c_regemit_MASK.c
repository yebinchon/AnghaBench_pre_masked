
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int opcode; int * y; int x; int * cc; scalar_t__ c; scalar_t__ n; } ;
struct TYPE_5__ {int end; } ;
typedef TYPE_1__ Reprog ;
typedef TYPE_2__ Reinst ;



__attribute__((used)) static Reinst *FUNC_0(Reprog *VAR_0, int VAR_1)
{
 Reinst *VAR_2 = VAR_0->end++;
 VAR_2->opcode = VAR_1;
 VAR_2->n = 0;
 VAR_2->c = 0;
 VAR_2->cc = ((void*)0);
 VAR_2->x = *(VAR_2->y = ((void*)0));
 return VAR_2;
}
