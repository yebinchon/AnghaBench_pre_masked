
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int bottom; int right; int top; int left; } ;
typedef TYPE_1__ RECT ;
typedef int LONG ;







__attribute__((used)) static inline LONG *FUNC_0(RECT *VAR_0, WORD VAR_1)
{
    switch(VAR_1)
    {
    case 131: return &VAR_0->left;
    case 130: return &VAR_0->top;
    case 129: return &VAR_0->right;
    case 128: return &VAR_0->bottom;
    }
    return ((void*)0);
}
