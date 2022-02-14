
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inet_hashinfo {int * lhash2; TYPE_1__* listening_hash; } ;
struct TYPE_2__ {scalar_t__ count; int head; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct inet_hashinfo *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_1(&VAR_1->listening_hash[VAR_2].lock);
  FUNC_0(&VAR_1->listening_hash[VAR_2].head);
  VAR_1->listening_hash[VAR_2].count = 0;
 }

 VAR_1->lhash2 = ((void*)0);
}
