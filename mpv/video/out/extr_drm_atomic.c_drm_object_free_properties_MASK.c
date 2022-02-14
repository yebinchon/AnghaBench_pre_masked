
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_object {TYPE_1__* props; int ** props_info; } ;
struct TYPE_2__ {int count_props; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;

void FUNC_3(struct drm_object *VAR_0)
{
    if (VAR_0->props) {
        for (int VAR_1 = 0; VAR_1 < VAR_0->props->count_props; VAR_1++) {
            if (VAR_0->props_info[VAR_1]) {
                FUNC_1(VAR_0->props_info[VAR_1]);
                VAR_0->props_info[VAR_1] = ((void*)0);
            }
        }

        FUNC_2(VAR_0->props_info);
        VAR_0->props_info = ((void*)0);

        FUNC_0(VAR_0->props);
        VAR_0->props = ((void*)0);
    }
}
