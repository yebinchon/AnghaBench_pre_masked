
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_3__ {int dateValid; int hwndSelf; } ;
typedef int LRESULT ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ DATETIME_INFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static LRESULT
FUNC_3 (DATETIME_INFO *VAR_4, WPARAM VAR_5, LPARAM VAR_6)
{
    if( FUNC_0(VAR_5) == VAR_1) {
        DWORD VAR_7 = FUNC_2((HWND)VAR_6, VAR_0, 0, 0);
        VAR_4->dateValid = (VAR_7 == VAR_2);
        FUNC_1(VAR_4->hwndSelf, ((void*)0), VAR_3);
    }
    return 0;
}
