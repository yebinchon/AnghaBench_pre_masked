
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strbuffer_t ;
typedef int json_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int ,void*,size_t) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

char *FUNC_5(const json_t *VAR_1, size_t VAR_2)
{
    strbuffer_t VAR_3;
    char *VAR_4;

    if(FUNC_3(&VAR_3))
        return ((void*)0);

    if(FUNC_0(VAR_1, VAR_0, (void *)&VAR_3, VAR_2))
        VAR_4 = ((void*)0);
    else
        VAR_4 = FUNC_1(FUNC_4(&VAR_3));

    FUNC_2(&VAR_3);
    return VAR_4;
}
