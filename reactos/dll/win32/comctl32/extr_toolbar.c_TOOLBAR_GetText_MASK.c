
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int iString; } ;
struct TYPE_5__ {int nNumStrings; int ** strings; } ;
typedef TYPE_1__ TOOLBAR_INFO ;
typedef TYPE_2__ TBUTTON_INFO ;
typedef int * LPWSTR ;


 int FUNC_0 (int) ;

__attribute__((used)) static LPWSTR
FUNC_1(const TOOLBAR_INFO *VAR_0, const TBUTTON_INFO *VAR_1)
{
    LPWSTR VAR_2 = ((void*)0);


    if (!FUNC_0(VAR_1->iString) && (VAR_1->iString != -1))
        VAR_2 = (LPWSTR)VAR_1->iString;
    else if ((VAR_1->iString >= 0) && (VAR_1->iString < VAR_0->nNumStrings))
        VAR_2 = VAR_0->strings[VAR_1->iString];

    return VAR_2;
}
