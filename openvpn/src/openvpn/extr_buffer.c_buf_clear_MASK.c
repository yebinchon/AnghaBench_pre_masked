
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {scalar_t__ capacity; scalar_t__ offset; scalar_t__ len; int data; } ;


 int FUNC_0 (int ,scalar_t__) ;

void
FUNC_1(struct buffer *VAR_0)
{
    if (VAR_0->capacity > 0)
    {
        FUNC_0(VAR_0->data, VAR_0->capacity);
    }
    VAR_0->len = 0;
    VAR_0->offset = 0;
}
