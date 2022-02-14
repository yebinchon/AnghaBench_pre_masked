
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,size_t,int ) ;
 int FUNC_2 (unsigned long*) ;
 unsigned long* FUNC_3 (size_t) ;
 int FUNC_4 (unsigned long*,size_t,int,int) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;

void FUNC_6(size_t VAR_2, int VAR_3) {
    size_t VAR_4 = VAR_2*1024*1024;
    unsigned long *VAR_5 = FUNC_3(VAR_4);

    if (VAR_5 == ((void*)0)) {
        FUNC_1(VAR_1,"Unable to allocate %zu megabytes: %d",
            VAR_2, FUNC_5(VAR_0));
        FUNC_0(1);
    }
    FUNC_4(VAR_5,VAR_4,VAR_3,1);
    FUNC_2(VAR_5);
}
