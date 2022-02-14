
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwStyle; int date; int hwndCheckbut; } ;
typedef int SYSTEMTIME ;
typedef int DWORD ;
typedef TYPE_1__ DATETIME_INFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static DWORD
FUNC_1 (const DATETIME_INFO *VAR_5, SYSTEMTIME *VAR_6)
{
    if (!VAR_6) return VAR_3;

    if ((VAR_5->dwStyle & VAR_2) &&
        (FUNC_0 (VAR_5->hwndCheckbut, VAR_0, 0, 0) == VAR_1))
        return VAR_3;

    *VAR_6 = VAR_5->date;

    return VAR_4;
}
