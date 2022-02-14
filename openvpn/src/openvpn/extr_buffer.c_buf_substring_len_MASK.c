
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*) ;

int
FUNC_1(const struct buffer *VAR_0, int VAR_1)
{
    int VAR_2 = 0;
    struct buffer VAR_3 = *VAR_0;
    int VAR_4;

    while ((VAR_4 = FUNC_0(&VAR_3)) >= 0)
    {
        ++VAR_2;
        if (VAR_4 == VAR_1)
        {
            return VAR_2;
        }
    }
    return -1;
}
