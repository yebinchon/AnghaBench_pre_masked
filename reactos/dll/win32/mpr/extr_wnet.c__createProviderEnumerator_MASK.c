
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WNetEnumerator ;
struct TYPE_6__ {scalar_t__ numProviders; } ;
struct TYPE_5__ {int handle; scalar_t__ dwUsage; scalar_t__ dwType; scalar_t__ dwScope; scalar_t__ providerIndex; int enumType; } ;
typedef TYPE_1__* PWNetEnumerator ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static PWNetEnumerator FUNC_2(DWORD VAR_3, DWORD VAR_4,
 DWORD VAR_5, DWORD VAR_6, HANDLE VAR_7)
{
    PWNetEnumerator VAR_8;

    if (!VAR_2 || VAR_6 >= VAR_2->numProviders)
        VAR_8 = ((void*)0);
    else
    {
        VAR_8 = FUNC_1(FUNC_0(), VAR_0, sizeof(WNetEnumerator));
        if (VAR_8)
        {
            VAR_8->enumType = VAR_1;
            VAR_8->providerIndex = VAR_6;
            VAR_8->dwScope = VAR_3;
            VAR_8->dwType = VAR_4;
            VAR_8->dwUsage = VAR_5;
            VAR_8->handle = VAR_7;
        }
    }
    return VAR_8;
}
