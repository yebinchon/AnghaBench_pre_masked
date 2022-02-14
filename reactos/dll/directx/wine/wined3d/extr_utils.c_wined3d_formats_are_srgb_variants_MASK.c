
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum wined3d_format_id { ____Placeholder_wined3d_format_id } wined3d_format_id ;
struct TYPE_3__ {int srgb_format_id; int base_format_id; } ;
typedef int BOOL ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

BOOL FUNC_1(enum wined3d_format_id VAR_2, enum wined3d_format_id VAR_3)
{
    unsigned int VAR_4;

    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); ++VAR_4)
    {
        if (VAR_2 == VAR_1[VAR_4].srgb_format_id)
            return VAR_3 == VAR_1[VAR_4].base_format_id;
        if (VAR_2 == VAR_1[VAR_4].base_format_id)
            return VAR_3 == VAR_1[VAR_4].srgb_format_id;
    }
    return VAR_0;
}
