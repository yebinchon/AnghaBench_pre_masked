
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t FUNC_0 (char const*) ;

int FUNC_1(int (*VAR_1)(void *VAR_2, int VAR_3, void *VAR_4, size_t VAR_5),
                 void *VAR_6, int VAR_7, const char *VAR_8)
{
    size_t VAR_9;

    VAR_9 = FUNC_0(VAR_8);
    if (VAR_9 > VAR_0)
        return -1;
    return VAR_1(VAR_6, VAR_7, (void *)VAR_8, VAR_9);
}
