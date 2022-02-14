
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {scalar_t__ offset; scalar_t__ len; scalar_t__ capacity; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct buffer const*) ;

__attribute__((used)) static inline bool
FUNC_2(const struct buffer *VAR_0, int VAR_1)
{
    return FUNC_1(VAR_0) && FUNC_0(VAR_1)
           && VAR_0->offset + VAR_0->len + VAR_1 <= VAR_0->capacity;
}
