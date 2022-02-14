
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int path; } ;
typedef int * LPWSTR ;
typedef int HRESULT ;
typedef TYPE_1__ ASSEMBLY ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;

HRESULT FUNC_3(const ASSEMBLY *VAR_2, LPWSTR *VAR_3)
{
    WCHAR *VAR_4 = FUNC_0((FUNC_2(VAR_2->path) + 1) * sizeof(WCHAR));
    *VAR_3 = VAR_4;
    if (VAR_4)
        FUNC_1(VAR_4, VAR_2->path);
    else
        return VAR_0;

    return VAR_1;
}
