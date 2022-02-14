
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* dwExpectedSize; void* dwType; int dwMagic; } ;
typedef void* DWORD ;
typedef TYPE_1__ DD_GETDRIVERINFO2DATA ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,void*) ;

__attribute__((used)) static void FUNC_1(DD_GETDRIVERINFO2DATA* VAR_1, DWORD VAR_2, DWORD VAR_3)
{
    FUNC_0(VAR_1, 0, VAR_3);
    VAR_1->dwMagic = VAR_0;
    VAR_1->dwType = VAR_2;
    VAR_1->dwExpectedSize = VAR_3;
}
