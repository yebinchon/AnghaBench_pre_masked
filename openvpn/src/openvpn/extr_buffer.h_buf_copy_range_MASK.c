
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int len; scalar_t__ offset; scalar_t__ capacity; scalar_t__ data; } ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static inline bool
FUNC_1(struct buffer *VAR_0,
               int VAR_1,
               const struct buffer *VAR_2,
               int VAR_3,
               int VAR_4)
{
    if (VAR_3 < 0
        || VAR_4 < 0
        || VAR_3 + VAR_4 > VAR_2->len
        || VAR_1 < 0
        || VAR_0->offset + VAR_1 + VAR_4 > VAR_0->capacity)
    {
        return 0;
    }
    FUNC_0(VAR_0->data + VAR_0->offset + VAR_1, VAR_2->data + VAR_2->offset + VAR_3, VAR_4);
    if (VAR_1 + VAR_4 > VAR_0->len)
    {
        VAR_0->len = VAR_1 + VAR_4;
    }
    return 1;
}
