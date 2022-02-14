
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_texture {int dummy; } ;
struct TYPE_3__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (struct wined3d_texture const*,unsigned int) ;
 unsigned int FUNC_2 (struct wined3d_texture const*,unsigned int) ;

__attribute__((used)) static BOOL FUNC_3(const struct wined3d_texture *VAR_2, unsigned int VAR_3, const RECT *VAR_4)
{
    unsigned int VAR_5;

    VAR_5 = FUNC_2(VAR_2, VAR_3);
    if ((VAR_4->left && VAR_4->right) || FUNC_0(VAR_4->right - VAR_4->left) != VAR_5)
        return VAR_0;
    VAR_5 = FUNC_1(VAR_2, VAR_3);
    if ((VAR_4->top && VAR_4->bottom) || FUNC_0(VAR_4->bottom - VAR_4->top) != VAR_5)
        return VAR_0;
    return VAR_1;
}
