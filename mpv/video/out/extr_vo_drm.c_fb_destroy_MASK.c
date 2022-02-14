
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct framebuffer {scalar_t__ handle; scalar_t__ fb; int size; scalar_t__ map; } ;
struct drm_mode_destroy_dumb {scalar_t__ handle; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,struct drm_mode_destroy_dumb*) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_1, struct framebuffer *VAR_2)
{
    if (VAR_2->map) {
        FUNC_2(VAR_2->map, VAR_2->size);
    }
    if (VAR_2->fb) {
        FUNC_1(VAR_1, VAR_2->fb);
    }
    if (VAR_2->handle) {
        struct drm_mode_destroy_dumb VAR_3 = {
            .handle = VAR_2->handle,
        };
        FUNC_0(VAR_1, VAR_0, &VAR_3);
    }
}
