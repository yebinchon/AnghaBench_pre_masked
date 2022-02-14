
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (size_t*) ;
 int VAR_0 ;
 int FUNC_2 (void*,void*,size_t) ;

void *
FUNC_3(void *VAR_1, size_t VAR_2)
{
    void *VAR_3;
    size_t VAR_4;

    VAR_3 = FUNC_0(0, sizeof(size_t) + VAR_2, VAR_0);
    if (VAR_3 != ((void*)0))
    {
        *((size_t *)VAR_3) = VAR_2;
        VAR_3 = (void *)((size_t *)VAR_3 + 1);
        VAR_4 = *((size_t *)VAR_1 - 1);
        if (VAR_2 < VAR_4)
        {
            VAR_4 = VAR_2;
        }
        FUNC_2(VAR_3, VAR_1, VAR_4);
        FUNC_1((size_t *)VAR_1 - 1);
    }

    return VAR_3;
}
