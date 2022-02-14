
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_message {int size; int count; void const* data; } ;



__attribute__((used)) static inline void FUNC_0( struct packed_message *VAR_0, const void *VAR_1, int VAR_2 )
{
    VAR_0->data = VAR_1;
    VAR_0->size = VAR_2;
    VAR_0->count++;
}
