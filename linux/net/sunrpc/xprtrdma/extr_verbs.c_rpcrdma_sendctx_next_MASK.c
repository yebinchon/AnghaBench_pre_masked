
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcrdma_buffer {unsigned long rb_sc_last; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static unsigned long FUNC_1(struct rpcrdma_buffer *VAR_0,
       unsigned long VAR_1)
{
 return FUNC_0(VAR_1 < VAR_0->rb_sc_last) ? VAR_1 + 1 : 0;
}
