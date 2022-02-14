
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (size_t) ;

void *FUNC_3(size_t VAR_0)
{
    void *VAR_1 = FUNC_2(VAR_0);
    if (!VAR_1)
    {
        FUNC_0("Out of memory!\n");
        FUNC_1(1);
    }
    return VAR_1;
}
