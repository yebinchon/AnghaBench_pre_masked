
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct DynamicBuffer {scalar_t__* data; scalar_t__ used; } ;



__attribute__((used)) static inline void FUNC_0(struct DynamicBuffer *VAR_0)
{
    VAR_0->used = 0;
    if (VAR_0->data) VAR_0->data[0] = 0;
}
