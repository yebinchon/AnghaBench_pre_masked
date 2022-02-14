
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* bottom; void* right; void* top; void* left; } ;
typedef TYPE_1__ RECT ;
typedef void* INT ;
typedef scalar_t__ BOOL ;



__attribute__((used)) static inline void FUNC_0(RECT *VAR_0, BOOL VAR_1)
{
    INT VAR_2;
    if(VAR_1)
    {
        VAR_2 = VAR_0->bottom;
        VAR_0->bottom = VAR_0->right;
        VAR_0->right = VAR_0->top;
        VAR_0->top = VAR_0->left;
        VAR_0->left = VAR_2;
    }
    else
    {
        VAR_2 = VAR_0->left;
        VAR_0->left = VAR_0->top;
        VAR_0->top = VAR_0->right;
        VAR_0->right = VAR_0->bottom;
        VAR_0->bottom = VAR_2;
    }
}
