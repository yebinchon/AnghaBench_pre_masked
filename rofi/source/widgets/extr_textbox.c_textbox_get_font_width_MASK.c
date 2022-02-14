
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int layout; } ;
typedef TYPE_1__ textbox ;
struct TYPE_6__ {int width; int x; } ;
typedef TYPE_2__ PangoRectangle ;


 int FUNC_0 (int ,int *,TYPE_2__*) ;

int FUNC_1 ( const textbox *VAR_0 )
{
    PangoRectangle VAR_1;
    FUNC_0 ( VAR_0->layout, ((void*)0), &VAR_1 );
    return VAR_1.width + VAR_1.x;
}
