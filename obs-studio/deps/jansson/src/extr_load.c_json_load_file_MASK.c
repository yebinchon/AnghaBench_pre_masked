
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;
typedef int json_error_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,...) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int * FUNC_3 (int *,size_t,int *) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int ) ;

json_t *FUNC_6(const char *VAR_1, size_t VAR_2, json_error_t *VAR_3)
{
    json_t *VAR_4;
    FILE *VAR_5;

    FUNC_4(VAR_3, VAR_1);

    if (VAR_1 == ((void*)0)) {
        FUNC_0(VAR_3, ((void*)0), "wrong arguments");
        return ((void*)0);
    }

    VAR_5 = FUNC_2(VAR_1, "rb");
    if(!VAR_5)
    {
        FUNC_0(VAR_3, ((void*)0), "unable to open %s: %s",
                  VAR_1, FUNC_5(VAR_0));
        return ((void*)0);
    }

    VAR_4 = FUNC_3(VAR_5, VAR_2, VAR_3);

    FUNC_1(VAR_5);
    return VAR_4;
}
