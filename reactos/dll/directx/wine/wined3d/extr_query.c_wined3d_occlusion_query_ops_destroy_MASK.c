
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_query {int dummy; } ;
struct wined3d_occlusion_query {scalar_t__ context; } ;


 int FUNC_0 (struct wined3d_occlusion_query*) ;
 int FUNC_1 (struct wined3d_occlusion_query*) ;
 struct wined3d_occlusion_query* FUNC_2 (struct wined3d_query*) ;

__attribute__((used)) static void FUNC_3(struct wined3d_query *VAR_0)
{
    struct wined3d_occlusion_query *VAR_1 = FUNC_2(VAR_0);

    if (VAR_1->context)
        FUNC_0(VAR_1);
    FUNC_1(VAR_1);
}
