
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int netaddr4 ;
struct TYPE_3__ {size_t count; int * arr; } ;
typedef TYPE_1__ multi_addr4 ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,size_t*) ;

__attribute__((used)) static bool_t FUNC_2(
    XDR *VAR_3,
    multi_addr4 *VAR_4)
{
    netaddr4 VAR_5, *VAR_6;
    uint32_t VAR_7;

    if (!FUNC_1(VAR_3, &VAR_4->count))
        return VAR_0;

    for (VAR_7 = 0; VAR_7 < VAR_4->count; VAR_7++) {

        VAR_6 = VAR_7 < VAR_1 ? &VAR_4->arr[VAR_7] : &VAR_5;

        if (!FUNC_0(VAR_3, VAR_6))
            return VAR_0;
    }
    return VAR_2;
}
