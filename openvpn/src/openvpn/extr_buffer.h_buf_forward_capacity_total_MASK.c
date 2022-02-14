
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int capacity; int offset; } ;


 scalar_t__ FUNC_0 (struct buffer const*) ;

__attribute__((used)) static inline int
FUNC_1(const struct buffer *VAR_0)
{
    if (FUNC_0(VAR_0))
    {
        int VAR_1 = VAR_0->capacity - VAR_0->offset;
        if (VAR_1 < 0)
        {
            VAR_1 = 0;
        }
        return VAR_1;
    }
    else
    {
        return 0;
    }
}
