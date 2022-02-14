
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* sds ;


 char VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (void*,int) ;
 int FUNC_4 (char) ;
 char FUNC_5 (size_t) ;
 size_t FUNC_6 (char*) ;
 size_t FUNC_7 (char*) ;
 int FUNC_8 (char*,size_t) ;
 int FUNC_9 (char*,size_t) ;

sds FUNC_10(sds VAR_2) {
    void *VAR_3, *VAR_4;
    char VAR_5, VAR_6 = VAR_2[-1] & VAR_1;
    int VAR_7, VAR_8 = FUNC_4(VAR_6);
    size_t VAR_9 = FUNC_7(VAR_2);
    size_t VAR_10 = FUNC_6(VAR_2);
    VAR_3 = (char*)VAR_2-VAR_8;


    if (VAR_10 == 0) return VAR_2;



    VAR_5 = FUNC_5(VAR_9);
    VAR_7 = FUNC_4(VAR_5);





    if (VAR_6==VAR_5 || VAR_5 > VAR_0) {
        VAR_4 = FUNC_3(VAR_3, VAR_8+VAR_9+1);
        if (VAR_4 == ((void*)0)) return ((void*)0);
        VAR_2 = (char*)VAR_4+VAR_8;
    } else {
        VAR_4 = FUNC_2(VAR_7+VAR_9+1);
        if (VAR_4 == ((void*)0)) return ((void*)0);
        FUNC_0((char*)VAR_4+VAR_7, VAR_2, VAR_9+1);
        FUNC_1(VAR_3);
        VAR_2 = (char*)VAR_4+VAR_7;
        VAR_2[-1] = VAR_5;
        FUNC_9(VAR_2, VAR_9);
    }
    FUNC_8(VAR_2, VAR_9);
    return VAR_2;
}
