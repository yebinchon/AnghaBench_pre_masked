
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_ext {scalar_t__ max_sz; scalar_t__ cur_pos; int * data; } ;



__attribute__((used)) static void
FUNC_0(struct buffer_ext *VAR_0)
{
 VAR_0->data = ((void*)0);
 VAR_0->cur_pos = 0;
 VAR_0->max_sz = 0;
}
