
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WNetEnumerator ;
struct TYPE_8__ {int numProviders; } ;
struct TYPE_6__ {void* handles; } ;
struct TYPE_7__ {TYPE_1__ specific; void* dwUsage; void* dwType; void* dwScope; int enumType; } ;
typedef TYPE_2__* PWNetEnumerator ;
typedef int HANDLE ;
typedef void* DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static PWNetEnumerator FUNC_3(DWORD VAR_3, DWORD VAR_4,
 DWORD VAR_5)
{
    PWNetEnumerator VAR_6 = FUNC_1(FUNC_0(), VAR_0, sizeof(WNetEnumerator));
    if (VAR_6)
    {
        VAR_6->enumType = VAR_1;
        VAR_6->dwScope = VAR_3;
        VAR_6->dwType = VAR_4;
        VAR_6->dwUsage = VAR_5;
        VAR_6->specific.handles = FUNC_1(FUNC_0(), VAR_0, sizeof(HANDLE) * VAR_2->numProviders);
        if (!VAR_6->specific.handles)
        {
            FUNC_2(FUNC_0(), 0, VAR_6);
            VAR_6 = ((void*)0);
        }
    }
    return VAR_6;
}
