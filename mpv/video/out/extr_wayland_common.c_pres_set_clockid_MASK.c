
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wp_presentation {int dummy; } ;
struct vo_wayland_state {struct wp_presentation* presentation; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(void *VAR_1, struct wp_presentation *VAR_2,
                           uint32_t VAR_3)
{
    struct vo_wayland_state *VAR_4 = VAR_1;

    VAR_4->presentation = VAR_2;
    VAR_3 = VAR_0;
}
