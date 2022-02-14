
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int capacity; int offset; scalar_t__ len; int * data; } ;



__attribute__((used)) static inline bool
FUNC_0(struct buffer *VAR_0, int VAR_1)
{
    if (VAR_1 < 0 || VAR_1 > VAR_0->capacity || VAR_0->data == ((void*)0))
    {
        return 0;
    }
    VAR_0->len = 0;
    VAR_0->offset = VAR_1;
    return 1;
}
