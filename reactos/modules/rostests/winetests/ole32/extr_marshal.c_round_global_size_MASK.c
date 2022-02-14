
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIZE_T ;


 int VAR_0 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static SIZE_T FUNC_3(SIZE_T VAR_1)
{
    static SIZE_T VAR_2 = -1;
    if (VAR_2 == -1)
    {
        void *VAR_3 = FUNC_0(VAR_0, 1);
        VAR_2 = FUNC_2(VAR_3);
        FUNC_1(VAR_3);
    }

    return ((VAR_1 + VAR_2 - 1) & ~(VAR_2 - 1));
}
