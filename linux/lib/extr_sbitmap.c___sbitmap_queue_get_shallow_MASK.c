
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int depth; } ;
struct sbitmap_queue {unsigned int min_shallow_depth; int round_robin; int * alloc_hint; TYPE_1__ sb; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,unsigned int,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned int) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct sbitmap_queue *VAR_0,
    unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3;
 int VAR_4;

 FUNC_1(VAR_1 < VAR_0->min_shallow_depth);

 VAR_2 = FUNC_4(*VAR_0->alloc_hint);
 VAR_3 = FUNC_0(VAR_0->sb.depth);
 if (FUNC_6(VAR_2 >= VAR_3)) {
  VAR_2 = VAR_3 ? FUNC_2() % VAR_3 : 0;
  FUNC_5(*VAR_0->alloc_hint, VAR_2);
 }
 VAR_4 = FUNC_3(&VAR_0->sb, VAR_2, VAR_1);

 if (VAR_4 == -1) {

  FUNC_5(*VAR_0->alloc_hint, 0);
 } else if (VAR_4 == VAR_2 || FUNC_6(VAR_0->round_robin)) {

  VAR_2 = VAR_4 + 1;
  if (VAR_2 >= VAR_3 - 1)
   VAR_2 = 0;
  FUNC_5(*VAR_0->alloc_hint, VAR_2);
 }

 return VAR_4;
}
