
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int bool_t ;
struct TYPE_6__ {int count; int* arr; } ;
typedef TYPE_1__ bitmap4 ;
struct TYPE_7__ {scalar_t__ x_op; } ;
typedef TYPE_2__ XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_2__*,int*) ;

bool_t FUNC_2(
    XDR *VAR_4,
    bitmap4 *VAR_5)
{
    uint32_t VAR_6;

    if (VAR_4->x_op == VAR_3) {
        if (VAR_5->count > 3) {
            FUNC_0("encode_bitmap4: count (%d) must be <= 3\n",
                VAR_5->count);
            return VAR_0;
        }
        if (!FUNC_1(VAR_4, &VAR_5->count))
            return VAR_0;

        for (VAR_6 = 0; VAR_6 < VAR_5->count; VAR_6++)
            if (!FUNC_1(VAR_4, &VAR_5->arr[VAR_6]))
                return VAR_0;

    } else if (VAR_4->x_op == VAR_2) {
        if (!FUNC_1(VAR_4, &VAR_5->count))
            return VAR_0;
        if (VAR_5->count > 3) {
            FUNC_0("decode_bitmap4: count (%d) must be <= 3\n",
                VAR_5->count);
            return VAR_0;
        }

        for (VAR_6 = 0; VAR_6 < VAR_5->count; VAR_6++)
            if (!FUNC_1(VAR_4, &VAR_5->arr[VAR_6]))
                return VAR_0;
    } else
        return VAR_0;

    return VAR_1;
}
