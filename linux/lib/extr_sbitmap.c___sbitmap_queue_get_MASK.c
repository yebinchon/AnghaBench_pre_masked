
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int depth; } ;
struct sbitmap_queue {int round_robin; int * alloc_hint; TYPE_1__ sb; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,unsigned int,int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct sbitmap_queue *VAR_0)
{
 unsigned int VAR_1, VAR_2;
 int VAR_3;

 VAR_1 = FUNC_3(*VAR_0->alloc_hint);
 VAR_2 = FUNC_0(VAR_0->sb.depth);
 if (FUNC_5(VAR_1 >= VAR_2)) {
  VAR_1 = VAR_2 ? FUNC_1() % VAR_2 : 0;
  FUNC_4(*VAR_0->alloc_hint, VAR_1);
 }
 VAR_3 = FUNC_2(&VAR_0->sb, VAR_1, VAR_0->round_robin);

 if (VAR_3 == -1) {

  FUNC_4(*VAR_0->alloc_hint, 0);
 } else if (VAR_3 == VAR_1 || FUNC_5(VAR_0->round_robin)) {

  VAR_1 = VAR_3 + 1;
  if (VAR_1 >= VAR_2 - 1)
   VAR_1 = 0;
  FUNC_4(*VAR_0->alloc_hint, VAR_1);
 }

 return VAR_3;
}
