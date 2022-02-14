
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* group; } ;
struct TYPE_7__ {TYPE_1__* meth; } ;
struct TYPE_6__ {int (* oct2priv ) (TYPE_3__*,unsigned char const*,size_t) ;} ;
typedef TYPE_3__ EC_KEY ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,unsigned char const*,size_t) ;

int FUNC_2(EC_KEY *VAR_2, const unsigned char *VAR_3, size_t VAR_4)
{
    if (VAR_2->group == ((void*)0) || VAR_2->group->meth == ((void*)0))
        return 0;
    if (VAR_2->group->meth->oct2priv == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    return VAR_2->group->meth->oct2priv(VAR_2, VAR_3, VAR_4);
}
