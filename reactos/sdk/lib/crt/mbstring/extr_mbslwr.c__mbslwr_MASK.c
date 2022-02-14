
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;
 unsigned char FUNC_1 (unsigned short) ;
 unsigned char FUNC_2 (unsigned char) ;

unsigned char * FUNC_3(unsigned char *VAR_0)
{
    unsigned char *VAR_1=VAR_0;

    if (VAR_0 == ((void*)0))
    {
        return ((void*)0);
    }

    while (*VAR_1)
    {
        if (!FUNC_0(*VAR_1))
        {
            *VAR_1 = FUNC_2(*VAR_1);
            VAR_1++;
        }
        else
        {
            *VAR_1 = FUNC_1(*(unsigned short *)VAR_1);
            VAR_1++;
        }
    }
    return VAR_0;
}
