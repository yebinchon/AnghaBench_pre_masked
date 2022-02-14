
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bDropdownEnabled; int hwndSelf; } ;
typedef int PAINTSTRUCT ;
typedef int LRESULT ;
typedef int HDC ;
typedef TYPE_1__ DATETIME_INFO ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static LRESULT
FUNC_3 (DATETIME_INFO *VAR_1, HDC VAR_2)
{
    if (!VAR_2) {
 PAINTSTRUCT VAR_3;
        VAR_2 = FUNC_0 (VAR_1->hwndSelf, &VAR_3);
        FUNC_1 (VAR_1, VAR_2);
        FUNC_2 (VAR_1->hwndSelf, &VAR_3);
    } else {
        FUNC_1 (VAR_1, VAR_2);
    }


    VAR_1->bDropdownEnabled = VAR_0;

    return 0;
}
