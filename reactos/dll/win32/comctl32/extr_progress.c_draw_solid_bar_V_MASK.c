
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bottom; int right; int left; } ;
struct TYPE_5__ {int hbrBar; int hdc; TYPE_1__ rect; } ;
typedef int RECT ;
typedef TYPE_2__ ProgressDrawInfo ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *,int ,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2 (const ProgressDrawInfo* VAR_0, int VAR_1, int VAR_2)
{
    RECT VAR_3;
    FUNC_1(&VAR_3, VAR_0->rect.left, VAR_0->rect.bottom - VAR_2, VAR_0->rect.right, VAR_0->rect.bottom - VAR_1);
    FUNC_0 (VAR_0->hdc, &VAR_3, VAR_0->hbrBar);
}
