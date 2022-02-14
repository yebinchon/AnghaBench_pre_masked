
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_box {int back; int bottom; int right; int front; int top; int left; } ;


 char const* FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;

const char *FUNC_1(const struct wined3d_box *VAR_0)
{
    if (!VAR_0)
        return "(null)";
    return FUNC_0("(%u, %u, %u)-(%u, %u, %u)",
            VAR_0->left, VAR_0->top, VAR_0->front,
            VAR_0->right, VAR_0->bottom, VAR_0->back);
}
