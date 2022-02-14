
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONF ;


 int VAR_0 ;
 char* FUNC_0 (int *,char const*,int ) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int ) ;

int FUNC_3(CONF *VAR_1, const char *VAR_2,
                              const char *VAR_3)
{
    int VAR_4 = 0;

    if (VAR_3 == ((void*)0))
        VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0);

    if (VAR_3 && !FUNC_1(VAR_3)) {
        FUNC_2(VAR_2, VAR_0);
        goto err;
    }
    VAR_4 = 1;
 err:
    return VAR_4;
}
