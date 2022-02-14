
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int busy; } ;
typedef scalar_t__ LONG ;
typedef TYPE_1__ GpImage ;
typedef int BOOL ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int ) ;

__attribute__((used)) static inline BOOL FUNC_2(GpImage *VAR_0, BOOL *VAR_1)
{
    LONG VAR_2 = FUNC_0(), VAR_3;
    VAR_3 = FUNC_1(&VAR_0->busy, VAR_2, 0);
    *VAR_1 = !VAR_3;
    return !VAR_3 || VAR_3==VAR_2;
}
