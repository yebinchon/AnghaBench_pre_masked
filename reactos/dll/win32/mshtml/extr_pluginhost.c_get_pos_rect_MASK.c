
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ left; scalar_t__ right; scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_8__ {TYPE_1__ rect; } ;
struct TYPE_7__ {scalar_t__ right; scalar_t__ bottom; scalar_t__ left; scalar_t__ top; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ PluginHost ;



__attribute__((used)) static void FUNC_0(PluginHost *VAR_0, RECT *VAR_1)
{
    VAR_1->top = 0;
    VAR_1->left = 0;
    VAR_1->bottom = VAR_0->rect.bottom - VAR_0->rect.top;
    VAR_1->right = VAR_0->rect.right - VAR_0->rect.left;
}
