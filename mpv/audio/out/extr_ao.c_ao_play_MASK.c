
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ao {TYPE_1__* api; } ;
struct TYPE_2__ {int (* play ) (struct ao*,void**,int,int) ;} ;


 int FUNC_0 (struct ao*,void**,int,int) ;

int FUNC_1(struct ao *VAR_0, void **VAR_1, int VAR_2, int VAR_3)
{
    return VAR_0->api->play(VAR_0, VAR_1, VAR_2, VAR_3);
}
