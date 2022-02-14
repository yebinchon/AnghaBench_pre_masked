
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (int ,int,int ) ;
 int VAR_0 ;

void *
FUNC_1(size_t VAR_1)
{
    void *VAR_2;

    VAR_2 = FUNC_0(0, sizeof(size_t) + VAR_1, VAR_0);
    if (VAR_2 != ((void*)0))
    {
        *((size_t *)VAR_2) = VAR_1;
        VAR_2 = (void *)((size_t *)VAR_2 + 1);
    }

    return VAR_2;
}
