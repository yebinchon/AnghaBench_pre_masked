
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* group; } ;
struct TYPE_7__ {TYPE_1__* meth; } ;
struct TYPE_6__ {int (* ecdh_compute_key ) (unsigned char**,size_t*,int const*,TYPE_3__ const*) ;} ;
typedef int EC_POINT ;
typedef TYPE_3__ EC_KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (unsigned char**,size_t*,int const*,TYPE_3__ const*) ;

int FUNC_2(unsigned char **VAR_2, size_t *VAR_3,
                          const EC_POINT *VAR_4, const EC_KEY *VAR_5)
{
    if (VAR_5->group->meth->ecdh_compute_key == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    return VAR_5->group->meth->ecdh_compute_key(VAR_2, VAR_3, VAR_4, VAR_5);
}
