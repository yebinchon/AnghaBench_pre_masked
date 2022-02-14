
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_6__ {int PageFrameNumber; } ;
struct TYPE_7__ {int Long; TYPE_1__ Hard; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
typedef int PVOID ;
typedef TYPE_3__* PMMPTE ;
typedef TYPE_3__ MMPTE ;
typedef int LONG ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static
ULONG_PTR
FUNC_2(ULONG_PTR VAR_10, LONG VAR_11)
{
    MMPTE VAR_12;
    PMMPTE VAR_13;
    ULONG_PTR VAR_14;

    VAR_12.u.Long = VAR_7 | VAR_9 | VAR_8 |
                     VAR_6 | VAR_4 | VAR_5;

    if ((VAR_10 & (VAR_3 - 1)) + VAR_11 > VAR_3)
    {
        VAR_12.u.Hard.PageFrameNumber = (VAR_10 >> VAR_2) + 1;
        VAR_13 = FUNC_1((PVOID)VAR_1);
        *VAR_13 = VAR_12;
        VAR_14 = (ULONG_PTR)VAR_13 << 10;
        FUNC_0((PVOID)VAR_14);
    }

    VAR_12.u.Hard.PageFrameNumber = VAR_10 >> VAR_2;
    VAR_13 = FUNC_1((PVOID)VAR_0);
    *VAR_13 = VAR_12;
    VAR_14 = (ULONG_PTR)VAR_13 << 10;
    FUNC_0((PVOID)VAR_14);

    return VAR_14 + (VAR_10 & (VAR_3 - 1));
}
