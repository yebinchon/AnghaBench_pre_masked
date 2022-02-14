
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* MP_STATE_PORT ;


 int FUNC_0 (void**) ;

void FUNC_1(void *VAR_0) {
    void **VAR_1 = &((void**)VAR_0)[-2];
    if (VAR_1[1] != ((void*)0)) {
        ((void**)VAR_1[1])[0] = VAR_1[0];
    }
    if (VAR_1[0] != ((void*)0)) {
        ((void**)VAR_1[0])[1] = VAR_1[1];
    } else {
        MP_STATE_PORT(VAR_2) = VAR_1[1];
    }
    FUNC_0(VAR_1);
}
