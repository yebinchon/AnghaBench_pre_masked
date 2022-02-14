
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;


 int FUNC_0 (TYPE_1__*) ;

ULONG
FUNC_1()
{
    LARGE_INTEGER VAR_0;

    FUNC_0(&VAR_0);

    VAR_0.QuadPart /= 10000;

    return (ULONG) VAR_0.QuadPart;
}
