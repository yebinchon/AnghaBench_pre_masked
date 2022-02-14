
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct block_range_iter {int end; int start; } ;



__attribute__((used)) static inline bool FUNC_0(struct block_range_iter *VAR_0)
{
 if (!VAR_0->start || !VAR_0->end)
  return 0;
 return 1;
}
