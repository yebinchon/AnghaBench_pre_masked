
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_resource {int type; int device; } ;


 int FUNC_0 (int ,struct wined3d_resource*,int ) ;
 int FUNC_1 (struct wined3d_resource*) ;
 int FUNC_2 (struct wined3d_resource*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    struct wined3d_resource *VAR_1 = VAR_0;

    FUNC_1(VAR_1);
    FUNC_0(VAR_1->device, VAR_1, VAR_1->type);
    FUNC_2(VAR_1);
}
