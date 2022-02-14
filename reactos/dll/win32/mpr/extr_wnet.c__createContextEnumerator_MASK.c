
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WNetEnumerator ;
struct TYPE_4__ {void* dwUsage; void* dwType; void* dwScope; int enumType; } ;
typedef TYPE_1__* PWNetEnumerator ;
typedef void* DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static PWNetEnumerator FUNC_2(DWORD VAR_2, DWORD VAR_3,
 DWORD VAR_4)
{
    PWNetEnumerator VAR_5 = FUNC_1(FUNC_0(),
     VAR_0, sizeof(WNetEnumerator));

    if (VAR_5)
    {
        VAR_5->enumType = VAR_1;
        VAR_5->dwScope = VAR_2;
        VAR_5->dwType = VAR_3;
        VAR_5->dwUsage = VAR_4;
    }
    return VAR_5;
}
