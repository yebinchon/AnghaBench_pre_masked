
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferchain {scalar_t__ pos; scalar_t__ size; } ;



size_t FUNC_0(struct bufferchain *VAR_0)
{
 return (size_t)(VAR_0->size - VAR_0->pos);
}
