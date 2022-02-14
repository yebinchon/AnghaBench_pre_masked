
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_android_state {int * native_window; } ;
struct vo {struct vo_android_state* android; } ;
typedef int ANativeWindow ;



ANativeWindow *FUNC_0(struct vo *VAR_0)
{
    struct vo_android_state *VAR_1 = VAR_0->android;
    return VAR_1->native_window;
}
