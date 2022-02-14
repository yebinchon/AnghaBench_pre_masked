
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdarray {int nr_alloc; int nr; } ;



__attribute__((used)) static inline int FUNC_0(struct fdarray *VAR_0)
{
 return VAR_0->nr_alloc - VAR_0->nr;
}
