
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int count; int* arr; } ;
typedef TYPE_1__ pnfs_stripe_indices ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int* FUNC_1 (int*,int) ;
 int FUNC_2 (int *,int*) ;

__attribute__((used)) static bool_t FUNC_3(
    XDR *VAR_2,
    pnfs_stripe_indices *VAR_3)
{
    uint32_t VAR_4, VAR_5;

    if (!FUNC_2(VAR_2, &VAR_5))
        return VAR_0;

    if (VAR_5 && VAR_5 != VAR_3->count) {
        uint32_t *VAR_6;
        VAR_6 = FUNC_1(VAR_3->arr, VAR_5 * sizeof(uint32_t));
        if (VAR_6 == ((void*)0))
            return VAR_0;
        VAR_3->arr = VAR_6;
        FUNC_0(VAR_3->arr, VAR_5 * sizeof(uint32_t));
        VAR_3->count = VAR_5;
    }

    for (VAR_4 = 0; VAR_4 < VAR_3->count; VAR_4++) {
        if (!FUNC_2(VAR_2, &VAR_3->arr[VAR_4]))
            return VAR_0;
    }
    return VAR_1;
}
