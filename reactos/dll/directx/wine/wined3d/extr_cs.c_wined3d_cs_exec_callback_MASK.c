
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_cs_callback {int object; int (* callback ) (int ) ;} ;
struct wined3d_cs {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct wined3d_cs *VAR_0, const void *VAR_1)
{
    const struct wined3d_cs_callback *VAR_2 = VAR_1;

    VAR_2->callback(VAR_2->object);
}
