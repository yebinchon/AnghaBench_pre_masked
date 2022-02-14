
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,unsigned char const) ;

__attribute__((used)) static
char*
FUNC_1(const unsigned char* VAR_0, unsigned long VAR_1)
{
    static char VAR_2[24];

    char* VAR_3 = VAR_2;
    *VAR_3 = '\0';

    while (VAR_1--)
    {
        VAR_3 += FUNC_0(VAR_3, "%02x", *VAR_0);
        VAR_0++;
        if (VAR_1)
            *VAR_3++ = ':';
    }

    return VAR_2;
}
