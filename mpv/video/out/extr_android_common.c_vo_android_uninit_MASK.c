
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_android_state {scalar_t__ native_window; } ;
struct vo {struct vo_android_state* android; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct vo_android_state*) ;

void FUNC_2(struct vo *VAR_0)
{
    struct vo_android_state *VAR_1 = VAR_0->android;
    if (!VAR_1)
        return;

    if (VAR_1->native_window)
        FUNC_0(VAR_1->native_window);

    FUNC_1(VAR_1);
    VAR_0->android = ((void*)0);
}
