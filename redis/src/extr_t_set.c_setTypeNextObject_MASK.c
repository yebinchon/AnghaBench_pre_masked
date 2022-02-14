
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int setTypeIterator ;
typedef int * sds ;
typedef int int64_t ;




 int * FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int **,int *) ;

sds FUNC_4(setTypeIterator *VAR_0) {
    int64_t VAR_1;
    sds VAR_2;
    int VAR_3;

    VAR_3 = FUNC_3(VAR_0,&VAR_2,&VAR_1);
    switch(VAR_3) {
        case -1: return ((void*)0);
        case 128:
            return FUNC_1(VAR_1);
        case 129:
            return FUNC_0(VAR_2);
        default:
            FUNC_2("Unsupported encoding");
    }
    return ((void*)0);
}
