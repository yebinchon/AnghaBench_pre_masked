
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_gl_info {int dummy; } ;
struct TYPE_2__ {int ffp_vertex_blend_matrices; scalar_t__ ffp_blend_stages; } ;
struct wined3d_d3d_info {TYPE_1__ limits; } ;
struct StateEntry {void* apply; scalar_t__ representative; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__,int ) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 void* VAR_3 ;

__attribute__((used)) static void FUNC_3(struct StateEntry *VAR_4, const struct wined3d_gl_info *VAR_5,
        const struct wined3d_d3d_info *VAR_6)
{
    unsigned int VAR_7, VAR_8, VAR_9;

    VAR_7 = FUNC_0(VAR_6->limits.ffp_blend_stages, 0);
    VAR_8 = FUNC_0(VAR_0 - 1, VAR_1);
    for (VAR_9 = VAR_7; VAR_9 <= VAR_8; ++VAR_9)
    {
        VAR_4[VAR_9].representative = 0;
        VAR_4[VAR_9].apply = VAR_3;
    }

    VAR_7 = FUNC_1(VAR_2 + VAR_6->limits.ffp_blend_stages);
    VAR_8 = FUNC_1(VAR_2 + VAR_0 - 1);
    for (VAR_9 = VAR_7; VAR_9 <= VAR_8; ++VAR_9)
    {
        VAR_4[VAR_9].representative = 0;
        VAR_4[VAR_9].apply = VAR_3;
    }

    VAR_7 = FUNC_1(FUNC_2(VAR_6->limits.ffp_vertex_blend_matrices));
    VAR_8 = FUNC_1(FUNC_2(255));
    for (VAR_9 = VAR_7; VAR_9 <= VAR_8; ++VAR_9)
    {
        VAR_4[VAR_9].representative = 0;
        VAR_4[VAR_9].apply = VAR_3;
    }
}
