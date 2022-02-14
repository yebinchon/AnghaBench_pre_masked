
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int * data; scalar_t__ len; scalar_t__ offset; scalar_t__ capacity; } ;



__attribute__((used)) static inline void
FUNC_0(struct buffer *VAR_0)
{
    VAR_0->capacity = 0;
    VAR_0->offset = 0;
    VAR_0->len = 0;
    VAR_0->data = ((void*)0);
}
