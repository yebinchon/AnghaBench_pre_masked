
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bottom; int top; scalar_t__ right; int left; } ;
struct TYPE_5__ {TYPE_1__ format_rect; } ;
typedef int * LPINT ;
typedef TYPE_2__ EDITSTATE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(const EDITSTATE *VAR_0, LPINT VAR_1, LPINT VAR_2)
{
 *VAR_1 = FUNC_1(FUNC_0(*VAR_1, VAR_0->format_rect.left), VAR_0->format_rect.right - 1);
 *VAR_2 = FUNC_1(FUNC_0(*VAR_2, VAR_0->format_rect.top), VAR_0->format_rect.bottom - 1);
}
