
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIZE_T ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ,void*,int) ;
 int VAR_2 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

BOOL FUNC_4(void **VAR_3, SIZE_T *VAR_4, SIZE_T VAR_5, SIZE_T VAR_6)
{
    SIZE_T VAR_7, VAR_8;
    void *VAR_9;

    if (VAR_5 <= *VAR_4)
        return VAR_2;

    VAR_7 = ~(SIZE_T)0 / VAR_6;
    if (VAR_5 > VAR_7)
        return VAR_0;

    VAR_8 = FUNC_3(1, *VAR_4);
    while (VAR_8 < VAR_5 && VAR_8 <= VAR_7 / 2)
        VAR_8 *= 2;
    if (VAR_8 < VAR_5)
        VAR_8 = VAR_5;

    if (!*VAR_3)
        VAR_9 = FUNC_2(VAR_8 * VAR_6);
    else
        VAR_9 = FUNC_1(FUNC_0(), VAR_1, *VAR_3, VAR_8 * VAR_6);
    if (!VAR_9)
        return VAR_0;

    *VAR_3 = VAR_9;
    *VAR_4 = VAR_8;
    return VAR_2;
}
