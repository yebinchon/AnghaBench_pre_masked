
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int rio ;


 size_t FUNC_0 (unsigned char*,size_t,void*,size_t) ;
 int FUNC_1 (int *,void*,size_t,size_t) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (size_t) ;

ssize_t FUNC_4(rio *VAR_0, unsigned char *VAR_1, size_t VAR_2) {
    size_t VAR_3, VAR_4;
    void *VAR_5;


    if (VAR_2 <= 4) return 0;
    VAR_4 = VAR_2-4;
    if ((VAR_5 = FUNC_3(VAR_4+1)) == ((void*)0)) return 0;
    VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_5, VAR_4);
    if (VAR_3 == 0) {
        FUNC_2(VAR_5);
        return 0;
    }
    ssize_t VAR_6 = FUNC_1(VAR_0, VAR_5, VAR_3, VAR_2);
    FUNC_2(VAR_5);
    return VAR_6;
}
