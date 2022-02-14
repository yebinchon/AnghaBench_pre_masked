
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,size_t) ;
 size_t VAR_2 ;
 int FUNC_1 (char*,size_t,int) ;
 int FUNC_2 (scalar_t__,size_t) ;
 size_t VAR_3 ;

void FUNC_3(size_t VAR_4) {
    VAR_3 = VAR_4;
    int VAR_5;




    if(VAR_1 && VAR_2 < VAR_3 && VAR_3 > 0) {
        VAR_5 = FUNC_2(VAR_1, VAR_3);
        if(VAR_5 != 0)
            FUNC_1("pthread_attr_setstacksize() to %zu bytes, failed with code %d.", VAR_3, VAR_5);
        else
            FUNC_0(VAR_0, "Successfully set pthread stacksize to %zu bytes", VAR_3);
    }
}
