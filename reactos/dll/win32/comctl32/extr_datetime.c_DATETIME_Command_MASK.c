
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_4__ {scalar_t__ hwndCheckbut; } ;
typedef int LRESULT ;
typedef scalar_t__ LPARAM ;
typedef scalar_t__ HWND ;
typedef TYPE_1__ DATETIME_INFO ;


 int FUNC_0 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static LRESULT
FUNC_2 (DATETIME_INFO *VAR_0, WPARAM VAR_1, LPARAM VAR_2)
{
    FUNC_1("hwndbutton = %p\n", VAR_0->hwndCheckbut);
    if(VAR_0->hwndCheckbut == (HWND)VAR_2)
        return FUNC_0(VAR_0, VAR_1, VAR_2);
    return 0;
}
