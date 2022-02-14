
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int const*,int *,size_t) ;

int FUNC_3(const json_t *VAR_0, const char *VAR_1, size_t VAR_2)
{
    int VAR_3;

    FILE *VAR_4 = FUNC_1(VAR_1, "w");
    if(!VAR_4)
        return -1;

    VAR_3 = FUNC_2(VAR_0, VAR_4, VAR_2);

    FUNC_0(VAR_4);
    return VAR_3;
}
