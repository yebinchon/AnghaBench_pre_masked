
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {int dwFlags; } ;
struct TYPE_5__ {int dwFlags; } ;
struct TYPE_6__ {TYPE_3__ filterKeys; TYPE_1__ oldFilterKeys; } ;
typedef TYPE_2__* PGLOBAL_DATA ;
typedef int FILTERKEYS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,TYPE_3__*,int ) ;

__attribute__((used)) static VOID
FUNC_1(PGLOBAL_DATA VAR_3)
{
    if (VAR_3->oldFilterKeys.dwFlags & VAR_0)
    {
        VAR_3->filterKeys.dwFlags |= VAR_0;
    }
    else
    {
        VAR_3->filterKeys.dwFlags &= ~VAR_0;
    }

    if (VAR_3->oldFilterKeys.dwFlags & VAR_1)
    {
        VAR_3->filterKeys.dwFlags |= VAR_1;
    }
    else
    {
        VAR_3->filterKeys.dwFlags &= ~VAR_1;
    }

    FUNC_0(VAR_2,
                         sizeof(FILTERKEYS),
                         &VAR_3->filterKeys,
                         0);
}
