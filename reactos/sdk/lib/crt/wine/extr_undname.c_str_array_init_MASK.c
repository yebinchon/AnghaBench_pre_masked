
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array {int * elts; scalar_t__ alloc; scalar_t__ max; scalar_t__ num; scalar_t__ start; } ;



__attribute__((used)) static void FUNC_0(struct array* VAR_0)
{
    VAR_0->start = VAR_0->num = VAR_0->max = VAR_0->alloc = 0;
    VAR_0->elts = ((void*)0);
}
