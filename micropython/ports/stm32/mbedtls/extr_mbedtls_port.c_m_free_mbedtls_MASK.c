
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint ;
typedef void* MP_STATE_PORT ;


 size_t FUNC_0 (scalar_t__*) ;
 int FUNC_1 (void**) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (char*,void**,void*,void*,int,size_t,int) ;

void FUNC_4(void *VAR_0) {
    void **VAR_1 = &((void**)VAR_0)[-2];





    if (VAR_1[1] != ((void*)0)) {
        ((void**)VAR_1[1])[0] = VAR_1[0];
    }
    if (VAR_1[0] != ((void*)0)) {
        ((void**)VAR_1[0])[1] = VAR_1[1];
    } else {
        MP_STATE_PORT(VAR_2) = VAR_1[1];
    }
    FUNC_2(VAR_1);
}
