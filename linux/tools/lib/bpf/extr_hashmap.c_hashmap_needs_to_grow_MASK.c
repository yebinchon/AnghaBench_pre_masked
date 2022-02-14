
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap {int cap; int sz; } ;



__attribute__((used)) static bool FUNC_0(struct hashmap *VAR_0)
{

 return (VAR_0->cap == 0) || ((VAR_0->sz + 1) * 4 / 3 > VAR_0->cap);
}
