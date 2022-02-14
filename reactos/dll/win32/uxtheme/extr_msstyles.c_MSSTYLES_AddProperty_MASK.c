
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* properties; scalar_t__ iPartId; scalar_t__ iStateId; } ;
struct TYPE_8__ {int iPrimitiveType; int iPropertyId; struct TYPE_8__* next; int origin; int dwValueLen; int lpValue; } ;
typedef int THEME_PROPERTY ;
typedef TYPE_1__* PTHEME_PROPERTY ;
typedef TYPE_2__* PTHEME_PARTSTATE ;
typedef int LPCWSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static PTHEME_PROPERTY FUNC_3(PTHEME_PARTSTATE VAR_4, int VAR_5, int VAR_6, LPCWSTR VAR_7, DWORD VAR_8, BOOL VAR_9)
{
    PTHEME_PROPERTY VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6);

    if(VAR_10) return VAR_10;

    VAR_10 = FUNC_1(FUNC_0(), 0, sizeof(THEME_PROPERTY));
    VAR_10->iPrimitiveType = VAR_5;
    VAR_10->iPropertyId = VAR_6;
    VAR_10->lpValue = VAR_7;
    VAR_10->dwValueLen = VAR_8;

    if(VAR_4->iStateId)
        VAR_10->origin = VAR_3;
    else if(VAR_4->iPartId)
        VAR_10->origin = VAR_2;
    else if(VAR_9)
        VAR_10->origin = VAR_1;
    else
        VAR_10->origin = VAR_0;

    VAR_10->next = VAR_4->properties;
    VAR_4->properties = VAR_10;
    return VAR_10;
}
