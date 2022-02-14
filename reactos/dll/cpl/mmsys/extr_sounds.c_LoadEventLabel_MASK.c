
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int szDesc ;
typedef int szData ;
struct TYPE_6__ {TYPE_1__* pLabelMap; } ;
struct TYPE_5__ {struct TYPE_5__* Next; void* szIcon; void* szDesc; void* szName; } ;
typedef int TCHAR ;
typedef TYPE_1__* PLABEL_MAP ;
typedef TYPE_2__* PGLOBAL_DATA ;
typedef int LPBYTE ;
typedef int LABEL_MAP ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int *,int ,int*) ;
 int VAR_5 ;
 int * FUNC_5 (char*) ;
 void* FUNC_6 (int *) ;

BOOL
FUNC_7(PGLOBAL_DATA VAR_6, HKEY VAR_7, TCHAR * VAR_8)
{
    HKEY VAR_9;
    DWORD VAR_10;
    TCHAR VAR_11[VAR_4];
    TCHAR VAR_12[VAR_4];
    PLABEL_MAP VAR_13;

    if (FUNC_3(VAR_7,
                     VAR_8,
                     0,
                     VAR_3,
                     &VAR_9) != VAR_0)
    {
        return VAR_1;
    }

    VAR_10 = sizeof(VAR_11);
    if (FUNC_4(VAR_9,
                      ((void*)0),
                      ((void*)0),
                      ((void*)0),
                      (LPBYTE)VAR_11,
                      &VAR_10) != VAR_0)
    {
        FUNC_2(VAR_9);
        return VAR_1;
    }

    VAR_10 = sizeof(VAR_12);
    if (FUNC_4(VAR_9,
                        FUNC_5("DispFileName"),
                        ((void*)0),
                        ((void*)0),
                        (LPBYTE)VAR_12,
                        &VAR_10) != VAR_0)
    {
        FUNC_2(VAR_9);
        return VAR_1;
    }

    VAR_13 = FUNC_1(FUNC_0(), VAR_2, sizeof(LABEL_MAP));
    if (!VAR_13)
    {
        return VAR_1;
    }

    VAR_13->szName = FUNC_6(VAR_8);
    VAR_13->szDesc = FUNC_6(VAR_11);
    VAR_13->szIcon = FUNC_6(VAR_12);

    if (VAR_6->pLabelMap)
    {
        VAR_13->Next = VAR_6->pLabelMap;
        VAR_6->pLabelMap = VAR_13;
    }
    else
    {
        VAR_6->pLabelMap = VAR_13;
        VAR_6->pLabelMap->Next = ((void*)0);
    }
    return VAR_5;
}
