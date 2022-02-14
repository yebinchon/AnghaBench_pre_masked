
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int * FUNC_0 (int *,size_t) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(json_t *VAR_0, json_t *VAR_1)
{
    size_t VAR_2, VAR_3;

    VAR_3 = FUNC_1(VAR_0);
    if(VAR_3 != FUNC_1(VAR_1))
        return 0;

    for(VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
    {
        json_t *VAR_4, *VAR_5;

        VAR_4 = FUNC_0(VAR_0, VAR_2);
        VAR_5 = FUNC_0(VAR_1, VAR_2);

        if(!FUNC_2(VAR_4, VAR_5))
            return 0;
    }

    return 1;
}
