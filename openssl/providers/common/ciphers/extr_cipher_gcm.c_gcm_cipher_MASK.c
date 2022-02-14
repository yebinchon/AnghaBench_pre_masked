
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PROV_GCM_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,unsigned char*,size_t*,unsigned char const*,size_t) ;

int FUNC_2(void *VAR_2,
               unsigned char *VAR_3, size_t *VAR_4, size_t VAR_5,
               const unsigned char *VAR_6, size_t VAR_7)
{
    PROV_GCM_CTX *VAR_8 = (PROV_GCM_CTX *)VAR_2;

    if (VAR_5 < VAR_7) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    if (FUNC_1(VAR_8, VAR_3, VAR_4, VAR_6, VAR_7) <= 0)
        return 0;

    *VAR_4 = VAR_7;
    return 1;
}
