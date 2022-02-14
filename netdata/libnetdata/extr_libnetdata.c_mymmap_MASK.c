
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (char const*,size_t,int) ;
 void* FUNC_1 (char const*,size_t,int) ;

void *FUNC_2(const char *VAR_4, size_t VAR_5, int VAR_6, int VAR_7) {
    void *VAR_8 = ((void*)0);

    if (VAR_4 && (VAR_6 & VAR_1 || !VAR_2 || !VAR_7))



        VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_6);

    else



        VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6);

    if(VAR_8 == VAR_0) return ((void*)0);

    VAR_3 = 0;
    return VAR_8;
}
