
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;


 int FUNC_0 (scalar_t__,int const,int const) ;

__attribute__((used)) static inline int
FUNC_1(const struct timeval *VAR_0, const struct timeval *VAR_1, const unsigned int VAR_2)
{
    const int VAR_3 = VAR_2 * 1000000;
    const int VAR_4 = VAR_0->tv_sec - VAR_1->tv_sec;

    if (VAR_4 > ((int)VAR_2 + 10))
    {
        return VAR_3;
    }
    else if (VAR_4 < -((int)VAR_2 + 10))
    {
        return -VAR_3;
    }
    return FUNC_0(VAR_4 * 1000000 + (VAR_0->tv_usec - VAR_1->tv_usec), -VAR_3, VAR_3);
}
