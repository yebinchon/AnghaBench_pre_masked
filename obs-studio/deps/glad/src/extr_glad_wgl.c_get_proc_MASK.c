
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int *,char const*) ;
 void* FUNC_1 (int *,char const*) ;
 void* FUNC_2 (char const*) ;
 int * VAR_0 ;

__attribute__((used)) static
void* FUNC_3(const char *VAR_1) {
    void* VAR_2 = ((void*)0);
    if(VAR_0 == ((void*)0)) return ((void*)0);


    if(&FUNC_2 != ((void*)0)) {
        VAR_2 = FUNC_2(VAR_1);
    }

    if(VAR_2 == ((void*)0)) {



        VAR_2 = FUNC_1(VAR_0, VAR_1);

    }

    return VAR_2;
}
