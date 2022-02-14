
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Vector {int current; int capacity; int * pData; } ;
typedef int const* LPBYTE ;
typedef int BYTE ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct Vector * VAR_0, const BYTE * VAR_1, int VAR_2)
{
    int VAR_3 = VAR_0->current;
    if (VAR_0->current + VAR_2 > VAR_0->capacity)
    {
        LPBYTE VAR_4 = VAR_0->pData;
        VAR_0->capacity = (VAR_0->capacity + VAR_2) * 2;
        VAR_0->pData = FUNC_0(VAR_0->capacity);
        FUNC_2(VAR_0->pData, VAR_4, VAR_0->current);
        FUNC_1(VAR_4);
    }
    FUNC_2(VAR_0->pData + VAR_0->current, VAR_1, VAR_2);
    VAR_0->current += VAR_2;
    return VAR_3;
}
