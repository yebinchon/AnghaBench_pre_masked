
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint32_t ;


 int VAR_0 ;
 void* FUNC_0 (size_t,int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (void*,void*,size_t) ;

void *FUNC_3(void *VAR_1, size_t VAR_2) {
    VAR_2 = (VAR_2 + 3) & ~3;
    uint32_t *VAR_3 = FUNC_0(VAR_2, VAR_0);
    if (VAR_3 == ((void*)0)) {
        FUNC_1(VAR_2);
    }
    FUNC_2(VAR_3, VAR_1, VAR_2);
    return VAR_3;
}
