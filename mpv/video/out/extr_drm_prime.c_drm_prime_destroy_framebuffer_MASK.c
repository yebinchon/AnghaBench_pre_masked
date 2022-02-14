
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct drm_prime_framebuffer {scalar_t__* gem_handles; scalar_t__ fb_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,scalar_t__*) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct drm_prime_framebuffer*,int ,int) ;

void FUNC_3(struct mp_log *VAR_2, int VAR_3, struct drm_prime_framebuffer *VAR_4)
{
    if (VAR_4->fb_id)
        FUNC_1(VAR_3, VAR_4->fb_id);

    for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        if (VAR_4->gem_handles[VAR_5])
            FUNC_0(VAR_3, VAR_1, &VAR_4->gem_handles[VAR_5]);
    }

    FUNC_2(VAR_4, 0, sizeof(*VAR_4));
}
