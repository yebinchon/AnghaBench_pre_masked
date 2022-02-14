
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPACKET ;


 int FUNC_0 (int *,size_t,unsigned char**) ;

int FUNC_1(WPACKET *VAR_0, size_t VAR_1,
                                unsigned char **VAR_2, size_t VAR_3)
{
    if (!FUNC_0(VAR_0, VAR_3 + VAR_1, VAR_2))
        return 0;

    if (*VAR_2 != ((void*)0))
        *VAR_2 += VAR_3;

    return 1;
}
