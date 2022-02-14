
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIZE_T ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int) ;
 int FUNC_1 (int,int) ;

BOOL FUNC_2(void **VAR_2, SIZE_T *VAR_3, SIZE_T VAR_4, SIZE_T VAR_5)
{
    SIZE_T VAR_6, VAR_7;
    void *VAR_8;

    if (VAR_4 <= *VAR_3)
        return VAR_1;

    VAR_7 = ~(SIZE_T)0 / VAR_5;
    if (VAR_7 < VAR_4)
        return VAR_0;

    VAR_6 = FUNC_1(*VAR_3, 4);
    while (VAR_6 < VAR_4 && VAR_6 <= VAR_7 / 2)
        VAR_6 *= 2;

    if (VAR_6 < VAR_4)
        VAR_6 = VAR_7;

    if (!(VAR_8 = FUNC_0(*VAR_2, VAR_6 * VAR_5)))
        return VAR_0;

    *VAR_2 = VAR_8;
    *VAR_3 = VAR_6;
    return VAR_1;
}
