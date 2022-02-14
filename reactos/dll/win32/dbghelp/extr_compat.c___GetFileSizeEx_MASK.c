
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int QuadPart; } ;
typedef TYPE_1__* PLARGE_INTEGER ;
typedef scalar_t__ HANDLE ;
typedef int FILE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;

BOOL FUNC_2(HANDLE VAR_2, PLARGE_INTEGER VAR_3)
{
    if (FUNC_0((FILE*)VAR_2, 0, 2) == -1)
        return VAR_0;
    VAR_3->QuadPart = FUNC_1((FILE*)VAR_2);
    return VAR_1;
}
