
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* meth; } ;
struct TYPE_6__ {int (* dsa_paramgen ) (TYPE_2__*,int,unsigned char const*,int,int*,unsigned long*,int *) ;} ;
typedef int EVP_MD ;
typedef TYPE_2__ DSA ;
typedef int BN_GENCB ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int,size_t,int const*,unsigned char const*,int,int *,int*,unsigned long*,int *) ;
 int FUNC_4 (TYPE_2__*,int,unsigned char const*,int,int*,unsigned long*,int *) ;

int FUNC_5(DSA *VAR_0, int VAR_1,
                               const unsigned char *VAR_2, int VAR_3,
                               int *VAR_4, unsigned long *VAR_5,
                               BN_GENCB *VAR_6)
{
    if (VAR_0->meth->dsa_paramgen)
        return VAR_0->meth->dsa_paramgen(VAR_0, VAR_1, VAR_2, VAR_3,
                                       VAR_4, VAR_5, VAR_6);
    else {
        const EVP_MD *VAR_7 = VAR_1 >= 2048 ? FUNC_2() : FUNC_1();
        size_t VAR_8 = FUNC_0(VAR_7) * 8;

        return FUNC_3(VAR_0, VAR_1, VAR_8, VAR_7,
                                    VAR_2, VAR_3, ((void*)0), VAR_4,
                                    VAR_5, VAR_6);
    }
}
