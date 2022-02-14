
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int curve_name; TYPE_1__* meth; } ;
struct TYPE_10__ {TYPE_1__* meth; int curve_name; } ;
struct TYPE_9__ {int (* point_init ) (TYPE_2__*) ;} ;
typedef TYPE_2__ EC_POINT ;
typedef TYPE_3__ EC_GROUP ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;

EC_POINT *FUNC_4(const EC_GROUP *VAR_4)
{
    EC_POINT *VAR_5;

    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_2);
        return ((void*)0);
    }
    if (VAR_4->meth->point_init == ((void*)0)) {
        FUNC_0(VAR_0, VAR_3);
        return ((void*)0);
    }

    VAR_5 = FUNC_2(sizeof(*VAR_5));
    if (VAR_5 == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return ((void*)0);
    }

    VAR_5->meth = VAR_4->meth;
    VAR_5->curve_name = VAR_4->curve_name;

    if (!VAR_5->meth->point_init(VAR_5)) {
        FUNC_1(VAR_5);
        return ((void*)0);
    }

    return VAR_5;
}
