
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int * strings; } ;
typedef int * LPWSTR ;
typedef int LPCSTR ;
typedef size_t DWORD ;
typedef TYPE_1__ ASSEMBLY ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int *,int) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static LPWSTR FUNC_2(const ASSEMBLY *VAR_1, DWORD VAR_2)
{
    int VAR_3;
    LPWSTR VAR_4;
    LPCSTR VAR_5 = (LPCSTR)&VAR_1->strings[VAR_2];

    VAR_3 = FUNC_0(VAR_0, 0, VAR_5, -1, ((void*)0), 0);

    if ((VAR_4 = FUNC_1(VAR_3 * sizeof(WCHAR))))
        FUNC_0(VAR_0, 0, VAR_5, -1, VAR_4, VAR_3);

    return VAR_4;
}
