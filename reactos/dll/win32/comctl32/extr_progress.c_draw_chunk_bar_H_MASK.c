
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int left; int bottom; int top; } ;
struct TYPE_8__ {int hbrBk; int hdc; scalar_t__ ledGap; int hbrBar; scalar_t__ ledW; TYPE_1__ rect; } ;
struct TYPE_7__ {int left; int right; int bottom; int top; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ ProgressDrawInfo ;


 int FUNC_0 (int ,TYPE_2__*,int ) ;
 void* FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2 (const ProgressDrawInfo* VAR_0, int VAR_1, int VAR_2)
{
    RECT VAR_3;
    int VAR_4 = VAR_0->rect.left + VAR_2;
    VAR_3.left = VAR_0->rect.left + VAR_1;
    VAR_3.top = VAR_0->rect.top;
    VAR_3.bottom = VAR_0->rect.bottom;
    while (VAR_3.left < VAR_4)
    {
        VAR_3.right = FUNC_1 (VAR_3.left + VAR_0->ledW, VAR_4);
        FUNC_0 (VAR_0->hdc, &VAR_3, VAR_0->hbrBar);
        VAR_3.left = VAR_3.right;
        VAR_3.right = FUNC_1 (VAR_3.left + VAR_0->ledGap, VAR_4);
        FUNC_0 (VAR_0->hdc, &VAR_3, VAR_0->hbrBk);
        VAR_3.left = VAR_3.right;
    }
}
