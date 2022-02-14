
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {int producer; void** queue; scalar_t__ consumer_tail; scalar_t__ consumer_head; } ;
typedef int gfp_t ;


 void* FUNC_0 (struct ptr_ring*) ;
 int FUNC_1 (struct ptr_ring*,int) ;

__attribute__((used)) static inline void **FUNC_2(struct ptr_ring *VAR_0, void **VAR_1,
        int VAR_2, gfp_t VAR_3,
        void (*VAR_4)(void *))
{
 int VAR_5 = 0;
 void **VAR_6;
 void *VAR_7;

 while ((VAR_7 = FUNC_0(VAR_0)))
  if (VAR_5 < VAR_2)
   VAR_1[VAR_5++] = VAR_7;
  else if (VAR_4)
   VAR_4(VAR_7);

 if (VAR_5 >= VAR_2)
  VAR_5 = 0;
 FUNC_1(VAR_0, VAR_2);
 VAR_0->producer = VAR_5;
 VAR_0->consumer_head = 0;
 VAR_0->consumer_tail = 0;
 VAR_6 = VAR_0->queue;
 VAR_0->queue = VAR_1;

 return VAR_6;
}
