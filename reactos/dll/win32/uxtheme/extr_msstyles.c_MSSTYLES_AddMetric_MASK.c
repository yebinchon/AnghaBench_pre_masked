
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* metrics; } ;
struct TYPE_8__ {int iPrimitiveType; int iPropertyId; struct TYPE_8__* next; int origin; int dwValueLen; int lpValue; } ;
typedef int THEME_PROPERTY ;
typedef TYPE_1__* PTHEME_PROPERTY ;
typedef TYPE_2__* PTHEME_FILE ;
typedef int LPCWSTR ;
typedef int DWORD ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int,int) ;
 int VAR_0 ;

__attribute__((used)) static PTHEME_PROPERTY FUNC_3(PTHEME_FILE VAR_1, int VAR_2, int VAR_3, LPCWSTR VAR_4, DWORD VAR_5)
{
    PTHEME_PROPERTY VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3);

    if(VAR_6) return VAR_6;

    VAR_6 = FUNC_1(FUNC_0(), 0, sizeof(THEME_PROPERTY));
    VAR_6->iPrimitiveType = VAR_2;
    VAR_6->iPropertyId = VAR_3;
    VAR_6->lpValue = VAR_4;
    VAR_6->dwValueLen = VAR_5;

    VAR_6->origin = VAR_0;

    VAR_6->next = VAR_1->metrics;
    VAR_1->metrics = VAR_6;
    return VAR_6;
}
