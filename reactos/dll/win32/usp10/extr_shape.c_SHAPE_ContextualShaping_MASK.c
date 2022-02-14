
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_6__ {int (* contextProc ) (int ,int *,TYPE_1__*,int *,int ,int *,int *,int ,int *) ;} ;
struct TYPE_5__ {size_t eScript; } ;
typedef int ScriptCache ;
typedef TYPE_1__ SCRIPT_ANALYSIS ;
typedef int INT ;
typedef int HDC ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,TYPE_1__*,int *,int ,int *,int *,int ,int *) ;

void FUNC_2(HDC VAR_1, ScriptCache *VAR_2, SCRIPT_ANALYSIS *VAR_3, WCHAR* VAR_4, INT VAR_5, WORD* VAR_6, INT* VAR_7, INT VAR_8, WORD *VAR_9)
{
    FUNC_0(VAR_1, VAR_2);

    if (VAR_0[VAR_3->eScript].contextProc)
        VAR_0[VAR_3->eScript].contextProc(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
