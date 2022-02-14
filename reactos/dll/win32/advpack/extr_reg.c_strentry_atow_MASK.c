
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {int pszValue; int pszName; } ;
struct TYPE_5__ {int * pszValue; int * pszName; } ;
typedef TYPE_1__ STRENTRYW ;
typedef TYPE_2__ STRENTRYA ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int,int *,int) ;

__attribute__((used)) static void FUNC_3(const STRENTRYA *VAR_1, STRENTRYW *VAR_2)
{
    DWORD VAR_3, VAR_4;

    VAR_3 = FUNC_2(VAR_0, 0, VAR_1->pszName, -1, ((void*)0), 0);
    VAR_4 = FUNC_2(VAR_0, 0, VAR_1->pszValue, -1, ((void*)0), 0);

    VAR_2->pszName = FUNC_1(FUNC_0(), 0, VAR_3 * sizeof(WCHAR));
    VAR_2->pszValue = FUNC_1(FUNC_0(), 0, VAR_4 * sizeof(WCHAR));

    FUNC_2(VAR_0, 0, VAR_1->pszName, -1, VAR_2->pszName, VAR_3);
    FUNC_2(VAR_0, 0, VAR_1->pszValue, -1, VAR_2->pszValue, VAR_4);
}
