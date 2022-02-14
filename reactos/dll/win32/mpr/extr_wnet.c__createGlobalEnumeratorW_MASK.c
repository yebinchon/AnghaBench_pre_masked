
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WNetEnumerator ;
struct TYPE_5__ {int net; } ;
struct TYPE_6__ {TYPE_1__ specific; void* dwUsage; void* dwType; void* dwScope; int enumType; } ;
typedef TYPE_2__* PWNetEnumerator ;
typedef int LPNETRESOURCEW ;
typedef void* DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static PWNetEnumerator FUNC_3(DWORD VAR_2, DWORD VAR_3,
 DWORD VAR_4, LPNETRESOURCEW VAR_5)
{
    PWNetEnumerator VAR_6 = FUNC_1(FUNC_0(),
     VAR_0, sizeof(WNetEnumerator));

    if (VAR_6)
    {
        VAR_6->enumType = VAR_1;
        VAR_6->dwScope = VAR_2;
        VAR_6->dwType = VAR_3;
        VAR_6->dwUsage = VAR_4;
        VAR_6->specific.net = FUNC_2(VAR_5);
    }
    return VAR_6;
}
