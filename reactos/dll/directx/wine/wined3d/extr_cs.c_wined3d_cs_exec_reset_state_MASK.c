
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_cs {int fb; int state; TYPE_1__* device; } ;
struct wined3d_adapter {int d3d_info; int gl_info; } ;
struct TYPE_2__ {struct wined3d_adapter* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int *,int) ;

__attribute__((used)) static void FUNC_3(struct wined3d_cs *VAR_2, const void *VAR_3)
{
    struct wined3d_adapter *VAR_4 = VAR_2->device->adapter;

    FUNC_1(&VAR_2->state);
    FUNC_0(&VAR_2->state, 0, sizeof(VAR_2->state));
    FUNC_2(&VAR_2->state, &VAR_2->fb, &VAR_4->gl_info, &VAR_4->d3d_info,
            VAR_1 | VAR_0);
}
