
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_buffer {scalar_t__ size; scalar_t__ pos; void* buffer; } ;
typedef scalar_t__ INT ;



__attribute__((used)) static inline const void *FUNC_0(struct memory_buffer *VAR_0, INT VAR_1)
{
    if (VAR_0->size - VAR_0->pos >= VAR_1)
    {
        const void *VAR_2 = VAR_0->buffer + VAR_0->pos;
        VAR_0->pos += VAR_1;
        return VAR_2;
    }
    return ((void*)0);
}
