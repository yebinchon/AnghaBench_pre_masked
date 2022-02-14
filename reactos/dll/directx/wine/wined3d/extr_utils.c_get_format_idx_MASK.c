
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum wined3d_format_id { ____Placeholder_wined3d_format_id } wined3d_format_id ;
struct TYPE_3__ {int id; int idx; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline int FUNC_1(enum wined3d_format_id VAR_2)
{
    unsigned int VAR_3;

    if (VAR_2 < VAR_0)
        return VAR_2;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); ++VAR_3)
    {
        if (VAR_1[VAR_3].id == VAR_2)
            return VAR_1[VAR_3].idx;
    }

    return -1;
}
