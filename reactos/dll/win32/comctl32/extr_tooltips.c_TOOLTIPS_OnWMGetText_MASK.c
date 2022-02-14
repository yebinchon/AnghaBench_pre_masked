
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int WCHAR ;
struct TYPE_3__ {int szTipText; } ;
typedef TYPE_1__ TOOLTIPS_INFO ;
typedef int LRESULT ;
typedef char* LPWSTR ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static LRESULT
FUNC_3 (const TOOLTIPS_INFO *VAR_0, WPARAM VAR_1, LPWSTR VAR_2)
{
    LRESULT VAR_3;

    if(!VAR_1)
        return 0;

    VAR_3 = FUNC_1(FUNC_2(VAR_0->szTipText)+1, VAR_1);
    FUNC_0(VAR_2, VAR_0->szTipText, VAR_3*sizeof(WCHAR));
    VAR_2[VAR_3-1] = '\0';
    return VAR_3-1;
}
