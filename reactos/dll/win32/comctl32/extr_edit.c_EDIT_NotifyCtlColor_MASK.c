
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
typedef int UINT ;
struct TYPE_3__ {int style; scalar_t__ hwndSelf; int bEnableState; } ;
typedef int LPARAM ;
typedef scalar_t__ HDC ;
typedef scalar_t__ HBRUSH ;
typedef TYPE_1__ EDITSTATE ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static HBRUSH FUNC_3(EDITSTATE *VAR_3, HDC VAR_4)
{
    HBRUSH VAR_5;
    UINT VAR_6;

    if ((!VAR_3->bEnableState || (VAR_3->style & VAR_0)))
        VAR_6 = VAR_2;
    else
        VAR_6 = VAR_1;


    VAR_5 = (HBRUSH)FUNC_2(FUNC_1(VAR_3->hwndSelf), VAR_6, (WPARAM)VAR_4, (LPARAM)VAR_3->hwndSelf);
    if (!VAR_5)
        VAR_5 = (HBRUSH)FUNC_0(FUNC_1(VAR_3->hwndSelf), VAR_6, (WPARAM)VAR_4, (LPARAM)VAR_3->hwndSelf);
    return VAR_5;
}
