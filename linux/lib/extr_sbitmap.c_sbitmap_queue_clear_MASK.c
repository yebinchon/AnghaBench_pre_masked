
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int depth; } ;
struct sbitmap_queue {int alloc_hint; TYPE_1__ sb; int round_robin; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned int* FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 int FUNC_3 (struct sbitmap_queue*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(struct sbitmap_queue *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{
 FUNC_5();
 FUNC_2(&VAR_0->sb, VAR_1);







 FUNC_4();
 FUNC_3(VAR_0);

 if (FUNC_0(!VAR_0->round_robin && VAR_1 < VAR_0->sb.depth))
  *FUNC_1(VAR_0->alloc_hint, VAR_2) = VAR_1;
}
