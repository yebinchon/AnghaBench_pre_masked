
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int plane_count; TYPE_1__* planes; int * d3d_surface; } ;
typedef TYPE_2__ d3d_priv ;
struct TYPE_6__ {int texture; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_3(d3d_priv *VAR_0)
{
    FUNC_1(VAR_0);

    if (VAR_0->d3d_surface)
        FUNC_0(VAR_0->d3d_surface);
    VAR_0->d3d_surface = ((void*)0);

    for (int VAR_1 = 0; VAR_1 < VAR_0->plane_count; VAR_1++) {
        FUNC_2(VAR_0, &VAR_0->planes[VAR_1].texture);
    }
}
