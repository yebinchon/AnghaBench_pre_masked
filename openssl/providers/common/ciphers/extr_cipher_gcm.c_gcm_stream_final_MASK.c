
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PROV_GCM_CTX ;


 int FUNC_0 (int *,unsigned char*,size_t*,int *,int ) ;

int FUNC_1(void *VAR_0, unsigned char *VAR_1, size_t *VAR_2,
                     size_t VAR_3)
{
    PROV_GCM_CTX *VAR_4 = (PROV_GCM_CTX *)VAR_0;
    int VAR_5;

    VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_2, ((void*)0), 0);
    if (VAR_5 <= 0)
        return 0;

    *VAR_2 = 0;
    return 1;
}
