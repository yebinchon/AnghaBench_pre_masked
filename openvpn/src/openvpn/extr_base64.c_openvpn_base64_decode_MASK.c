
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const) ;
 unsigned int FUNC_1 (char const*) ;

int
FUNC_2(const char *VAR_2, void *VAR_3, int VAR_4)
{
    const char *VAR_5;
    unsigned char *VAR_6;
    unsigned char *VAR_7 = ((void*)0);

    VAR_6 = VAR_3;
    if (VAR_4 >= 0)
    {
        VAR_7 = VAR_6 + VAR_4;
    }
    for (VAR_5 = VAR_2; *VAR_5 && (*VAR_5 == '=' || FUNC_0(VAR_1, *VAR_5)); VAR_5 += 4)
    {
        unsigned int VAR_8 = FUNC_1(VAR_5);
        unsigned int VAR_9 = (VAR_8 >> 24) & 0xff;
        if (VAR_8 == VAR_0)
        {
            return -1;
        }
        if (VAR_7 && VAR_6 >= VAR_7)
        {
            return -1;
        }
        *VAR_6++ = (VAR_8 >> 16) & 0xff;
        if (VAR_9 < 2)
        {
            if (VAR_7 && VAR_6 >= VAR_7)
            {
                return -1;
            }
            *VAR_6++ = (VAR_8 >> 8) & 0xff;
        }
        if (VAR_9 < 1)
        {
            if (VAR_7 && VAR_6 >= VAR_7)
            {
                return -1;
            }
            *VAR_6++ = VAR_8 & 0xff;
        }
    }
    return VAR_6 - (unsigned char *) VAR_3;
}
