
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;
typedef int robj ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (char*,unsigned int) ;
 int * FUNC_1 (long long) ;
 scalar_t__ FUNC_2 (int *,int ,unsigned char**,unsigned int*,long long*) ;

robj *FUNC_3(robj *VAR_1, sds VAR_2) {
    unsigned char *VAR_3;
    unsigned int VAR_4;
    long long VAR_5;

    if (FUNC_2(VAR_1,VAR_2,&VAR_3,&VAR_4,&VAR_5) == VAR_0) return ((void*)0);
    if (VAR_3) return FUNC_0((char*)VAR_3,VAR_4);
    else return FUNC_1(VAR_5);
}
