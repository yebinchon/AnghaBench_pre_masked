
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mdctx; } ;
typedef TYPE_1__ PROV_DSA_CTX ;


 int FUNC_0 (int *,unsigned char*,unsigned int*) ;
 int VAR_0 ;
 int FUNC_1 (void*,unsigned char*,size_t*,size_t,unsigned char*,size_t) ;

int FUNC_2(void *VAR_1, unsigned char *VAR_2, size_t *VAR_3,
                          size_t VAR_4)
{
    PROV_DSA_CTX *VAR_5 = (PROV_DSA_CTX *)VAR_1;
    unsigned char VAR_6[VAR_0];
    unsigned int VAR_7 = 0;

    if (VAR_5 == ((void*)0) || VAR_5->mdctx == ((void*)0))
        return 0;





    if (VAR_2 != ((void*)0)) {





        if (!FUNC_0(VAR_5->mdctx, VAR_6, &VAR_7))
            return 0;
    }

    return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6, (size_t)VAR_7);
}
