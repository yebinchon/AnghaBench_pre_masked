
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_buffer {scalar_t__ pos; int size; int const* buffer; } ;
typedef int INT ;
typedef int BYTE ;



__attribute__((used)) static inline void FUNC_0(struct memory_buffer *VAR_0, const BYTE *VAR_1, INT VAR_2)
{
    VAR_0->buffer = VAR_1;
    VAR_0->size = VAR_2;
    VAR_0->pos = 0;
}
