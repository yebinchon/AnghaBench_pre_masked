
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,size_t) ;
 size_t FUNC_3 (int *) ;

__attribute__((used)) static json_t *FUNC_4(json_t *VAR_0)
{
    json_t *VAR_1;
    size_t VAR_2;

    VAR_1 = FUNC_0();
    if(!VAR_1)
        return ((void*)0);

    for(VAR_2 = 0; VAR_2 < FUNC_3(VAR_0); VAR_2++)
        FUNC_1(VAR_1, FUNC_2(VAR_0, VAR_2));

    return VAR_1;
}
