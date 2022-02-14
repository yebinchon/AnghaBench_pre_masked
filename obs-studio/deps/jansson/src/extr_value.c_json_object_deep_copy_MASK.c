
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 () ;
 void* FUNC_2 (int *) ;
 char* FUNC_3 (void*) ;
 void* FUNC_4 (int *,void*) ;
 int * FUNC_5 (void*) ;
 int FUNC_6 (int *,char const*,int ) ;

__attribute__((used)) static json_t *FUNC_7(const json_t *VAR_0)
{
    json_t *VAR_1;
    void *VAR_2;

    VAR_1 = FUNC_1();
    if(!VAR_1)
        return ((void*)0);



    VAR_2 = FUNC_2((json_t *)VAR_0);
    while(VAR_2) {
        const char *VAR_3;
        const json_t *VAR_4;
        VAR_3 = FUNC_3(VAR_2);
        VAR_4 = FUNC_5(VAR_2);

        FUNC_6(VAR_1, VAR_3, FUNC_0(VAR_4));
        VAR_2 = FUNC_4((json_t *)VAR_0, VAR_2);
    }

    return VAR_1;
}
