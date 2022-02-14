
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bottom; scalar_t__ right; scalar_t__ top; scalar_t__ left; } ;
typedef TYPE_1__ RECT ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_1(const RECT *VAR_0, const RECT *VAR_1)
{
    return FUNC_0(VAR_0->left - VAR_1->left) <= 1 &&
           FUNC_0(VAR_0->top - VAR_1->top) <= 1 &&
           FUNC_0(VAR_0->right - VAR_1->right) <= 1 &&
           FUNC_0(VAR_0->bottom - VAR_1->bottom) <= 1;
}
