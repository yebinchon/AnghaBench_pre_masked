
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t mdsize; int dsa; } ;
typedef TYPE_1__ PROV_DSA_CTX ;


 int FUNC_0 (int ,unsigned char const*,size_t,unsigned char*,unsigned int*,int ) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, unsigned char *VAR_1, size_t *VAR_2,
                    size_t VAR_3, const unsigned char *VAR_4, size_t VAR_5)
{
    PROV_DSA_CTX *VAR_6 = (PROV_DSA_CTX *)VAR_0;
    int VAR_7;
    unsigned int VAR_8;
    size_t VAR_9 = FUNC_1(VAR_6->dsa);

    if (VAR_1 == ((void*)0)) {
        *VAR_2 = VAR_9;
        return 1;
    }

    if (VAR_3 < (size_t)VAR_9)
        return 0;

    if (VAR_6->mdsize != 0 && VAR_5 != VAR_6->mdsize)
        return 0;

    VAR_7 = FUNC_0(0, VAR_4, VAR_5, VAR_1, &VAR_8, VAR_6->dsa);

    if (VAR_7 <= 0)
        return 0;

    *VAR_2 = VAR_8;
    return 1;
}
