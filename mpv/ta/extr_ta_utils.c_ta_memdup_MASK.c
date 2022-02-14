
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,void*,size_t) ;
 void* FUNC_2 (void*,size_t) ;

void *FUNC_3(void *VAR_0, void *VAR_1, size_t VAR_2)
{
    if (!VAR_1) {
        FUNC_0(!VAR_2);
        return ((void*)0);
    }
    void *VAR_3 = FUNC_2(VAR_0, VAR_2);
    if (!VAR_3)
        return ((void*)0);
    FUNC_1(VAR_3, VAR_1, VAR_2);
    return VAR_3;
}
