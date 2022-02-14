
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int len; int offset; } ;


 int FUNC_0 (struct buffer*) ;

__attribute__((used)) static inline bool
FUNC_1(struct buffer *VAR_0, int VAR_1)
{
    if (!FUNC_0(VAR_0) || VAR_1 < 0 || VAR_0->len < VAR_1)
    {
        return 0;
    }
    VAR_0->offset += VAR_1;
    VAR_0->len -= VAR_1;
    return 1;
}
