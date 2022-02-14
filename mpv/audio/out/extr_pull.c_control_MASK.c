
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao {TYPE_1__* driver; } ;
typedef enum aocontrol { ____Placeholder_aocontrol } aocontrol ;
struct TYPE_2__ {int (* control ) (struct ao*,int,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ao*,int,void*) ;

__attribute__((used)) static int FUNC_1(struct ao *VAR_1, enum aocontrol VAR_2, void *VAR_3)
{
    if (VAR_1->driver->control)
        return VAR_1->driver->control(VAR_1, VAR_2, VAR_3);
    return VAR_0;
}
