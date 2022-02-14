
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*,int) ;

__attribute__((used)) static inline void
FUNC_1(int *VAR_0,
                                   int VAR_1,
                                   struct buffer *VAR_2)
{
    if (VAR_1 > 0 && *VAR_0 > VAR_1)
    {
        *VAR_0 -= VAR_1;
        if (!FUNC_0(VAR_2, VAR_1))
        {
            *VAR_0 = 0;
        }
    }
}
