
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_device {struct atifs_private_data* fragment_priv; TYPE_1__* adapter; } ;
struct atifs_private_data {int fragment_shaders; } ;
struct TYPE_2__ {int gl_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct atifs_private_data*) ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct wined3d_device *VAR_1)
{
    struct atifs_private_data *VAR_2 = VAR_1->fragment_priv;

    FUNC_1(&VAR_2->fragment_shaders, VAR_0, &VAR_1->adapter->gl_info);

    FUNC_0(VAR_2);
    VAR_1->fragment_priv = ((void*)0);
}
