
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct buffer {int len; int offset; } ;


 int * FUNC_0 (struct buffer*) ;

__attribute__((used)) static inline uint8_t *
FUNC_1(struct buffer *VAR_0, int VAR_1)
{
    uint8_t *VAR_2;
    if (VAR_1 < 0 || VAR_0->len < VAR_1)
    {
        return ((void*)0);
    }
    VAR_2 = FUNC_0(VAR_0);
    VAR_0->offset += VAR_1;
    VAR_0->len -= VAR_1;
    return VAR_2;
}
