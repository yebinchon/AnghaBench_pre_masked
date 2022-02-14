
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_3__ {void* dwHighDateTime; void* dwLowDateTime; } ;
typedef TYPE_1__* LPFILETIME ;
typedef int LONGLONG ;
typedef void* DWORD ;


 int FUNC_0 (int ,int) ;

void FUNC_1(time_t VAR_0, LPFILETIME VAR_1)
{



    LONGLONG VAR_2;
    VAR_2 = FUNC_0(VAR_0, 10000000) + 116444736000000000;
    VAR_1->dwLowDateTime = (DWORD)VAR_2;

    VAR_1->dwHighDateTime = (DWORD)(VAR_2 >> 32);
}
