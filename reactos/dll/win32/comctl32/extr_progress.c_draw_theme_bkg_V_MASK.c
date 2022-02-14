
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int top; int left; } ;
struct TYPE_9__ {scalar_t__ bottom; int right; int left; } ;
struct TYPE_11__ {int hdc; int theme; TYPE_2__ bgRect; TYPE_1__ rect; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ ProgressDrawInfo ;


 int FUNC_0 (int ,int ,int ,int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3 (const ProgressDrawInfo* VAR_1, int VAR_2, int VAR_3)
{
    RECT VAR_4, VAR_5;

    FUNC_2(&VAR_5, VAR_1->rect.left, VAR_1->rect.bottom - VAR_3, VAR_1->rect.right, VAR_1->rect.bottom - VAR_2);
    VAR_4 = VAR_1->bgRect;
    FUNC_1(&VAR_4, -VAR_4.left, -VAR_4.top);

    FUNC_0 (VAR_1->theme, VAR_1->hdc, VAR_0, 0, &VAR_4, &VAR_5);
}
