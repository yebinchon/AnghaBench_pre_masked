
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (void*,size_t) ;
 int FUNC_4 (size_t,size_t,size_t*) ;

void *FUNC_5(void *VAR_2, size_t VAR_3, size_t VAR_4)
{
    size_t VAR_5;
    if (FUNC_0(FUNC_4(VAR_3, VAR_4, &VAR_5))) {
        VAR_1 = VAR_0;
        return ((void*)0);
    }
    if (FUNC_0(VAR_5 == 0)) {
        FUNC_1(VAR_2);
        return FUNC_2(1);
    }
    return FUNC_3(VAR_2, VAR_5);
}
