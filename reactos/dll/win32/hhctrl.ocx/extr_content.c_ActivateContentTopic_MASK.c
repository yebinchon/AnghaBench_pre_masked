
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* child; struct TYPE_3__* next; scalar_t__ id; int local; } ;
typedef int LPCWSTR ;
typedef int LPARAM ;
typedef int HWND ;
typedef TYPE_1__ ContentItem ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;

void FUNC_2(HWND VAR_2, LPCWSTR VAR_3, ContentItem *VAR_4)
{
    if (FUNC_1(VAR_4->local, VAR_3) == 0)
    {
        FUNC_0(VAR_2, VAR_1, VAR_0, (LPARAM) VAR_4->id);
        return;
    }

    if (VAR_4->next)
        FUNC_2(VAR_2, VAR_3, VAR_4->next);

    if (VAR_4->child)
        FUNC_2(VAR_2, VAR_3, VAR_4->child);
}
