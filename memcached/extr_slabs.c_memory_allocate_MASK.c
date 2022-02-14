
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 void* FUNC_0 (size_t) ;
 size_t VAR_1 ;
 int * VAR_2 ;
 char* VAR_3 ;
 size_t VAR_4 ;

__attribute__((used)) static void *FUNC_1(size_t VAR_5) {
    void *VAR_6;

    if (VAR_2 == ((void*)0)) {

        VAR_6 = FUNC_0(VAR_5);
    } else {
        VAR_6 = VAR_3;

        if (VAR_5 > VAR_1) {
            return ((void*)0);
        }


        if (VAR_5 % VAR_0) {
            VAR_5 += VAR_0 - (VAR_5 % VAR_0);
        }

        VAR_3 = ((char*)VAR_3) + VAR_5;
        if (VAR_5 < VAR_1) {
            VAR_1 -= VAR_5;
        } else {
            VAR_1 = 0;
        }
    }
    VAR_4 += VAR_5;

    return VAR_6;
}
