
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inet_hashinfo {int lhash2_mask; TYPE_1__* lhash2; } ;
struct TYPE_2__ {scalar_t__ count; int head; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct inet_hashinfo *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 <= VAR_0->lhash2_mask; VAR_1++) {
  FUNC_1(&VAR_0->lhash2[VAR_1].lock);
  FUNC_0(&VAR_0->lhash2[VAR_1].head);
  VAR_0->lhash2[VAR_1].count = 0;
 }
}
