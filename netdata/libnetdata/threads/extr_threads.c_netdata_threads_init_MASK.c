
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,size_t) ;
 size_t VAR_2 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,size_t*) ;
 int FUNC_4 (int ) ;

size_t FUNC_5(void) {
    int VAR_3;




    VAR_1 = FUNC_0(1, sizeof(pthread_attr_t));
    VAR_3 = FUNC_4(VAR_1);
    if(VAR_3 != 0)
        FUNC_2("pthread_attr_init() failed with code %d.", VAR_3);

    VAR_3 = FUNC_3(VAR_1, &VAR_2);
    if(VAR_3 != 0)
        FUNC_2("pthread_attr_getstacksize() failed with code %d.", VAR_3);
    else
        FUNC_1(VAR_0, "initial pthread stack size is %zu bytes", VAR_2);

    return VAR_2;
}
