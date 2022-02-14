
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int h; } ;
typedef TYPE_1__ widget ;


 scalar_t__ FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;

int FUNC_2 ( const widget *VAR_0 )
{
    int VAR_1 = VAR_0->h;
    VAR_1 -= FUNC_1 ( VAR_0 );
    VAR_1 -= FUNC_0 ( VAR_0 );
    return VAR_1;
}
