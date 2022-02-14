
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONG ;
struct TYPE_3__ {int QuadPart; } ;
typedef int LONGLONG ;
typedef TYPE_1__ LARGE_INTEGER ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

VOID
FUNC_1(ULONG VAR_2)
{
    LARGE_INTEGER VAR_3;
    VAR_3.QuadPart = (LONGLONG)VAR_2*1000*(-10);
    FUNC_0(VAR_0, VAR_1, &VAR_3);
}
