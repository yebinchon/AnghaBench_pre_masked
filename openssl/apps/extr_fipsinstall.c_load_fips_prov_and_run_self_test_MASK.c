
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OSSL_PROVIDER ;


 int FUNC_0 (int ,char*) ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(const char *VAR_1)
{
    int VAR_2 = 0;
    OSSL_PROVIDER *VAR_3 = ((void*)0);

    VAR_3 = FUNC_1(((void*)0), VAR_1);
    if (VAR_3 == ((void*)0)) {
        FUNC_0(VAR_0, "Failed to load FIPS module\n");
        goto end;
    }
    VAR_2 = 1;
end:
    FUNC_2(VAR_3);
    return VAR_2;
}
