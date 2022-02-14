
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao {TYPE_1__* api; } ;
typedef enum aocontrol { ____Placeholder_aocontrol } aocontrol ;
struct TYPE_2__ {int (* control ) (struct ao*,int,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ao*,int,void*) ;

int FUNC_1(struct ao *VAR_1, enum aocontrol VAR_2, void *VAR_3)
{
    return VAR_1->api->control ? VAR_1->api->control(VAR_1, VAR_2, VAR_3) : VAR_0;
}
