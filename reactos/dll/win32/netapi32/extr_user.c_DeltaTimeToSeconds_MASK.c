
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int QuadPart; scalar_t__ HighPart; int LowPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;


 int VAR_0 ;

__attribute__((used)) static
ULONG
FUNC_0(LARGE_INTEGER VAR_1)
{
    LARGE_INTEGER VAR_2;

    if (VAR_1.QuadPart == 0)
        return 0;

    VAR_2.QuadPart = -VAR_1.QuadPart / 10000000;

    if (VAR_2.HighPart != 0)
        return VAR_0;

    return VAR_2.LowPart;
}
