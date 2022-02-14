
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tm ;
typedef char WCHAR ;
struct TYPE_10__ {scalar_t__ abcA; scalar_t__ abcB; scalar_t__ abcC; } ;
struct TYPE_9__ {scalar_t__ cx; scalar_t__ cy; } ;
struct TYPE_8__ {scalar_t__ tmHeight; } ;
typedef TYPE_1__ TEXTMETRICW ;
typedef TYPE_2__ SIZE ;
typedef int * SCRIPT_STRING_ANALYSIS ;
typedef scalar_t__ HRESULT ;
typedef int HDC ;
typedef TYPE_3__ ABC ;


 int FUNC_0 (int ,char const,char const,TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,char const*,int,int,int,int ,int ,int *,int *,int *,int *,int *,int **) ;
 scalar_t__ FUNC_3 (int **) ;
 TYPE_2__* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(HDC VAR_2)
{
    static const WCHAR VAR_3[] = {'A',0};
    SCRIPT_STRING_ANALYSIS VAR_4;
    const SIZE *VAR_5;
    TEXTMETRICW VAR_6;
    HRESULT VAR_7;
    ABC VAR_8;

    VAR_7 = FUNC_2(VAR_2, VAR_3, 1, 16, -1, VAR_0, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_4);
    FUNC_7(VAR_7 == VAR_1, "ScriptStringAnalyse failed, hr %#x.\n", VAR_7);

    VAR_5 = FUNC_4(((void*)0));
    FUNC_7(VAR_5 == ((void*)0) || FUNC_5(VAR_5 != ((void*)0)) , "Unexpected size pointer.\n");

    FUNC_0(VAR_2, VAR_3[0], VAR_3[0], &VAR_8);

    FUNC_6(&VAR_6, 0, sizeof(VAR_6));
    FUNC_1(VAR_2, &VAR_6);
    FUNC_7(VAR_6.tmHeight > 0, "Unexpected tmHeight.\n");

    VAR_5 = FUNC_4(VAR_4);
    FUNC_7(VAR_5 != ((void*)0), "Unexpected size pointer.\n");
    FUNC_7(VAR_5->cx == VAR_8.abcA + VAR_8.abcB + VAR_8.abcC, "Unexpected cx size %d.\n", VAR_5->cx);
    FUNC_7(VAR_5->cy == VAR_6.tmHeight, "Unexpected cy size %d.\n", VAR_5->cy);

    VAR_7 = FUNC_3(&VAR_4);
    FUNC_7(VAR_7 == VAR_1, "Failed to free ssa, hr %#x.\n", VAR_7);
}
