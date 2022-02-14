
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gen_pool_chunk {size_t end_addr; size_t start_addr; } ;



__attribute__((used)) static inline size_t FUNC_0(const struct gen_pool_chunk *VAR_0)
{
 return VAR_0->end_addr - VAR_0->start_addr + 1;
}
