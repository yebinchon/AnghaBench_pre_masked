
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_texture {unsigned int level_count; } ;
struct TYPE_4__ {scalar_t__ left; scalar_t__ top; unsigned int right; unsigned int bottom; } ;
typedef TYPE_1__ RECT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct wined3d_texture const*,unsigned int) ;
 unsigned int FUNC_1 (struct wined3d_texture const*,unsigned int) ;

__attribute__((used)) static BOOL FUNC_2(const struct wined3d_texture *VAR_2, unsigned int VAR_3,
        const RECT *VAR_4, const RECT *VAR_5)
{
    unsigned int VAR_6, VAR_7, VAR_8;

    VAR_8 = VAR_3 % VAR_2->level_count;
    VAR_6 = FUNC_1(VAR_2, VAR_8);
    VAR_7 = FUNC_0(VAR_2, VAR_8);


    if (VAR_4->left || VAR_4->top || VAR_4->right < VAR_6 || VAR_4->bottom < VAR_7)
        return VAR_0;


    if (VAR_5 && (VAR_5->left > 0 || VAR_5->top > 0
            || VAR_5->right < VAR_6 || VAR_5->bottom < VAR_7))
        return VAR_0;

    return VAR_1;
}
