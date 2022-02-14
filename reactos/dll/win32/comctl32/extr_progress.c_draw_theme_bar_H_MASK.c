
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ left; int bottom; int top; } ;
struct TYPE_8__ {int hdc; int theme; TYPE_1__ rect; } ;
struct TYPE_7__ {scalar_t__ right; int bottom; int top; scalar_t__ left; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ ProgressDrawInfo ;


 int FUNC_0 (int ,int ,int ,int ,TYPE_2__*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1 (const ProgressDrawInfo* VAR_1, int VAR_2, int VAR_3)
{
    RECT VAR_4;
    VAR_4.left = VAR_1->rect.left + VAR_2;
    VAR_4.top = VAR_1->rect.top;
    VAR_4.bottom = VAR_1->rect.bottom;
    VAR_4.right = VAR_1->rect.left + VAR_3;
    FUNC_0 (VAR_1->theme, VAR_1->hdc, VAR_0, 0, &VAR_4, ((void*)0));
}
