
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* meth; } ;
struct TYPE_6__ {int (* rsa_verify ) (int,unsigned char const*,unsigned int,unsigned char const*,unsigned int,TYPE_2__*) ;} ;
typedef TYPE_2__ RSA ;


 int FUNC_0 (int,unsigned char const*,unsigned int,int *,int *,unsigned char const*,unsigned int,TYPE_2__*) ;
 int FUNC_1 (int,unsigned char const*,unsigned int,unsigned char const*,unsigned int,TYPE_2__*) ;

int FUNC_2(int VAR_0, const unsigned char *VAR_1, unsigned int VAR_2,
               const unsigned char *VAR_3, unsigned int VAR_4, RSA *VAR_5)
{

    if (VAR_5->meth->rsa_verify) {
        return VAR_5->meth->rsa_verify(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    }

    return FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0), ((void*)0), VAR_3, VAR_4, VAR_5);
}
