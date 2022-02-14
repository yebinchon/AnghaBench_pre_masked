
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (size_t) ;
 int VAR_0 ;

void *
FUNC_3(size_t VAR_1)
{
    void *VAR_2;





    if (VAR_1 == 0)
        VAR_1 = 1;


    VAR_2 = FUNC_2(VAR_1);


    if (VAR_2 == ((void*)0)) {
        FUNC_1(VAR_0, "[-] out of memory, aborting\n");
        FUNC_0();
    }



    return VAR_2;
}
