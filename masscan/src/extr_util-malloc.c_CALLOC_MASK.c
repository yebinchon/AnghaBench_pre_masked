
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 () ;
 void* FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;

void *
FUNC_3(size_t VAR_3, size_t VAR_4)
{
    void *VAR_5;

    if (VAR_3 >= VAR_0 || VAR_4 >= VAR_0) {
        if (VAR_4 != 0 && VAR_3 >= VAR_1/VAR_4) {
            FUNC_2(VAR_2, "[-] alloc too large, aborting\n");
            FUNC_0();
        }
    }

    VAR_5 = FUNC_1(VAR_3, VAR_4);
    if (VAR_5 == ((void*)0) && VAR_3 * VAR_4 != 0) {
        FUNC_2(VAR_2, "[-] out of memory, aborting\n");
        FUNC_0();
    }

    return VAR_5;
}
