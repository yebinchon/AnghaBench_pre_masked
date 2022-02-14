
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (char const*,long*) ;

int FUNC_2(int (*VAR_1)(void *VAR_2, int VAR_3, void *VAR_4, size_t VAR_5),
                 void *VAR_6, int VAR_7, const char *VAR_8)
{
    unsigned char *VAR_9;
    long VAR_10;
    int VAR_11 = -1;

    VAR_9 = FUNC_1(VAR_8, &VAR_10);
    if (VAR_9 == ((void*)0))
        return 0;
    if (VAR_10 <= VAR_0)
        VAR_11 = VAR_1(VAR_6, VAR_7, VAR_9, VAR_10);
    FUNC_0(VAR_9);
    return VAR_11;
}
