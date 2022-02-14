
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstack {int top; void** entries; } ;



void *FUNC_0(struct pstack *VAR_0)
{
 if (VAR_0->top == 0)
  return ((void*)0);
 return VAR_0->entries[VAR_0->top - 1];
}
