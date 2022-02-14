
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int top; int d; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_2 (int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int) ;

__attribute__((used)) static BN_ULONG *FUNC_6(const BIGNUM *VAR_8, int VAR_9)
{
    BN_ULONG *VAR_10 = ((void*)0);

    if (VAR_9 > (VAR_7 / (4 * VAR_0))) {
        FUNC_1(VAR_3, VAR_4);
        return ((void*)0);
    }
    if (FUNC_0(VAR_8, VAR_2)) {
        FUNC_1(VAR_3, VAR_5);
        return ((void*)0);
    }
    if (FUNC_0(VAR_8, VAR_1))
        VAR_10 = FUNC_2(VAR_9 * sizeof(*VAR_10));
    else
        VAR_10 = FUNC_3(VAR_9 * sizeof(*VAR_10));
    if (VAR_10 == ((void*)0)) {
        FUNC_1(VAR_3, VAR_6);
        return ((void*)0);
    }

    FUNC_4(VAR_8->top <= VAR_9);
    if (VAR_8->top > 0)
        FUNC_5(VAR_10, VAR_8->d, sizeof(*VAR_10) * VAR_8->top);

    return VAR_10;
}
