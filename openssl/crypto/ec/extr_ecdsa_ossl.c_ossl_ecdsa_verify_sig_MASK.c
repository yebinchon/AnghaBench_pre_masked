
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* group; } ;
struct TYPE_7__ {TYPE_1__* meth; } ;
struct TYPE_6__ {int (* ecdsa_verify_sig ) (unsigned char const*,int,int const*,TYPE_3__*) ;} ;
typedef TYPE_3__ EC_KEY ;
typedef int ECDSA_SIG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char const*,int,int const*,TYPE_3__*) ;

int FUNC_2(const unsigned char *VAR_2, int VAR_3,
                          const ECDSA_SIG *VAR_4, EC_KEY *VAR_5)
{
    if (VAR_5->group->meth->ecdsa_verify_sig == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    return VAR_5->group->meth->ecdsa_verify_sig(VAR_2, VAR_3, VAR_4, VAR_5);
}
