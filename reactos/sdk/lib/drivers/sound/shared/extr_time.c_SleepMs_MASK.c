
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_3__ {int QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int VAR_1 ;

VOID
FUNC_1(ULONG VAR_2)
{
    LARGE_INTEGER VAR_3;

    VAR_3.QuadPart = VAR_2;
    VAR_3.QuadPart *= -10000;

    FUNC_0(VAR_1, VAR_0, &VAR_3);
}
