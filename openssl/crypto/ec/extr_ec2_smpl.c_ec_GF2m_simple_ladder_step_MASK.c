
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_21__ {int b; TYPE_1__* meth; } ;
struct TYPE_20__ {int Y; int X; int Z; } ;
struct TYPE_19__ {int (* field_mul ) (TYPE_3__ const*,int ,int ,int ,int *) ;int (* field_sqr ) (TYPE_3__ const*,int ,int ,int *) ;} ;
typedef TYPE_2__ EC_POINT ;
typedef TYPE_3__ EC_GROUP ;
typedef int BN_CTX ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_3__ const*,int ,int ,int ,int *) ;
 int FUNC_2 (TYPE_3__ const*,int ,int ,int *) ;
 int FUNC_3 (TYPE_3__ const*,int ,int ,int ,int *) ;
 int FUNC_4 (TYPE_3__ const*,int ,int ,int ,int *) ;
 int FUNC_5 (TYPE_3__ const*,int ,int ,int *) ;
 int FUNC_6 (TYPE_3__ const*,int ,int ,int *) ;
 int FUNC_7 (TYPE_3__ const*,int ,int ,int *) ;
 int FUNC_8 (TYPE_3__ const*,int ,int ,int ,int *) ;
 int FUNC_9 (TYPE_3__ const*,int ,int ,int ,int *) ;
 int FUNC_10 (TYPE_3__ const*,int ,int ,int *) ;
 int FUNC_11 (TYPE_3__ const*,int ,int ,int ,int *) ;

__attribute__((used)) static
int FUNC_12(const EC_GROUP *VAR_0,
                               EC_POINT *VAR_1, EC_POINT *VAR_2,
                               EC_POINT *VAR_3, BN_CTX *VAR_4)
{
    if (!VAR_0->meth->field_mul(VAR_0, VAR_1->Y, VAR_1->Z, VAR_2->X, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_2->X, VAR_1->X, VAR_2->Z, VAR_4)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_2->Y, VAR_1->Z, VAR_4)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_1->Z, VAR_1->X, VAR_4)
        || !FUNC_0(VAR_2->Z, VAR_1->Y, VAR_2->X)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_2->Z, VAR_2->Z, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_2->X, VAR_1->Y, VAR_2->X, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_1->Y, VAR_2->Z, VAR_3->X, VAR_4)
        || !FUNC_0(VAR_2->X, VAR_2->X, VAR_1->Y)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_1->Y, VAR_1->Z, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_1->Z, VAR_1->Z, VAR_2->Y, VAR_4)
        || !VAR_0->meth->field_sqr(VAR_0, VAR_2->Y, VAR_2->Y, VAR_4)
        || !VAR_0->meth->field_mul(VAR_0, VAR_2->Y, VAR_2->Y, VAR_0->b, VAR_4)
        || !FUNC_0(VAR_1->X, VAR_1->Y, VAR_2->Y))
        return 0;

    return 1;
}
