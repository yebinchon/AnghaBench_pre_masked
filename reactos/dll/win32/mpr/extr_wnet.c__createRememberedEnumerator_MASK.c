
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WNetEnumerator ;
struct TYPE_6__ {int registry; } ;
struct TYPE_7__ {TYPE_1__ remembered; } ;
struct TYPE_8__ {TYPE_2__ specific; void* dwType; void* dwScope; int enumType; } ;
typedef TYPE_3__* PWNetEnumerator ;
typedef int HKEY ;
typedef void* DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static PWNetEnumerator FUNC_2(DWORD VAR_2, DWORD VAR_3,
 HKEY VAR_4)
{
    PWNetEnumerator VAR_5 = FUNC_1(FUNC_0(), VAR_0, sizeof(WNetEnumerator));
    if (VAR_5)
    {
        VAR_5->enumType = VAR_1;
        VAR_5->dwScope = VAR_2;
        VAR_5->dwType = VAR_3;
        VAR_5->specific.remembered.registry = VAR_4;
    }
    return VAR_5;
}
