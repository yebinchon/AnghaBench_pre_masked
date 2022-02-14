
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iString; scalar_t__ dwData; int fsStyle; int fsState; int iBitmap; int idCommand; } ;
typedef TYPE_1__ TBBUTTON ;
typedef int LPWSTR ;
typedef int LPSTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,int ,int ,int ,int ,void*,void*,char*) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(const TBBUTTON *VAR_0, BOOL VAR_1)
{
    FUNC_0("TBBUTTON: id %d, bitmap=%d, state=%02x, style=%02x, data=%p, stringid=%p (%s)\n", VAR_0->idCommand,
        VAR_0->iBitmap, VAR_0->fsState, VAR_0->fsStyle, (void *)VAR_0->dwData, (void *)VAR_0->iString,
        VAR_0->iString != -1 ? (VAR_1 ? FUNC_2((LPWSTR)VAR_0->iString) : FUNC_1((LPSTR)VAR_0->iString)) : "");
}
