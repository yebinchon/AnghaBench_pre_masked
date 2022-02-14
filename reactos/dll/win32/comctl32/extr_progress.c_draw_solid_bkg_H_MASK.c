
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bottom; scalar_t__ left; int top; } ;
struct TYPE_5__ {int hbrBk; int hdc; TYPE_1__ rect; } ;
typedef int RECT ;
typedef TYPE_2__ ProgressDrawInfo ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *,scalar_t__,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2 (const ProgressDrawInfo* VAR_0, int VAR_1, int VAR_2)
{
    RECT VAR_3;
    FUNC_1(&VAR_3, VAR_0->rect.left + VAR_1, VAR_0->rect.top, VAR_0->rect.left + VAR_2, VAR_0->rect.bottom);
    FUNC_0 (VAR_0->hdc, &VAR_3, VAR_0->hbrBk);
}
