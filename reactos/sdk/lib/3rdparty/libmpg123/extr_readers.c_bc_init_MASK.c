
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferchain {scalar_t__ fileoff; scalar_t__ firstpos; scalar_t__ pos; scalar_t__ size; int * first; int * last; } ;



__attribute__((used)) static void FUNC_0(struct bufferchain *VAR_0)
{
 VAR_0->first = ((void*)0);
 VAR_0->last = VAR_0->first;
 VAR_0->size = 0;
 VAR_0->pos = 0;
 VAR_0->firstpos = 0;
 VAR_0->fileoff = 0;
}
