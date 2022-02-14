
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct float_rect {float l; float t; float r; float b; } ;
typedef float UINT ;
struct TYPE_3__ {float left; float top; float right; float bottom; } ;
typedef TYPE_1__ RECT ;



__attribute__((used)) static inline void FUNC_0(const RECT *VAR_0, UINT VAR_1, UINT VAR_2, struct float_rect *VAR_3)
{
    VAR_3->l = ((VAR_0->left * 2.0f) / VAR_1) - 1.0f;
    VAR_3->t = ((VAR_0->top * 2.0f) / VAR_2) - 1.0f;
    VAR_3->r = ((VAR_0->right * 2.0f) / VAR_1) - 1.0f;
    VAR_3->b = ((VAR_0->bottom * 2.0f) / VAR_2) - 1.0f;
}
