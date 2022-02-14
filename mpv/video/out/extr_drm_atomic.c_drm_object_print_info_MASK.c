
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_log {int dummy; } ;
struct drm_object {TYPE_2__* props; TYPE_1__** props_info; int type; int id; } ;
struct TYPE_4__ {int count_props; scalar_t__* prop_values; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (struct mp_log*,char*,int ,long long,...) ;

void FUNC_1(struct mp_log *VAR_0, struct drm_object *VAR_1)
{
    FUNC_0(VAR_0, "Object ID = %d (type = %x) has %d properties\n",
           VAR_1->id, VAR_1->type, VAR_1->props->count_props);

    for (int VAR_2 = 0; VAR_2 < VAR_1->props->count_props; VAR_2++)
        FUNC_0(VAR_0, "    Property '%s' = %lld\n", VAR_1->props_info[VAR_2]->name,
               (long long)VAR_1->props->prop_values[VAR_2]);
}
