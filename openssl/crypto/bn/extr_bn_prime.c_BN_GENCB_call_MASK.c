
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* cb_2 ) (int,int,TYPE_2__*) ;int (* cb_1 ) (int,int,int ) ;} ;
struct TYPE_6__ {int ver; TYPE_1__ cb; int arg; } ;
typedef TYPE_2__ BN_GENCB ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int,TYPE_2__*) ;

int FUNC_2(BN_GENCB *VAR_0, int VAR_1, int VAR_2)
{

    if (!VAR_0)
        return 1;
    switch (VAR_0->ver) {
    case 1:

        if (!VAR_0->cb.cb_1)
            return 1;
        VAR_0->cb.cb_1(VAR_1, VAR_2, VAR_0->arg);
        return 1;
    case 2:

        return VAR_0->cb.cb_2(VAR_1, VAR_2, VAR_0);
    default:
        break;
    }

    return 0;
}
