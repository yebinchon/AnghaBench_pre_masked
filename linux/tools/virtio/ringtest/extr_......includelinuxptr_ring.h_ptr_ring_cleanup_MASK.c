
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_ring {int queue; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (struct ptr_ring*) ;

__attribute__((used)) static inline void FUNC_2(struct ptr_ring *VAR_0, void (*VAR_1)(void *))
{
 void *VAR_2;

 if (VAR_1)
  while ((VAR_2 = FUNC_1(VAR_0)))
   VAR_1(VAR_2);
 FUNC_0(VAR_0->queue);
}
