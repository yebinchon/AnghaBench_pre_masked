
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_light_info {int glIndex; } ;
struct wined3d_device {TYPE_1__* adapter; } ;
struct wined3d_cs_set_light_enable {scalar_t__ enable; int idx; } ;
struct wined3d_cs {int state; struct wined3d_device* device; } ;
struct TYPE_2__ {int d3d_info; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct wined3d_device*,int ) ;
 int FUNC_3 (int *,int *,struct wined3d_light_info*,scalar_t__) ;
 struct wined3d_light_info* FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct wined3d_cs *VAR_1, const void *VAR_2)
{
    const struct wined3d_cs_set_light_enable *VAR_3 = VAR_2;
    struct wined3d_device *VAR_4 = VAR_1->device;
    struct wined3d_light_info *VAR_5;
    int VAR_6;

    if (!(VAR_5 = FUNC_4(&VAR_1->state, VAR_3->idx)))
    {
        FUNC_0("Light doesn't exist.\n");
        return;
    }

    VAR_6 = VAR_5->glIndex;
    FUNC_3(&VAR_1->state, &VAR_4->adapter->d3d_info, VAR_5, VAR_3->enable);
    if (VAR_5->glIndex != VAR_6)
    {
        FUNC_2(VAR_4, VAR_0);
        FUNC_2(VAR_4, FUNC_1(VAR_3->enable ? VAR_5->glIndex : VAR_6));
    }
}
