
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int depth; } ;
struct sbitmap_queue {unsigned int min_shallow_depth; TYPE_1__ sb; } ;


 int FUNC_0 (struct sbitmap_queue*,int ) ;

void FUNC_1(struct sbitmap_queue *VAR_0,
         unsigned int VAR_1)
{
 VAR_0->min_shallow_depth = VAR_1;
 FUNC_0(VAR_0, VAR_0->sb.depth);
}
