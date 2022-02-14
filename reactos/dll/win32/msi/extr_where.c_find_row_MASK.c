
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t row_count; TYPE_1__** reorder; } ;
struct TYPE_4__ {size_t* values; } ;
typedef TYPE_2__ MSIWHEREVIEW ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static inline UINT FUNC_0(MSIWHEREVIEW *VAR_2, UINT VAR_3, UINT *(VAR_4[]))
{
    if (VAR_3 >= VAR_2->row_count)
        return VAR_0;

    *VAR_4 = VAR_2->reorder[VAR_3]->values;

    return VAR_1;
}
