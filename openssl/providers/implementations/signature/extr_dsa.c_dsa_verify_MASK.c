
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t mdsize; int dsa; } ;
typedef TYPE_1__ PROV_DSA_CTX ;


 int FUNC_0 (int ,unsigned char const*,size_t,unsigned char const*,size_t,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const unsigned char *VAR_1, size_t VAR_2,
                      const unsigned char *VAR_3, size_t VAR_4)
{
    PROV_DSA_CTX *VAR_5 = (PROV_DSA_CTX *)VAR_0;

    if (VAR_5->mdsize != 0 && VAR_4 != VAR_5->mdsize)
        return 0;

    return FUNC_0(0, VAR_3, VAR_4, VAR_1, VAR_2, VAR_5->dsa);
}
