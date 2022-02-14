
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (void*,size_t) ;

void *FUNC_3(void *VAR_0, size_t VAR_1)
{
    void *VAR_2;

    FUNC_0(VAR_1 > 0);
    VAR_2 = FUNC_2(VAR_0, VAR_1);
    if(VAR_2 == ((void*)0))
    {
 FUNC_1("Virtual memory exhausted.\n");
    }
    return VAR_2;
}
