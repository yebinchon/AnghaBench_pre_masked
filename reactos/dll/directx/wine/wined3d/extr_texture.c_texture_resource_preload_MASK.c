
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_texture {int flags; } ;
struct wined3d_resource {int device; } ;
struct wined3d_context {int dummy; } ;


 int VAR_0 ;
 struct wined3d_context* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct wined3d_context*) ;
 struct wined3d_texture* FUNC_2 (struct wined3d_resource*) ;
 int FUNC_3 (struct wined3d_texture*,struct wined3d_context*,int) ;

__attribute__((used)) static void FUNC_4(struct wined3d_resource *VAR_1)
{
    struct wined3d_texture *VAR_2 = FUNC_2(VAR_1);
    struct wined3d_context *VAR_3;

    VAR_3 = FUNC_0(VAR_1->device, ((void*)0), 0);
    FUNC_3(VAR_2, VAR_3, VAR_2->flags & VAR_0);
    FUNC_1(VAR_3);
}
