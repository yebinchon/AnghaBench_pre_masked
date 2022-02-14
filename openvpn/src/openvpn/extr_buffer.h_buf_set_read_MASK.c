
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct buffer {int len; int capacity; int * data; scalar_t__ offset; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2(struct buffer *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    if (!FUNC_1(VAR_2))
    {
        FUNC_0(VAR_2);
    }
    VAR_0->len = VAR_0->capacity = VAR_2;
    VAR_0->offset = 0;
    VAR_0->data = (uint8_t *)VAR_1;
}
