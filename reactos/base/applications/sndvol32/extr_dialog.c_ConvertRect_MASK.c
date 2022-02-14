
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_3__ {void* bottom; void* top; void* right; void* left; } ;
typedef TYPE_1__* LPRECT ;


 void* FUNC_0 (void*,int ,int) ;

VOID
FUNC_1(LPRECT VAR_0, UINT VAR_1, UINT VAR_2)
{
    VAR_0->left = FUNC_0(VAR_0->left, VAR_1, 4);
    VAR_0->right = FUNC_0(VAR_0->right, VAR_1, 4);
    VAR_0->top = FUNC_0(VAR_0->top, VAR_2, 8);
    VAR_0->bottom = FUNC_0(VAR_0->bottom, VAR_2, 8);
}
