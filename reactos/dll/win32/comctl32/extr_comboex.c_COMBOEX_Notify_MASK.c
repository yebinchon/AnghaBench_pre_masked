
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hwndNotify; scalar_t__ NtfUnicode; int hwndSelf; } ;
struct TYPE_5__ {int code; int hwndFrom; int idFrom; } ;
typedef TYPE_1__ NMHDR ;
typedef int LPARAM ;
typedef int INT ;
typedef TYPE_2__ COMBOEX_INFO ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static INT FUNC_3 (const COMBOEX_INFO *VAR_1, INT VAR_2, NMHDR *VAR_3)
{
    VAR_3->idFrom = FUNC_0 (VAR_1->hwndSelf);
    VAR_3->hwndFrom = VAR_1->hwndSelf;
    VAR_3->code = VAR_2;
    if (VAR_1->NtfUnicode)
 return FUNC_2 (VAR_1->hwndNotify, VAR_0, 0, (LPARAM)VAR_3);
    else
 return FUNC_1 (VAR_1->hwndNotify, VAR_0, 0, (LPARAM)VAR_3);
}
