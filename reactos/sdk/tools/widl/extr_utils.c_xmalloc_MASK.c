
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (void*,int,size_t) ;

void *FUNC_4(size_t VAR_0)
{
    void *VAR_1;

    FUNC_0(VAR_0 > 0);
    VAR_1 = FUNC_2(VAR_0);
    if(VAR_1 == ((void*)0))
    {
 FUNC_1("Virtual memory exhausted.\n");
    }
    FUNC_3(VAR_1, 0x55, VAR_0);
    return VAR_1;
}
