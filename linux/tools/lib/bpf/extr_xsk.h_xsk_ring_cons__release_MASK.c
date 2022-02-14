
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_ring_cons {size_t* consumer; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(struct xsk_ring_cons *VAR_0, size_t VAR_1)
{



 FUNC_0();

 *VAR_0->consumer += VAR_1;
}
