
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int len; } ;


 scalar_t__ FUNC_0 (struct buffer const*) ;

__attribute__((used)) static int
FUNC_1(const struct buffer *VAR_0)
{
    if (FUNC_0(VAR_0))
    {
        return VAR_0->len;
    }
    else
    {
        return 0;
    }
}
